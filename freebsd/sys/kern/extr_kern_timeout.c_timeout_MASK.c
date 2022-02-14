
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int timeout_t ;
struct callout_handle {struct callout* callout; } ;
struct callout_cpu {int cc_callfree; } ;
struct callout {int dummy; } ;
struct TYPE_2__ {int sle; } ;


 struct callout_cpu* FUNC_0 (int ) ;
 int FUNC_1 (struct callout_cpu*) ;
 int FUNC_2 (struct callout_cpu*) ;
 struct callout* FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_5 (struct callout*,int,int *,void*) ;
 int FUNC_6 (char*) ;
 int VAR_1 ;

struct callout_handle
FUNC_7(timeout_t *VAR_2, void *VAR_3, int VAR_4)
{
 struct callout_cpu *VAR_5;
 struct callout *VAR_6;
 struct callout_handle VAR_7;

 VAR_5 = FUNC_0(VAR_1);
 FUNC_1(VAR_5);

 VAR_6 = FUNC_3(&VAR_5->cc_callfree);
 if (VAR_6 == ((void*)0))

  FUNC_6("timeout table full");
 FUNC_4(&VAR_5->cc_callfree, VAR_0.sle);
 FUNC_5(VAR_6, VAR_4, VAR_2, VAR_3);
 VAR_7.callout = VAR_6;
 FUNC_2(VAR_5);

 return (VAR_7);
}
