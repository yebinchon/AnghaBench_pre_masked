
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;
struct match_list {int unmatched_eof; scalar_t__ unmatched_count; struct match* unmatched_next; struct match* first; } ;
struct match {struct match* next; int pattern; scalar_t__ matches; } ;
struct archive_match {int archive; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int *,char const**) ;
 int FUNC_1 (int *,int *,char const**) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct archive_match*) ;

__attribute__((used)) static int
FUNC_3(struct archive_match *VAR_4,
    struct match_list *VAR_5, int VAR_6, const void **VAR_7)
{
 struct match *VAR_8;

 *VAR_7 = ((void*)0);
 if (VAR_5->unmatched_eof) {
  VAR_5->unmatched_eof = 0;
  return (VAR_0);
 }
 if (VAR_5->unmatched_next == ((void*)0)) {
  if (VAR_5->unmatched_count == 0)
   return (VAR_0);
  VAR_5->unmatched_next = VAR_5->first;
 }

 for (VAR_8 = VAR_5->unmatched_next; VAR_8 != ((void*)0); VAR_8 = VAR_8->next) {
  int VAR_9;

  if (VAR_8->matches)
   continue;
  if (VAR_6) {
   const char *VAR_10;
   VAR_9 = FUNC_0(&(VAR_4->archive),
    &(VAR_8->pattern), &VAR_10);
   if (VAR_9 < 0 && VAR_3 == VAR_2)
    return (FUNC_2(VAR_4));
   if (VAR_10 == ((void*)0))
    VAR_10 = "";
   *VAR_7 = VAR_10;
  } else {
   const wchar_t *VAR_11;
   VAR_9 = FUNC_1(&(VAR_4->archive),
    &(VAR_8->pattern), &VAR_11);
   if (VAR_9 < 0 && VAR_3 == VAR_2)
    return (FUNC_2(VAR_4));
   if (VAR_11 == ((void*)0))
    VAR_11 = L"";
   *VAR_7 = VAR_11;
  }
  VAR_5->unmatched_next = VAR_8->next;
  if (VAR_5->unmatched_next == ((void*)0))

   VAR_5->unmatched_eof = 1;
  return (VAR_1);
 }
 VAR_5->unmatched_next = ((void*)0);
 return (VAR_0);
}
