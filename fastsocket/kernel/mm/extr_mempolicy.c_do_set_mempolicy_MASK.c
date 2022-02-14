
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mm_struct {int mmap_sem; } ;
struct TYPE_5__ {int nodes; } ;
struct mempolicy {scalar_t__ mode; TYPE_1__ v; } ;
typedef int nodemask_t ;
struct TYPE_6__ {int il_next; struct mempolicy* mempolicy; struct mm_struct* mm; } ;


 long VAR_0 ;
 scalar_t__ FUNC_0 (struct mempolicy*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mempolicy*) ;
 TYPE_2__* VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 struct mempolicy* FUNC_6 (unsigned short,unsigned short,int *) ;
 int FUNC_7 (struct mempolicy*) ;
 int FUNC_8 (struct mempolicy*,int *,int ) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int ) ;
 int VAR_3 ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static long FUNC_14(unsigned short VAR_4, unsigned short VAR_5,
        nodemask_t *VAR_6)
{
 struct mempolicy *VAR_7, *VAR_8;
 struct mm_struct *VAR_9 = VAR_2->mm;
 FUNC_1(VAR_3);
 int VAR_10;

 if (!VAR_3)
  return -VAR_0;

 VAR_7 = FUNC_6(VAR_4, VAR_5, VAR_6);
 if (FUNC_0(VAR_7)) {
  VAR_10 = FUNC_3(VAR_7);
  goto out;
 }






 if (VAR_9)
  FUNC_4(&VAR_9->mmap_sem);
 FUNC_11(VAR_2);
 VAR_10 = FUNC_8(VAR_7, VAR_6, VAR_3);
 if (VAR_10) {
  FUNC_12(VAR_2);
  if (VAR_9)
   FUNC_13(&VAR_9->mmap_sem);
  FUNC_7(VAR_7);
  goto out;
 }
 VAR_8 = VAR_2->mempolicy;
 VAR_2->mempolicy = VAR_7;
 FUNC_9();
 if (VAR_7 && VAR_7->mode == VAR_1 &&
     FUNC_10(VAR_7->v.nodes))
  VAR_2->il_next = FUNC_5(VAR_7->v.nodes);
 FUNC_12(VAR_2);
 if (VAR_9)
  FUNC_13(&VAR_9->mmap_sem);

 FUNC_7(VAR_8);
 VAR_10 = 0;
out:
 FUNC_2(VAR_3);
 return VAR_10;
}
