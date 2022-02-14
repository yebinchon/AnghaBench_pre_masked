
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write {int archive; } ;
struct archive_string {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*,size_t,char const*) ;
 int FUNC_1 (struct archive_string*,char const*) ;
 size_t FUNC_2 (char const*) ;

__attribute__((used)) static int
FUNC_3(struct archive_write *VAR_3, struct archive_string *VAR_4,
    size_t VAR_5, const char *VAR_6, const char *VAR_7)
{

 if (FUNC_2(VAR_7) > VAR_5) {
  FUNC_0(&VAR_3->archive, VAR_0,
      "Value is longer than %zu characters "
      "for option ``%s''", VAR_5, VAR_6);
  return (VAR_1);
 }
 FUNC_1(VAR_4, VAR_7);
 return (VAR_2);
}
