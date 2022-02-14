
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pmap_invl_gen {scalar_t__ gen; } ;
struct TYPE_3__ {struct pmap_invl_gen md_invl_gen; } ;
struct TYPE_4__ {TYPE_1__ td_md; } ;


 int FUNC_0 (int,char*) ;
 struct pmap_invl_gen* FUNC_1 (struct pmap_invl_gen*,int ) ;
 int FUNC_2 (struct pmap_invl_gen*,int ) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void
FUNC_6(void)
{
 struct pmap_invl_gen *VAR_3, *VAR_4;

 VAR_3 = &VAR_0->td_md.md_invl_gen;
 FUNC_0(VAR_3->gen != 0, ("missed invl_start"));
 FUNC_3(&VAR_1);
 VAR_4 = FUNC_1(VAR_3, VAR_2);
 if (VAR_4 == ((void*)0))
  FUNC_5(VAR_3->gen);
 else
  VAR_4->gen = VAR_3->gen;
 FUNC_2(VAR_3, VAR_2);
 FUNC_4(&VAR_1);
 VAR_3->gen = 0;
}
