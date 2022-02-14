
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ mode; } ;
struct TYPE_7__ {TYPE_1__ shm_perm; } ;
struct TYPE_8__ {int object; TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 TYPE_3__* VAR_10 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_11 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(void)
{
 int VAR_12;

 if (VAR_4 > 0)
  return (VAR_0);




 FUNC_5(VAR_6);
 if (VAR_5 != 0)
  FUNC_2(VAR_5);

 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
  if (VAR_10[VAR_12].u.shm_perm.mode != VAR_2)
   FUNC_6(VAR_10[VAR_12].object);
 }
 FUNC_0(VAR_10, VAR_1);

 VAR_8 = ((void*)0);
 VAR_9 = ((void*)0);

 FUNC_3(&VAR_11);
 return (0);
}
