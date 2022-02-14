
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {TYPE_1__* dq_op; } ;
struct dquot {unsigned int dq_id; int dq_sb; int dq_flags; int dq_count; } ;
struct TYPE_4__ {int lookups; int cache_hits; } ;
struct TYPE_3__ {scalar_t__ (* acquire_dquot ) (struct dquot*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dquot*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct dquot*) ;
 TYPE_2__ VAR_3 ;
 struct dquot* FUNC_5 (unsigned int,struct super_block*,unsigned int,int) ;
 struct dquot* FUNC_6 (struct super_block*,int) ;
 unsigned int FUNC_7 (struct super_block*,unsigned int,int) ;
 int FUNC_8 (struct dquot*) ;
 int FUNC_9 (struct dquot*) ;
 int FUNC_10 (struct dquot*) ;
 int FUNC_11 (struct super_block*,int) ;
 int FUNC_12 () ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (struct dquot*) ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 (struct dquot*) ;

struct dquot *FUNC_18(struct super_block *VAR_4, unsigned int VAR_5, int VAR_6)
{
 unsigned int VAR_7 = FUNC_7(VAR_4, VAR_5, VAR_6);
 struct dquot *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);

        if (!FUNC_11(VAR_4, VAR_6))
  return ((void*)0);
we_slept:
 FUNC_13(&VAR_1);
 FUNC_13(&VAR_2);
 if (!FUNC_11(VAR_4, VAR_6)) {
  FUNC_14(&VAR_2);
  FUNC_14(&VAR_1);
  goto out;
 }
 FUNC_14(&VAR_2);

 VAR_8 = FUNC_5(VAR_7, VAR_4, VAR_5, VAR_6);
 if (!VAR_8) {
  if (!VAR_9) {
   FUNC_14(&VAR_1);
   VAR_9 = FUNC_6(VAR_4, VAR_6);
   if (!VAR_9)
    FUNC_12();
   goto we_slept;
  }
  VAR_8 = VAR_9;
  VAR_9 = ((void*)0);
  VAR_8->dq_id = VAR_5;

  FUNC_9(VAR_8);

  FUNC_8(VAR_8);
  VAR_3.lookups++;
  FUNC_14(&VAR_1);
 } else {
  if (!FUNC_2(&VAR_8->dq_count))
   FUNC_10(VAR_8);
  FUNC_1(&VAR_8->dq_count);
  VAR_3.cache_hits++;
  VAR_3.lookups++;
  FUNC_14(&VAR_1);
 }


 FUNC_17(VAR_8);

 if (!FUNC_16(VAR_0, &VAR_8->dq_flags) &&
     VAR_4->dq_op->acquire_dquot(VAR_8) < 0) {
  FUNC_4(VAR_8);
  VAR_8 = ((void*)0);
  goto out;
 }



out:
 if (VAR_9)
  FUNC_3(VAR_9);

 return VAR_8;
}
