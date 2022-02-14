
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ikev2_proposal_data {int proposal_num; } ;
struct ikev2_proposal {int proposal_num; int type; scalar_t__ protocol_id; int spi_size; scalar_t__ num_transforms; int proposal_length; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ikev2_proposal_data*,int const*,int const*) ;
 int FUNC_2 (int ,char*,int const*,int) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static int FUNC_4(struct ikev2_proposal_data *VAR_3,
    const u8 *VAR_4, const u8 *VAR_5)
{
 const u8 *VAR_6, *VAR_7;
 int VAR_8, VAR_9;
 const struct ikev2_proposal *VAR_10;

 if (VAR_5 - VAR_4 < (int) sizeof(*VAR_10)) {
  FUNC_3(VAR_2, "IKEV2: Too short proposal");
  return -1;
 }



 VAR_10 = (const struct ikev2_proposal *) VAR_4;
 VAR_8 = FUNC_0(VAR_10->proposal_length);
 if (VAR_8 < (int) sizeof(*VAR_10) || VAR_8 > VAR_5 - VAR_4) {
  FUNC_3(VAR_2, "IKEV2: Invalid proposal length %d",
      VAR_8);
  return -1;
 }
 FUNC_3(VAR_1, "IKEV2: SAi1 Proposal # %d",
     VAR_10->proposal_num);
 FUNC_3(VAR_1, "IKEV2:   Type: %d  Proposal Length: %d "
     " Protocol ID: %d",
     VAR_10->type, VAR_8, VAR_10->protocol_id);
 FUNC_3(VAR_1, "IKEV2:   SPI Size: %d  Transforms: %d",
     VAR_10->spi_size, VAR_10->num_transforms);

 if (VAR_10->type != 0 && VAR_10->type != 2) {
  FUNC_3(VAR_2, "IKEV2: Unexpected Proposal type");
  return -1;
 }

 if (VAR_10->protocol_id != VAR_0) {
  FUNC_3(VAR_1, "IKEV2: Unexpected Protocol ID "
      "(only IKE allowed for EAP-IKEv2)");
  return -1;
 }

 if (VAR_10->proposal_num != VAR_3->proposal_num) {
  if (VAR_10->proposal_num == VAR_3->proposal_num + 1)
   VAR_3->proposal_num = VAR_10->proposal_num;
  else {
   FUNC_3(VAR_2, "IKEV2: Unexpected Proposal #");
   return -1;
  }
 }

 VAR_7 = (const u8 *) (VAR_10 + 1);
 VAR_6 = VAR_4 + VAR_8;
 if (VAR_10->spi_size > VAR_6 - VAR_7) {
  FUNC_3(VAR_2, "IKEV2: Not enough room for SPI "
      "in proposal");
  return -1;
 }
 if (VAR_10->spi_size) {
  FUNC_2(VAR_1, "IKEV2:    SPI",
       VAR_7, VAR_10->spi_size);
  VAR_7 += VAR_10->spi_size;
 }






 if (VAR_10->spi_size != 0) {
  FUNC_3(VAR_2, "IKEV2: Unexpected SPI Size");
  return -1;
 }

 if (VAR_10->num_transforms == 0) {
  FUNC_3(VAR_2, "IKEV2: At least one transform required");
  return -1;
 }

 for (VAR_9 = 0; VAR_9 < (int) VAR_10->num_transforms; VAR_9++) {
  int VAR_11 = FUNC_1(VAR_3, VAR_7, VAR_6);
  if (VAR_11 < 0)
   return -1;
  VAR_7 += VAR_11;
 }

 if (VAR_7 != VAR_6) {
  FUNC_3(VAR_2, "IKEV2: Unexpected data after "
      "transforms");
  return -1;
 }

 return VAR_8;
}
