
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc_ldt {int ldt_sd; } ;
struct mdproc {struct proc_ldt* md_ldt; } ;
struct TYPE_2__ {int sd; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void
FUNC_5(struct mdproc *VAR_8)
{
 struct proc_ldt *VAR_9;
 int VAR_10;

 FUNC_4(&VAR_6, VAR_1);

 VAR_9 = VAR_8->md_ldt;
 VAR_10 = VAR_0;
 VAR_10 += FUNC_1(VAR_4) * VAR_2;
 VAR_7[VAR_10].sd = VAR_9->ldt_sd;
 FUNC_3(FUNC_0(VAR_0, VAR_3));
 FUNC_2(VAR_5, FUNC_0(VAR_0, VAR_3));
}
