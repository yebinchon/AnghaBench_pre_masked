
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kvp_op_key; int * kvp_op_exec; int * kvp_op_init; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 int FUNC_0 (int ,int *,int ) ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int
FUNC_1(void)
{
 int VAR_13;


 for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
  VAR_10[VAR_13].kvp_op_key = -1;
  VAR_10[VAR_13].kvp_op_init = ((void*)0);
  VAR_10[VAR_13].kvp_op_exec = ((void*)0);
 }

 return(FUNC_0(VAR_3, ((void*)0), VAR_11) |
     FUNC_0(VAR_5, ((void*)0), VAR_11) |
     FUNC_0(VAR_1, ((void*)0), VAR_11) |
     FUNC_0(VAR_2, VAR_7,
         VAR_8) |
     FUNC_0(VAR_4, ((void*)0), VAR_9) |
     FUNC_0(VAR_6, ((void*)0), VAR_12));
}
