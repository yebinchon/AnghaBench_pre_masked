
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int ki_tid; int ki_pid; int ki_tdev; } ;
struct TYPE_7__ {TYPE_1__* ki_p; } ;
struct TYPE_6__ {scalar_t__ ki_tdev; } ;
typedef TYPE_2__ KINFO ;


 int FUNC_0 (TYPE_2__ const*,TYPE_2__ const*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int
FUNC_1(const void *VAR_7, const void *VAR_8)
{
 const KINFO *VAR_9, *VAR_10;

 VAR_9 = VAR_7;
 VAR_10 = VAR_8;

 if (VAR_6 == VAR_1)
  FUNC_0(VAR_10, VAR_9, VAR_5);
 if (VAR_6 == VAR_2)
  FUNC_0(VAR_10, VAR_9, VAR_3);




 if (VAR_9->ki_p->ki_tdev != VAR_10->ki_p->ki_tdev) {
  if (VAR_9->ki_p->ki_tdev == VAR_0)
   return (-1);
  if (VAR_10->ki_p->ki_tdev == VAR_0)
   return (1);
  FUNC_0(VAR_9, VAR_10, VAR_4->ki_tdev);
 }


 FUNC_0(VAR_9, VAR_10, VAR_4->ki_pid);
 FUNC_0(VAR_9, VAR_10, VAR_4->ki_tid);
 return (0);
}
