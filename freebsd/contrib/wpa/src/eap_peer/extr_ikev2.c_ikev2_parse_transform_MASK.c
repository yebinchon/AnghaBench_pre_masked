
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void* u16 ;
struct ikev2_transform {int type; int transform_type; int const* transform_id; int const* transform_length; } ;
struct ikev2_proposal_data {void* dh; void* integ; void* prf; void* encr; } ;


 void* VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int ,char*,int const*,int) ;
 int FUNC_6 (int ,char*,...) ;

__attribute__((used)) static int FUNC_7(struct ikev2_proposal_data *VAR_3,
     const u8 *VAR_4, const u8 *VAR_5)
{
 int VAR_6;
 const struct ikev2_transform *VAR_7;
 u16 VAR_8;
 const u8 *VAR_9;

 if (VAR_5 - VAR_4 < (int) sizeof(*VAR_7)) {
  FUNC_6(VAR_2, "IKEV2: Too short transform");
  return -1;
 }

 VAR_7 = (const struct ikev2_transform *) VAR_4;
 VAR_6 = FUNC_0(VAR_7->transform_length);
 if (VAR_6 < (int) sizeof(*VAR_7) || VAR_6 > VAR_5 - VAR_4) {
  FUNC_6(VAR_2, "IKEV2: Invalid transform length %d",
      VAR_6);
  return -1;
 }
 VAR_9 = VAR_4 + VAR_6;

 VAR_8 = FUNC_0(VAR_7->transform_id);

 FUNC_6(VAR_1, "IKEV2:   Transform:");
 FUNC_6(VAR_1, "IKEV2:     Type: %d  Transform Length: %d  "
     "Transform Type: %d  Transform ID: %d",
     VAR_7->type, VAR_6, VAR_7->transform_type, VAR_8);

 if (VAR_7->type != 0 && VAR_7->type != 3) {
  FUNC_6(VAR_2, "IKEV2: Unexpected Transform type");
  return -1;
 }

 VAR_4 = (const u8 *) (VAR_7 + 1);
 if (VAR_4 < VAR_9) {
  FUNC_5(VAR_1, "IKEV2:     Transform Attributes",
       VAR_4, VAR_9 - VAR_4);
 }

 switch (VAR_7->transform_type) {
 case 130:
  if (FUNC_2(VAR_8)) {
   if (VAR_8 == VAR_0) {
    if (VAR_9 - VAR_4 != 4) {
     FUNC_6(VAR_1, "IKEV2: No "
         "Transform Attr for AES");
     break;
    }
    if (FUNC_0(VAR_4) != 0x800e) {
     FUNC_6(VAR_1, "IKEV2: Not a "
         "Key Size attribute for "
         "AES");
     break;
    }
    if (FUNC_0(VAR_4 + 2) != 128) {
     FUNC_6(VAR_1, "IKEV2: "
         "Unsupported AES key size "
         "%d bits",
         FUNC_0(VAR_4 + 2));
     break;
    }
   }
   VAR_3->encr = VAR_8;
  }
  break;
 case 128:
  if (FUNC_4(VAR_8))
   VAR_3->prf = VAR_8;
  break;
 case 129:
  if (FUNC_3(VAR_8))
   VAR_3->integ = VAR_8;
  break;
 case 131:
  if (FUNC_1(VAR_8))
   VAR_3->dh = VAR_8;
  break;
 }

 return VAR_6;
}
