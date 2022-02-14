
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read_filter {struct archive_read_filter* upstream; } ;
struct archive_read {struct archive_read_filter* filter; } ;


 int FUNC_0 (struct archive_read*) ;
 int FUNC_1 (struct archive_read_filter*) ;

void
FUNC_2(struct archive_read *VAR_0)
{

 FUNC_0(VAR_0);

 while (VAR_0->filter != ((void*)0)) {
  struct archive_read_filter *VAR_1 = VAR_0->filter->upstream;
  FUNC_1(VAR_0->filter);
  VAR_0->filter = VAR_1;
 }
}
