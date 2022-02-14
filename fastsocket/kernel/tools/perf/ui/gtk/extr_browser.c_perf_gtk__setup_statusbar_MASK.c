
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int statbar_ctx_id; int * statbar; } ;
typedef int GtkWidget ;


 int FUNC_0 (int *) ;
 unsigned int FUNC_1 (int ,char*) ;
 int * FUNC_2 () ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static GtkWidget *FUNC_3(void)
{
 GtkWidget *VAR_1;
 unsigned VAR_2;

 VAR_1 = FUNC_2();

 VAR_2 = FUNC_1(FUNC_0(VAR_1),
          "perf report");
 VAR_0->statbar = VAR_1;
 VAR_0->statbar_ctx_id = VAR_2;

 return VAR_1;
}
