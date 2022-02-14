
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct match {int pattern; } ;
struct archive_match {int archive; scalar_t__ recursive_include; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,char const**) ;
 int FUNC_1 (int *,int *,int const**) ;
 int FUNC_2 (char const*,char const*,int) ;
 int FUNC_3 (int const*,int const*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (struct archive_match*) ;

__attribute__((used)) static int
FUNC_5(struct archive_match *VAR_3, struct match *VAR_4,
    int VAR_5, const void *VAR_6)
{

 int VAR_7 = VAR_3->recursive_include ?
  VAR_1 :
  0;
 int VAR_8;

 if (VAR_5) {
  const char *VAR_9;
  VAR_8 = FUNC_0(&(VAR_3->archive), &(VAR_4->pattern), &VAR_9);
  if (VAR_8 == 0)
   return (FUNC_2(VAR_9, (const char *)VAR_6, VAR_7));
 } else {
  const wchar_t *VAR_10;
  VAR_8 = FUNC_1(&(VAR_3->archive), &(VAR_4->pattern), &VAR_10);
  if (VAR_8 == 0)
   return (FUNC_3(VAR_10, (const wchar_t *)VAR_6,
    VAR_7));
 }
 if (VAR_2 == VAR_0)
  return (FUNC_4(VAR_3));
 return (0);
}
