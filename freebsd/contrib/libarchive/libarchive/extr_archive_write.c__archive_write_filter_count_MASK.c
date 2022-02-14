
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write_filter {struct archive_write_filter* next_filter; } ;
struct archive_write {struct archive_write_filter* filter_first; } ;
struct archive {int dummy; } ;



__attribute__((used)) static int
FUNC_0(struct archive *VAR_0)
{
 struct archive_write *VAR_1 = (struct archive_write *)VAR_0;
 struct archive_write_filter *VAR_2 = VAR_1->filter_first;
 int VAR_3 = 0;
 while(VAR_2) {
  VAR_3++;
  VAR_2 = VAR_2->next_filter;
 }
 return VAR_3;
}
