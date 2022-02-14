
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct private_data {char compression_level; int timestamp; } ;
struct archive_write_filter {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static int
FUNC_1(struct archive_write_filter *VAR_2, const char *VAR_3,
    const char *VAR_4)
{
 struct private_data *VAR_5 = (struct private_data *)VAR_2->data;

 if (FUNC_0(VAR_3, "compression-level") == 0) {
  if (VAR_4 == ((void*)0) || !(VAR_4[0] >= '0' && VAR_4[0] <= '9') ||
      VAR_4[1] != '\0')
   return (VAR_1);
  VAR_5->compression_level = VAR_4[0] - '0';
  return (VAR_0);
 }
 if (FUNC_0(VAR_3, "timestamp") == 0) {
  VAR_5->timestamp = (VAR_4 == ((void*)0))?-1:1;
  return (VAR_0);
 }




 return (VAR_1);
}
