
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write_filter {struct archive_write_filter* next_filter; } ;
struct archive_write {struct archive_write_filter* filter_last; struct archive_write_filter* filter_first; } ;
struct archive {int dummy; } ;



__attribute__((used)) static struct archive_write_filter *
FUNC_0(struct archive *VAR_0, int VAR_1)
{
 struct archive_write *VAR_2 = (struct archive_write *)VAR_0;
 struct archive_write_filter *VAR_3 = VAR_2->filter_first;
 if (VAR_1 == -1)
  return VAR_2->filter_last;
 if (VAR_1 < 0)
  return ((void*)0);
 while (VAR_1 > 0 && VAR_3 != ((void*)0)) {
  VAR_3 = VAR_3->next_filter;
  --VAR_1;
 }
 return VAR_3;
}
