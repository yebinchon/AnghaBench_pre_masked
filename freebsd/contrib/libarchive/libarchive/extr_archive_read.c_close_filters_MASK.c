
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read_filter {int closed; int (* close ) (struct archive_read_filter*) ;int * buffer; struct archive_read_filter* upstream; } ;
struct archive_read {struct archive_read_filter* filter; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct archive_read_filter*) ;

__attribute__((used)) static int
FUNC_2(struct archive_read *VAR_1)
{
 struct archive_read_filter *VAR_2 = VAR_1->filter;
 int VAR_3 = VAR_0;

 while (VAR_2 != ((void*)0)) {
  struct archive_read_filter *VAR_4 = VAR_2->upstream;
  if (!VAR_2->closed && VAR_2->close != ((void*)0)) {
   int VAR_5 = (VAR_2->close)(VAR_2);
   VAR_2->closed = 1;
   if (VAR_5 < VAR_3)
    VAR_3 = VAR_5;
  }
  FUNC_0(VAR_2->buffer);
  VAR_2->buffer = ((void*)0);
  VAR_2 = VAR_4;
 }
 return VAR_3;
}
