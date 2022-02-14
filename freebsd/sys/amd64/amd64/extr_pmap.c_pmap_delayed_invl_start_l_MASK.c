
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct pmap_invl_gen {scalar_t__ gen; } ;
struct TYPE_6__ {scalar_t__ gen; } ;
struct TYPE_4__ {struct pmap_invl_gen md_invl_gen; } ;
struct TYPE_5__ {TYPE_1__ td_md; } ;


 scalar_t__ FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct pmap_invl_gen*,int ) ;
 int FUNC_3 () ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_6(void)
{
 struct pmap_invl_gen *VAR_5;
 u_long VAR_6;

 VAR_5 = &VAR_0->td_md.md_invl_gen;
 FUNC_3();
 FUNC_4(&VAR_1);
 if (FUNC_0(&VAR_4))
  VAR_6 = VAR_3;
 else
  VAR_6 = FUNC_1(&VAR_4)->gen;
 VAR_5->gen = VAR_6 + 1;
 FUNC_2(&VAR_4, VAR_5, VAR_2);
 FUNC_5(&VAR_1);
}
