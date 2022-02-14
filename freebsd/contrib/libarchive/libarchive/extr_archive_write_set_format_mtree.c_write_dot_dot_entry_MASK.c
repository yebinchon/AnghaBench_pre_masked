
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int length; int s; } ;
struct mtree_writer {int depth; TYPE_3__ buf; scalar_t__ dironly; TYPE_3__ ebuf; scalar_t__ indent; } ;
struct TYPE_8__ {int s; } ;
struct TYPE_7__ {int s; } ;
struct mtree_entry {TYPE_2__ basename; TYPE_1__ parentdir; } ;
struct archive_write {struct mtree_writer* format_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct archive_write*,int ,int) ;
 int FUNC_1 (TYPE_3__*,char) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,char*,int ,int ) ;
 int FUNC_4 (TYPE_3__*,char*,int) ;
 int FUNC_5 (struct mtree_writer*) ;

__attribute__((used)) static int
FUNC_6(struct archive_write *VAR_1, struct mtree_entry *VAR_2)
{
 struct mtree_writer *VAR_3 = VAR_1->format_data;
 int VAR_4;

 if (VAR_2->parentdir.s) {
  if (VAR_3->indent) {
   int VAR_5, VAR_6 = VAR_3->depth * 4;
   for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
    FUNC_1(&VAR_3->buf, ' ');
  }
  FUNC_3(&VAR_3->buf, "# %s/%s\n",
   VAR_2->parentdir.s, VAR_2->basename.s);
 }

 if (VAR_3->indent) {
  FUNC_2(&VAR_3->ebuf);
  FUNC_4(&VAR_3->ebuf, "..\n\n", (VAR_3->dironly)?3:4);
  FUNC_5(VAR_3);
 } else
  FUNC_4(&VAR_3->buf, "..\n\n", (VAR_3->dironly)?3:4);

 if (VAR_3->buf.length > 32768) {
  VAR_4 = FUNC_0(
   VAR_1, VAR_3->buf.s, VAR_3->buf.length);
  FUNC_2(&VAR_3->buf);
 } else
  VAR_4 = VAR_0;
 return (VAR_4);
}
