
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write_filter {struct archive_write_filter* next_filter; struct archive* archive; } ;
struct archive_write {struct archive_write_filter* filter_last; struct archive_write_filter* filter_first; } ;
struct archive {int dummy; } ;


 struct archive_write_filter* FUNC_0 (int,int) ;

struct archive_write_filter *
FUNC_1(struct archive *VAR_0)
{
 struct archive_write *VAR_1 = (struct archive_write *)VAR_0;
 struct archive_write_filter *VAR_2;

 VAR_2 = FUNC_0(1, sizeof(*VAR_2));
 VAR_2->archive = VAR_0;
 if (VAR_1->filter_first == ((void*)0))
  VAR_1->filter_first = VAR_2;
 else
  VAR_1->filter_last->next_filter = VAR_2;
 VAR_1->filter_last = VAR_2;
 return VAR_2;
}
