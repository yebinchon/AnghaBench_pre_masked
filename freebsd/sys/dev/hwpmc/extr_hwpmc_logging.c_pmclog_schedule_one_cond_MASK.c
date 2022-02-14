
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmclog_buffer {scalar_t__ plb_ptr; scalar_t__ plb_base; } ;
struct pmc_owner {struct pmclog_buffer** po_curbuf; } ;


 int FUNC_0 (int ,int ,int *) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct pmc_owner*,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(struct pmc_owner *VAR_3)
{
 struct pmclog_buffer *VAR_4;
 int VAR_5;

 FUNC_3();
 VAR_5 = VAR_1;

 if (FUNC_1(VAR_5))
  FUNC_0(VAR_2, VAR_0, ((void*)0));

 VAR_4 = VAR_3->po_curbuf[VAR_5];
 if (VAR_4 && VAR_4->plb_ptr != VAR_4->plb_base)
  FUNC_2(VAR_3, 1);
 FUNC_4();
}
