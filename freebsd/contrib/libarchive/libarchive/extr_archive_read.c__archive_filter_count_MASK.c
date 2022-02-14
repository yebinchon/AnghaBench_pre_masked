
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read_filter {struct archive_read_filter* upstream; } ;
struct archive_read {struct archive_read_filter* filter; } ;
struct archive {int dummy; } ;



__attribute__((used)) static int
FUNC_0(struct archive *VAR_0)
{
 struct archive_read *VAR_1 = (struct archive_read *)VAR_0;
 struct archive_read_filter *VAR_2 = VAR_1->filter;
 int VAR_3 = 0;
 while(VAR_2) {
  VAR_3++;
  VAR_2 = VAR_2->upstream;
 }
 return VAR_3;
}
