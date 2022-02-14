
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read_filter {struct archive_read_filter* upstream; } ;
struct archive_read {struct archive_read_filter* filter; } ;
struct archive {int dummy; } ;



__attribute__((used)) static struct archive_read_filter *
FUNC_0(struct archive *VAR_0, int VAR_1)
{
 struct archive_read *VAR_2 = (struct archive_read *)VAR_0;
 struct archive_read_filter *VAR_3 = VAR_2->filter;


 if (VAR_1 == -1 && VAR_3 != ((void*)0)) {
  struct archive_read_filter *VAR_4 = VAR_3;
  VAR_3 = VAR_3->upstream;
  while (VAR_3 != ((void*)0)) {
   VAR_4 = VAR_3;
   VAR_3 = VAR_3->upstream;
  }
  return (VAR_4);
 }
 if (VAR_1 < 0)
  return ((void*)0);
 while (VAR_1 > 0 && VAR_3 != ((void*)0)) {
  VAR_3 = VAR_3->upstream;
  --VAR_1;
 }
 return (VAR_3);
}
