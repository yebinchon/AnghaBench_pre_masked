
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mthca_cq {int arm_sn; int cons_index; int cqn; int arm_db; } ;
struct ib_cq {int device; } ;
typedef enum ib_cq_notify_flags { ____Placeholder_ib_cq_notify_flags } ib_cq_notify_flags ;
typedef int __be32 ;
struct TYPE_2__ {int doorbell_lock; scalar_t__ kar; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,scalar_t__,int ) ;
 int FUNC_3 (int *,int ) ;
 struct mthca_cq* FUNC_4 (struct ib_cq*) ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 () ;

int FUNC_7(struct ib_cq *VAR_5, enum ib_cq_notify_flags VAR_6)
{
 struct mthca_cq *VAR_7 = FUNC_4(VAR_5);
 __be32 VAR_8[2];
 u32 VAR_9;
 u32 VAR_10 = VAR_7->arm_sn & 3;

 VAR_8[0] = FUNC_1(VAR_7->cons_index);
 VAR_8[1] = FUNC_1((VAR_7->cqn << 8) | (2 << 5) | (VAR_10 << 3) |
    ((VAR_6 & VAR_1) ==
     VAR_0 ? 1 : 2));

 FUNC_3(VAR_8, VAR_7->arm_db);





 FUNC_6();

 VAR_9 = (VAR_10 << 28) |
  ((VAR_6 & VAR_1) == VAR_0 ?
   VAR_3 :
   VAR_2) | VAR_7->cqn;

 FUNC_2(VAR_9, VAR_7->cons_index,
        FUNC_5(VAR_5->device)->kar + VAR_4,
        FUNC_0(&FUNC_5(VAR_5->device)->doorbell_lock));

 return 0;
}
