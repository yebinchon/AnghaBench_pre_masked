
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kp; } ;
struct trace_probe {int list; TYPE_1__ rp; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct trace_probe*) ;
 scalar_t__ FUNC_2 (struct trace_probe*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct trace_probe*) ;

__attribute__((used)) static int FUNC_6(struct trace_probe *VAR_1)
{

 if (FUNC_1(VAR_1))
  return -VAR_0;

 if (FUNC_2(VAR_1))
  FUNC_4(&VAR_1->rp);
 else
  FUNC_3(&VAR_1->rp.kp);
 FUNC_0(&VAR_1->list);
 FUNC_5(VAR_1);

 return 0;
}
