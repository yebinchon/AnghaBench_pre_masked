
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int* VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*,int*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_18 ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_21 ;
 TYPE_1__* FUNC_4 (int *,int ,int) ;
 int FUNC_5 (char*,int ,int ,int,int ,int ) ;
 int FUNC_6 (int ,int ,int *,int *,int ) ;

void
FUNC_7(void)
{
 vm_page_t VAR_22;

 FUNC_0("machdep.trm_guard", &VAR_21);
 if ((VAR_21 & VAR_1) != 0)
  VAR_21 = 0;
 VAR_19 = FUNC_5("i386trampoline", 0, 0, 1, 0, VAR_0);
 FUNC_6(VAR_19, VAR_20, ((void*)0), ((void*)0), VAR_2);
 VAR_22 = FUNC_4(((void*)0), 0, VAR_12 | VAR_11 |
     VAR_13 | VAR_15 | VAR_14 | VAR_16);
 if ((VAR_22->flags & VAR_7) == 0)
  FUNC_3(VAR_22);
 VAR_8[VAR_9] = FUNC_1(VAR_22) | VAR_4 | VAR_3 | VAR_5 | VAR_6 |
     FUNC_2(VAR_18, VAR_17, VAR_10);
}
