
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nmissed; } ;
struct TYPE_6__ {TYPE_2__ kp; } ;
struct TYPE_4__ {int name; } ;
struct trace_probe {TYPE_3__ rp; int nhit; TYPE_1__ call; } ;
struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,char*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct trace_probe *VAR_2 = VAR_1;

 FUNC_0(VAR_0, "  %-44s %15lu %15lu\n", VAR_2->call.name, VAR_2->nhit,
     VAR_2->rp.kp.nmissed);

 return 0;
}
