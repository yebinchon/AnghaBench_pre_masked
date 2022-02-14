
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; int s; } ;
struct mtree_writer {TYPE_1__ buf; int * root; } ;
struct archive_write {int archive; struct mtree_writer* format_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive_write*,int ,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct archive_write*) ;

__attribute__((used)) static int
FUNC_3(struct archive_write *VAR_2)
{
 struct mtree_writer *VAR_3= VAR_2->format_data;
 int VAR_4;

 if (VAR_3->root != ((void*)0)) {
  VAR_4 = FUNC_2(VAR_2);
  if (VAR_4 != VAR_1)
   return (VAR_0);
 }

 FUNC_1(&VAR_2->archive, 1);

 return FUNC_0(VAR_2, VAR_3->buf.s, VAR_3->buf.length);
}
