
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct match_list {struct match* first; } ;
struct match {int matches; int pattern; struct match* next; } ;
struct archive_match {int archive; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,char const**) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct archive_match*) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;

__attribute__((used)) static int
FUNC_3(struct archive_match *VAR_2, struct match_list *VAR_3,
    const char *VAR_4)
{
 struct match *VAR_5;
 const char *VAR_6;

 if (VAR_4 == ((void*)0) || *VAR_4 == '\0')
  return (0);
 for (VAR_5 = VAR_3->first; VAR_5; VAR_5 = VAR_5->next) {
  if (FUNC_0(&(VAR_2->archive), &(VAR_5->pattern), &VAR_6)
      < 0 && VAR_1 == VAR_0)
   return (FUNC_1(VAR_2));
  if (VAR_6 != ((void*)0) && FUNC_2(VAR_6, VAR_4) == 0) {
   VAR_5->matches++;
   return (1);
  }
 }
 return (0);
}
