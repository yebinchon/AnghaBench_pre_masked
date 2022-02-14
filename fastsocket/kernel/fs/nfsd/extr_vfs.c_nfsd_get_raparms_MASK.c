
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct raparms {scalar_t__ p_ino; scalar_t__ p_dev; scalar_t__ p_count; unsigned int p_hindex; struct raparms* p_next; scalar_t__ p_set; } ;
struct raparm_hbucket {int pb_lock; struct raparms* pb_head; } ;
typedef scalar_t__ ino_t ;
typedef scalar_t__ dev_t ;
struct TYPE_2__ {int ra_size; int * ra_depth; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (scalar_t__,scalar_t__,int) ;
 TYPE_1__ VAR_1 ;
 struct raparm_hbucket* VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline struct raparms *
FUNC_3(dev_t VAR_3, ino_t VAR_4)
{
 struct raparms *VAR_5, **VAR_6, **VAR_7 = ((void*)0);
 int VAR_8 = 0;
 unsigned int VAR_9;
 struct raparm_hbucket *VAR_10;

 VAR_9 = FUNC_0(VAR_3, VAR_4, 0xfeedbeef) & VAR_0;
 VAR_10 = &VAR_2[VAR_9];

 FUNC_1(&VAR_10->pb_lock);
 for (VAR_6 = &VAR_10->pb_head; (VAR_5 = *VAR_6); VAR_6 = &VAR_5->p_next) {
  if (VAR_5->p_ino == VAR_4 && VAR_5->p_dev == VAR_3)
   goto found;
  VAR_8++;
  if (VAR_5->p_count == 0)
   VAR_7 = VAR_6;
 }
 VAR_8 = VAR_1.ra_size*11/10;
 if (!VAR_7) {
  FUNC_2(&VAR_10->pb_lock);
  return ((void*)0);
 }
 VAR_6 = VAR_7;
 VAR_5 = *VAR_7;
 VAR_5->p_dev = VAR_3;
 VAR_5->p_ino = VAR_4;
 VAR_5->p_set = 0;
 VAR_5->p_hindex = VAR_9;
found:
 if (VAR_6 != &VAR_10->pb_head) {
  *VAR_6 = VAR_5->p_next;
  VAR_5->p_next = VAR_10->pb_head;
  VAR_10->pb_head = VAR_5;
 }
 VAR_5->p_count++;
 VAR_1.ra_depth[VAR_8*10/VAR_1.ra_size]++;
 FUNC_2(&VAR_10->pb_lock);
 return VAR_5;
}
