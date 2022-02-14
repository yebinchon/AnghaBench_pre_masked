
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int st_ino; int st_dev; } ;
struct TYPE_5__ {int st_ino; int st_dev; } ;
struct tree {scalar_t__ visit_type; scalar_t__ descend; TYPE_4__* stack; int restore_time; TYPE_3__ st; int current_filesystem_id; int basename; TYPE_1__ lst; } ;
struct archive_read_disk {struct tree* tree; } ;
struct archive {int dummy; } ;
struct TYPE_8__ {int flags; TYPE_2__* parent; } ;
struct TYPE_6__ {int * parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct archive*,int ,int,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct tree*) ;
 scalar_t__ FUNC_2 (struct tree*) ;
 int FUNC_3 (struct tree*,int ,int ,int ,int ,int *) ;

int
FUNC_4(struct archive *VAR_7)
{
 struct archive_read_disk *VAR_8 = (struct archive_read_disk *)VAR_7;
 struct tree *VAR_9 = VAR_8->tree;

 FUNC_0(VAR_7, VAR_1,
     VAR_3 | VAR_2,
     "archive_read_disk_descend");

 if (VAR_9->visit_type != VAR_4 || !VAR_9->descend)
  return (VAR_0);
 if (FUNC_2(VAR_9)) {
  FUNC_3(VAR_9, VAR_9->basename, VAR_9->current_filesystem_id,
      VAR_9->lst.st_dev, VAR_9->lst.st_ino, &VAR_9->restore_time);
  if (VAR_9->stack->parent->parent != ((void*)0))
   VAR_9->stack->flags |= VAR_5;
  else
   VAR_9->stack->flags |= VAR_6;
 } else if (FUNC_1(VAR_9)) {
  FUNC_3(VAR_9, VAR_9->basename, VAR_9->current_filesystem_id,
      VAR_9->st.st_dev, VAR_9->st.st_ino, &VAR_9->restore_time);
  VAR_9->stack->flags |= VAR_6;
 }
 VAR_9->descend = 0;
 return (VAR_0);
}
