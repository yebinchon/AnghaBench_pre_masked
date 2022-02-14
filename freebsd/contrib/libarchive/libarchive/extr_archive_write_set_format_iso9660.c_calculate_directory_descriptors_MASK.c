
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vdd {scalar_t__ vdd_type; int max_depth; } ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
struct isofile {TYPE_3__* cur_content; TYPE_3__ content; struct isofile* hardlink_target; } ;
struct TYPE_5__ {int cnt; } ;
struct isoent {struct isofile* file; TYPE_2__ children; struct isoent** children_sorted; } ;
struct TYPE_4__ {int rr; } ;
struct iso9660 {TYPE_1__ opt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct iso9660*,struct isoent*,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct iso9660 *VAR_5, struct vdd *VAR_6,
    struct isoent *VAR_7, int VAR_8)
{
 struct isoent **VAR_9;
 int VAR_10, VAR_11, VAR_12;

 VAR_11 = 1;
 VAR_10 = FUNC_0(VAR_5, VAR_7, VAR_2, VAR_6->vdd_type);
 VAR_10 += FUNC_0(VAR_5, VAR_7, VAR_1, VAR_6->vdd_type);

 if (VAR_7->children.cnt <= 0 || (VAR_6->vdd_type != VAR_4 &&
     !VAR_5->opt.rr && VAR_8 + 1 >= VAR_6->max_depth))
  return (VAR_11);

 VAR_9 = VAR_7->children_sorted;
 for (VAR_12 = 0; VAR_12 < VAR_7->children.cnt; VAR_12++) {
  struct isoent *VAR_13 = VAR_9[VAR_12];
  struct isofile *VAR_14;

  VAR_14 = VAR_13->file;
  if (VAR_14->hardlink_target != ((void*)0))
   VAR_14 = VAR_14->hardlink_target;
  VAR_14->cur_content = &(VAR_14->content);
  do {
   int VAR_15;

   VAR_15 = FUNC_0(VAR_5, VAR_13, VAR_0,
       VAR_6->vdd_type);
   if ((VAR_10 + VAR_15) > VAR_3) {
    VAR_11 ++;
    VAR_10 = VAR_15;
   } else
    VAR_10 += VAR_15;
   VAR_14->cur_content = VAR_14->cur_content->next;
  } while (VAR_14->cur_content != ((void*)0));
 }
 return (VAR_11);
}
