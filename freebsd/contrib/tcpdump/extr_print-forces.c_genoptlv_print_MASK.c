
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint16_t ;
typedef void* u_int ;
typedef int u_char ;
struct forces_tlv {int length; int type; } ;
struct TYPE_5__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 void* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct forces_tlv const) ;
 scalar_t__ FUNC_3 (struct forces_tlv const*) ;
 void* VAR_2 ;
 char* FUNC_4 (int,int ) ;
 int FUNC_5 (TYPE_1__*,int const*,int,void*,int) ;
 void* FUNC_6 (struct forces_tlv const*,void*) ;
 int FUNC_7 (int ,int *,void*) ;
 int VAR_3 ;
 int FUNC_8 (void*) ;

__attribute__((used)) static int
FUNC_9(netdissect_options *VAR_4,
               register const u_char * VAR_5, register u_int VAR_6,
               uint16_t VAR_7, int VAR_8)
{
 const struct forces_tlv *VAR_9 = (const struct forces_tlv *)VAR_5;
 uint16_t VAR_10;
 int VAR_11;
 u_int VAR_12;
 char *VAR_13 = FUNC_4(VAR_8, 0);

 FUNC_2(*VAR_9);
 VAR_10 = FUNC_0(&VAR_9->type);
 VAR_11 = FUNC_0(&VAR_9->length) - VAR_2;
 VAR_12 = FUNC_6(VAR_9, VAR_6);
 FUNC_1((VAR_4, "genoptlvprint - %s TLV type 0x%x len %d\n",
        FUNC_7(VAR_0, ((void*)0), VAR_10), VAR_10, FUNC_0(&VAR_9->length)));
 if (!VAR_12) {





  register const u_char *VAR_14 = (const u_char *) FUNC_3(VAR_9);
  if (!FUNC_8(VAR_10)) {
   FUNC_1((VAR_4, "%s TLV type 0x%x len %d\n",
          FUNC_7(VAR_1, ((void*)0), VAR_12), VAR_10,
          FUNC_0(&VAR_9->length)));
   return -1;
  }
  if (VAR_4->ndo_vflag >= 3)
   FUNC_1((VAR_4, "%s%s, length %d (data length %d Bytes)",
          VAR_13, FUNC_7(VAR_0, ((void*)0), VAR_10),
          FUNC_0(&VAR_9->length), VAR_11));

  return FUNC_5(VAR_4, VAR_14, VAR_11, VAR_7, VAR_8 + 1);
 } else {
  FUNC_1((VAR_4, "\t\t\tInvalid ForCES TLV type=%x", VAR_10));
  return -1;
 }

trunc:
 FUNC_1((VAR_4, "%s", VAR_3));
 return -1;
}
