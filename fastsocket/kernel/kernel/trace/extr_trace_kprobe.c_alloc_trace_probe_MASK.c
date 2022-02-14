
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {struct trace_probe* name; void* system; } ;
struct TYPE_4__ {unsigned long offset; int pre_handler; void* addr; struct trace_probe* symbol_name; } ;
struct TYPE_5__ {TYPE_1__ kp; int handler; } ;
struct trace_probe {struct trace_probe* symbol; TYPE_3__ call; int list; TYPE_2__ rp; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct trace_probe* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (struct trace_probe*) ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_5 (char const*,int ) ;
 struct trace_probe* FUNC_6 (int ,int ) ;

__attribute__((used)) static struct trace_probe *FUNC_7(const char *VAR_5,
          const char *VAR_6,
          void *VAR_7,
          const char *VAR_8,
          unsigned long VAR_9,
          int VAR_10, bool VAR_11)
{
 struct trace_probe *VAR_12;
 int VAR_13 = -VAR_1;

 VAR_12 = FUNC_6(FUNC_2(VAR_10), VAR_2);
 if (!VAR_12)
  return FUNC_0(VAR_13);

 if (VAR_8) {
  VAR_12->symbol = FUNC_5(VAR_8, VAR_2);
  if (!VAR_12->symbol)
   goto error;
  VAR_12->rp.kp.symbol_name = VAR_12->symbol;
  VAR_12->rp.kp.offset = VAR_9;
 } else
  VAR_12->rp.kp.addr = VAR_7;

 if (VAR_11)
  VAR_12->rp.handler = VAR_4;
 else
  VAR_12->rp.kp.pre_handler = VAR_3;

 if (!VAR_6 || !FUNC_3(VAR_6)) {
  VAR_13 = -VAR_0;
  goto error;
 }

 VAR_12->call.name = FUNC_5(VAR_6, VAR_2);
 if (!VAR_12->call.name)
  goto error;

 if (!VAR_5 || !FUNC_3(VAR_5)) {
  VAR_13 = -VAR_0;
  goto error;
 }

 VAR_12->call.system = FUNC_5(VAR_5, VAR_2);
 if (!VAR_12->call.system)
  goto error;

 FUNC_1(&VAR_12->list);
 return VAR_12;
error:
 FUNC_4(VAR_12->call.name);
 FUNC_4(VAR_12->symbol);
 FUNC_4(VAR_12);
 return FUNC_0(VAR_13);
}
