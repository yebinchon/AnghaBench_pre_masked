
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ offset; int addr; } ;
struct TYPE_7__ {TYPE_2__ kp; } ;
struct TYPE_5__ {int name; int system; } ;
struct trace_probe {int nr_args; TYPE_4__* args; TYPE_3__ rp; int symbol; TYPE_1__ call; } ;
struct seq_file {int dummy; } ;
struct TYPE_8__ {int comm; int name; } ;


 int FUNC_0 (struct seq_file*,char*,...) ;
 scalar_t__ FUNC_1 (struct trace_probe*) ;
 int FUNC_2 (struct trace_probe*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct trace_probe *VAR_2 = VAR_1;
 int VAR_3;

 FUNC_0(VAR_0, "%c", FUNC_1(VAR_2) ? 'r' : 'p');
 FUNC_0(VAR_0, ":%s/%s", VAR_2->call.system, VAR_2->call.name);

 if (!VAR_2->symbol)
  FUNC_0(VAR_0, " 0x%p", VAR_2->rp.kp.addr);
 else if (VAR_2->rp.kp.offset)
  FUNC_0(VAR_0, " %s+%u", FUNC_2(VAR_2),
      VAR_2->rp.kp.offset);
 else
  FUNC_0(VAR_0, " %s", FUNC_2(VAR_2));

 for (VAR_3 = 0; VAR_3 < VAR_2->nr_args; VAR_3++)
  FUNC_0(VAR_0, " %s=%s", VAR_2->args[VAR_3].name, VAR_2->args[VAR_3].comm);
 FUNC_0(VAR_0, "\n");

 return 0;
}
