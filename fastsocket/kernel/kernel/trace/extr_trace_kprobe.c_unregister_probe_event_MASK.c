
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int print_fmt; } ;
struct TYPE_4__ {TYPE_1__ fmt; } ;
struct trace_probe {TYPE_2__ call; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(struct trace_probe *VAR_0)
{

 FUNC_1(&VAR_0->call);
 FUNC_0(VAR_0->call.fmt.print_fmt);
}
