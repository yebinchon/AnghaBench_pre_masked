
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracepoint_entry {int funcs; int name; } ;
struct tracepoint {int state; int funcs; int (* unregfunc ) () ;int (* regfunc ) () ;int name; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct tracepoint_entry **VAR_0,
 struct tracepoint *VAR_1, int VAR_2)
{
 FUNC_0(FUNC_2((*VAR_0)->name, VAR_1->name) != 0);

 if (VAR_1->regfunc && !VAR_1->state && VAR_2)
  VAR_1->regfunc();
 else if (VAR_1->unregfunc && VAR_1->state && !VAR_2)
  VAR_1->unregfunc();
 FUNC_1(VAR_1->funcs, (*VAR_0)->funcs);
 VAR_1->state = VAR_2;
}
