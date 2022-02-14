
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write_program_data {scalar_t__ child; int program_name; } ;
struct archive_write_filter {int archive; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,int ) ;
 int FUNC_1 (struct archive_write_filter*,struct archive_write_program_data*,char const*,size_t) ;

int
FUNC_2(struct archive_write_filter *VAR_3,
    struct archive_write_program_data *VAR_4, const void *VAR_5, size_t VAR_6)
{
 ssize_t VAR_7;
 const char *VAR_8;

 if (VAR_4->child == 0)
  return (VAR_1);

 VAR_8 = VAR_5;
 while (VAR_6 > 0) {
  VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_8, VAR_6);
  if (VAR_7 == -1 || VAR_7 == 0) {
   FUNC_0(VAR_3->archive, VAR_2,
       "Can't write to program: %s", VAR_4->program_name);
   return (VAR_0);
  }
  VAR_6 -= VAR_7;
  VAR_8 += VAR_7;
 }
 return (VAR_1);
}
