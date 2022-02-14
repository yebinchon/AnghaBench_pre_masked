
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
struct archive_write {struct iso9660* format_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned char*,int ,int ) ;
 int FUNC_1 (unsigned char*,int ,struct isoent*,struct iso9660*,int ,scalar_t__) ;
 unsigned char* FUNC_2 (struct archive_write*) ;
 int FUNC_3 (struct archive_write*,int ) ;

__attribute__((used)) static int
FUNC_4(struct archive_write *VAR_6, struct vdd *VAR_7,
    struct isoent *VAR_8, int VAR_9)
{
 struct iso9660 *VAR_10 = VAR_6->format_data;
 struct isoent **VAR_11;
 unsigned char *VAR_12, *VAR_13;
 int VAR_14, VAR_15;
 int VAR_16;

 VAR_12 = VAR_13 = FUNC_2(VAR_6);

 VAR_12 += FUNC_1(VAR_12, (VAR_3 - (VAR_12 - VAR_13)), VAR_8,
     VAR_10, VAR_2, VAR_7->vdd_type);
 VAR_12 += FUNC_1(VAR_12, (VAR_3 - (VAR_12 - VAR_13)), VAR_8,
     VAR_10, VAR_1, VAR_7->vdd_type);

 if (VAR_8->children.cnt <= 0 || (VAR_7->vdd_type != VAR_4 &&
     !VAR_10->opt.rr && VAR_9 + 1 >= VAR_7->max_depth)) {
  FUNC_0(VAR_12, 0, (VAR_3 - (VAR_12 - VAR_13)));
  return (FUNC_3(VAR_6, VAR_3));
 }

 VAR_11 = VAR_8->children_sorted;
 for (VAR_14 = 0; VAR_14 < VAR_8->children.cnt; VAR_14++) {
  struct isoent *VAR_17 = VAR_11[VAR_14];
  struct isofile *VAR_18 = VAR_17->file;

  if (VAR_18->hardlink_target != ((void*)0))
   VAR_18 = VAR_18->hardlink_target;
  VAR_18->cur_content = &(VAR_18->content);
  do {
   VAR_16 = FUNC_1(VAR_12, (VAR_3 - (VAR_12 - VAR_13)),
       VAR_17, VAR_10, VAR_0,
       VAR_7->vdd_type);
   if (VAR_16 == 0) {
    FUNC_0(VAR_12, 0, (VAR_3 - (VAR_12 - VAR_13)));
    VAR_15 = FUNC_3(VAR_6, VAR_3);
    if (VAR_15 < 0)
     return (VAR_15);
    VAR_12 = VAR_13 = FUNC_2(VAR_6);
    VAR_16 = FUNC_1(VAR_12,
        (VAR_3 - (VAR_12 - VAR_13)), VAR_17, VAR_10,
        VAR_0, VAR_7->vdd_type);
   }
   VAR_12 += VAR_16;
   VAR_18->cur_content = VAR_18->cur_content->next;
  } while (VAR_18->cur_content != ((void*)0));
 }
 FUNC_0(VAR_12, 0, (VAR_3 - (VAR_12 - VAR_13)));
 return (FUNC_3(VAR_6, VAR_3));
}
