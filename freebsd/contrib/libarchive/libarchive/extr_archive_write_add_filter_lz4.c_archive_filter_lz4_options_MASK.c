
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct private_data {int compression_level; char block_maximum_size; int block_independence; int block_checksum; int stream_checksum; } ;
struct archive_write_filter {int archive; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,char*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static int
FUNC_2(struct archive_write_filter *VAR_4,
    const char *VAR_5, const char *VAR_6)
{
 struct private_data *VAR_7 = (struct private_data *)VAR_4->data;

 if (FUNC_1(VAR_5, "compression-level") == 0) {
  int VAR_8;
  if (VAR_6 == ((void*)0) || !((VAR_8 = VAR_6[0] - '0') >= 1 && VAR_8 <= 9) ||
      VAR_6[1] != '\0')
   return (VAR_3);


  if(VAR_8 >= 3)
  {
   FUNC_0(VAR_4->archive, VAR_0,
    "High compression not included in this build");
   return (VAR_1);
  }

  VAR_7->compression_level = VAR_8;
  return (VAR_2);
 }
 if (FUNC_1(VAR_5, "stream-checksum") == 0) {
  VAR_7->stream_checksum = VAR_6 != ((void*)0);
  return (VAR_2);
 }
 if (FUNC_1(VAR_5, "block-checksum") == 0) {
  VAR_7->block_checksum = VAR_6 != ((void*)0);
  return (VAR_2);
 }
 if (FUNC_1(VAR_5, "block-size") == 0) {
  if (VAR_6 == ((void*)0) || !(VAR_6[0] >= '4' && VAR_6[0] <= '7') ||
      VAR_6[1] != '\0')
   return (VAR_3);
  VAR_7->block_maximum_size = VAR_6[0] - '0';
  return (VAR_2);
 }
 if (FUNC_1(VAR_5, "block-dependence") == 0) {
  VAR_7->block_independence = VAR_6 == ((void*)0);
  return (VAR_2);
 }




 return (VAR_3);
}
