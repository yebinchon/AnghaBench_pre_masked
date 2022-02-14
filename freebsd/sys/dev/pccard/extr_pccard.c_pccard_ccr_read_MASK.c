
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pccard_function {scalar_t__ pf_ccr_offset; int pf_ccrh; int pf_ccrt; } ;


 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct pccard_function *VAR_0, int VAR_1)
{
 return (FUNC_0(VAR_0->pf_ccrt, VAR_0->pf_ccrh,
     VAR_0->pf_ccr_offset + VAR_1));
}
