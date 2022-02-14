
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write_filter {int (* free ) (struct archive_write_filter*) ;struct archive_write_filter* next_filter; } ;
struct archive_write {int * filter_last; struct archive_write_filter* filter_first; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct archive_write_filter*) ;
 int FUNC_1 (struct archive_write_filter*) ;

void
FUNC_2(struct archive *VAR_1)
{
 struct archive_write *VAR_2 = (struct archive_write *)VAR_1;
 int VAR_3 = VAR_0, VAR_4;

 while (VAR_2->filter_first != ((void*)0)) {
  struct archive_write_filter *VAR_5
      = VAR_2->filter_first->next_filter;
  if (VAR_2->filter_first->free != ((void*)0)) {
   VAR_4 = (*VAR_2->filter_first->free)(VAR_2->filter_first);
   if (VAR_3 > VAR_4)
    VAR_3 = VAR_4;
  }
  FUNC_0(VAR_2->filter_first);
  VAR_2->filter_first = VAR_5;
 }
 VAR_2->filter_last = ((void*)0);
}
