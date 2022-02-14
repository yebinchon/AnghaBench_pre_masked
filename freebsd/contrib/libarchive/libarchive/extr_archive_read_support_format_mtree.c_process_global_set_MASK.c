
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtree_option {int dummy; } ;
struct archive_read {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct archive_read*,struct mtree_option**,char const*,int) ;
 int FUNC_1 (struct mtree_option**,char const*,size_t) ;
 char* FUNC_2 (char const*,char) ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 (char const*,char*) ;

__attribute__((used)) static int
FUNC_5(struct archive_read *VAR_1,
    struct mtree_option **VAR_2, const char *VAR_3)
{
 const char *VAR_4, *VAR_5;
 size_t VAR_6;
 int VAR_7;

 VAR_3 += 4;
 for (;;) {
  VAR_4 = VAR_3 + FUNC_4(VAR_3, " \t\r\n");
  if (*VAR_4 == '\0')
   return (VAR_0);
  VAR_3 = VAR_4;
  VAR_4 = VAR_3 + FUNC_3(VAR_3, " \t\r\n");
  VAR_5 = FUNC_2(VAR_3, '=');
  if (VAR_5 > VAR_4)
   VAR_6 = VAR_4 - VAR_3;
  else
   VAR_6 = VAR_5 - VAR_3;

  FUNC_1(VAR_2, VAR_3, VAR_6);
  VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4 - VAR_3);
  if (VAR_7 != VAR_0)
   return (VAR_7);
  VAR_3 = VAR_4;
 }
}
