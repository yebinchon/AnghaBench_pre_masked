
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct termp {TYPE_1__* ps; } ;
struct TYPE_2__ {size_t pdfobjsz; int pdfbytes; int * pdfobjs; } ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int *,size_t,int) ;
 int FUNC_2 (struct termp*,char*,size_t) ;

__attribute__((used)) static void
FUNC_3(struct termp *VAR_0, size_t VAR_1)
{

 FUNC_0(VAR_1 > 0);

 if ((VAR_1 - 1) >= VAR_0->ps->pdfobjsz) {
  VAR_0->ps->pdfobjsz = VAR_1 + 128;
  VAR_0->ps->pdfobjs = FUNC_1(VAR_0->ps->pdfobjs,
      VAR_0->ps->pdfobjsz, sizeof(size_t));
 }

 VAR_0->ps->pdfobjs[(int)VAR_1 - 1] = VAR_0->ps->pdfbytes;
 FUNC_2(VAR_0, "%zu 0 obj\n", VAR_1);
}
