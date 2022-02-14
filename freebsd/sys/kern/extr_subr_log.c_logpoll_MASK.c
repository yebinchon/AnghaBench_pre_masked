
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int dummy; } ;
struct cdev {int dummy; } ;
struct TYPE_2__ {int sc_selp; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct thread*,int *) ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_5, int VAR_6, struct thread *VAR_7)
{
 int VAR_8 = 0;

 if (VAR_6 & (VAR_0 | VAR_1)) {
  FUNC_1(&VAR_3);
  if (FUNC_0(VAR_4) > 0)
   VAR_8 |= VAR_6 & (VAR_0 | VAR_1);
  else
   FUNC_3(VAR_7, &VAR_2.sc_selp);
  FUNC_2(&VAR_3);
 }
 return (VAR_8);
}
