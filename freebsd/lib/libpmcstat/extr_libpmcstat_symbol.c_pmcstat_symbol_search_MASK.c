
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uintfptr_t ;
struct pmcstat_symbol {void* ps_end; void* ps_start; int * ps_name; } ;
struct pmcstat_image {int pi_symcount; int * pi_symbols; } ;


 struct pmcstat_symbol* FUNC_0 (void*,int *,int ,int,int ) ;
 int VAR_0 ;

struct pmcstat_symbol *
FUNC_1(struct pmcstat_image *VAR_1, uintfptr_t VAR_2)
{
 struct pmcstat_symbol VAR_3;

 if (VAR_1->pi_symbols == ((void*)0))
  return (((void*)0));

 VAR_3.ps_name = ((void*)0);
 VAR_3.ps_start = VAR_2;
 VAR_3.ps_end = VAR_2 + 1;

 return (FUNC_0((void *) &VAR_3, VAR_1->pi_symbols,
     VAR_1->pi_symcount, sizeof(struct pmcstat_symbol),
     VAR_0));
}
