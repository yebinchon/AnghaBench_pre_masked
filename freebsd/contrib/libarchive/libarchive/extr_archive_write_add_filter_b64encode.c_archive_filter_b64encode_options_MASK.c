
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct private_b64encode {int mode; int name; } ;
struct archive_write_filter {int archive; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int *,char const*) ;
 scalar_t__ FUNC_2 (char const*,int ) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int
FUNC_5(struct archive_write_filter *VAR_4, const char *VAR_5,
    const char *VAR_6)
{
 struct private_b64encode *VAR_7 = (struct private_b64encode *)VAR_4->data;

 if (FUNC_3(VAR_5, "mode") == 0) {
  if (VAR_6 == ((void*)0)) {
   FUNC_0(VAR_4->archive, VAR_0,
       "mode option requires octal digits");
   return (VAR_1);
  }
  VAR_7->mode = (int)FUNC_2(VAR_6, FUNC_4(VAR_6)) & 0777;
  return (VAR_2);
 } else if (FUNC_3(VAR_5, "name") == 0) {
  if (VAR_6 == ((void*)0)) {
   FUNC_0(VAR_4->archive, VAR_0,
       "name option requires a string");
   return (VAR_1);
  }
  FUNC_1(&VAR_7->name, VAR_6);
  return (VAR_2);
 }




 return (VAR_3);
}
