
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct match {int pattern; } ;
struct archive_match {int archive; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,char const**) ;
 int FUNC_1 (int *,int *,int const**) ;
 int FUNC_2 (char const*,char const*,int) ;
 int FUNC_3 (int const*,int const*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (struct archive_match*) ;

__attribute__((used)) static int
FUNC_5(struct archive_match *VAR_4, struct match *VAR_5,
    int VAR_6, const void *VAR_7)
{
 int VAR_8 = VAR_2 | VAR_1;
 int VAR_9;

 if (VAR_6) {
  const char *VAR_10;
  VAR_9 = FUNC_0(&(VAR_4->archive), &(VAR_5->pattern), &VAR_10);
  if (VAR_9 == 0)
   return (FUNC_2(VAR_10, (const char *)VAR_7, VAR_8));
 } else {
  const wchar_t *VAR_11;
  VAR_9 = FUNC_1(&(VAR_4->archive), &(VAR_5->pattern), &VAR_11);
  if (VAR_9 == 0)
   return (FUNC_3(VAR_11, (const wchar_t *)VAR_7,
    VAR_8));
 }
 if (VAR_3 == VAR_0)
  return (FUNC_4(VAR_4));
 return (0);
}
