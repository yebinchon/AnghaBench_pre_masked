
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct compressed_block_header {int block_cksum; scalar_t__ block_flags_u8; } ;
struct archive_read {int archive; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int *,int ,char*,int,...) ;
 int FUNC_3 (struct compressed_block_header*) ;
 int FUNC_4 (struct compressed_block_header*,int const*,int) ;

__attribute__((used)) static int FUNC_5(struct archive_read* VAR_3, const uint8_t* VAR_4,
    ssize_t* VAR_5, struct compressed_block_header* VAR_6)
{
 FUNC_4(VAR_6, VAR_4, sizeof(struct compressed_block_header));

 if(FUNC_3(VAR_6) > 2) {
  FUNC_2(&VAR_3->archive, VAR_0,
      "Unsupported block header size (was %d, max is 2)",
      FUNC_3(VAR_6));
  return VAR_1;
 }



 *VAR_5 = 0;
 switch(FUNC_3(VAR_6)) {

  case 0:
   *VAR_5 = *(const uint8_t*) &VAR_4[2];
   break;


  case 1:
   *VAR_5 = FUNC_0(&VAR_4[2]);
   break;


  case 2:
   *VAR_5 = FUNC_1(&VAR_4[2]);
   *VAR_5 &= 0x00FFFFFF;
   break;




  default:
   return VAR_1;
 }



 uint8_t VAR_7 = 0x5A
     ^ (uint8_t) VAR_6->block_flags_u8
     ^ (uint8_t) *VAR_5
     ^ (uint8_t) (*VAR_5 >> 8)
     ^ (uint8_t) (*VAR_5 >> 16);

 if(VAR_7 != VAR_6->block_cksum) {
  FUNC_2(&VAR_3->archive, VAR_0,
      "Block checksum error: got 0x%x, expected 0x%x",
      VAR_6->block_cksum, VAR_7);

  return VAR_1;
 }

 return VAR_2;
}
