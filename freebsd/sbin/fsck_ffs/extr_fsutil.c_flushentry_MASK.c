
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * b_buf; int * b_cg; } ;
struct bufarea {TYPE_1__ b_un; } ;
struct TYPE_4__ {scalar_t__ fs_ncg; } ;


 struct bufarea* VAR_0 ;
 int FUNC_0 (int ,struct bufarea*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;

int
FUNC_2(void)
{
 struct bufarea *VAR_4;

 if (VAR_1 == VAR_3.fs_ncg || VAR_0 == ((void*)0))
  return (0);
 VAR_4 = &VAR_0[VAR_1++];
 if (VAR_4->b_un.b_cg == ((void*)0))
  return (0);
 FUNC_0(VAR_2, VAR_4);
 FUNC_1(VAR_4->b_un.b_buf);
 VAR_4->b_un.b_buf = ((void*)0);
 return (1);
}
