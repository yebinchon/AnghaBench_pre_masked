
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct termp {scalar_t__ type; TYPE_1__* ps; } ;
struct TYPE_2__ {size_t pdfbytes; size_t pdflastpg; int pages; int pdfbody; int flags; int top; int psrow; scalar_t__* psmarg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct termp*,size_t) ;
 int FUNC_2 (struct termp*,char*,...) ;

__attribute__((used)) static void
FUNC_3(struct termp *VAR_3)
{
 int VAR_4;
 size_t VAR_5, VAR_6;
 FUNC_0(VAR_3->ps->psmarg && VAR_3->ps->psmarg[0]);
 FUNC_2(VAR_3, "%s", VAR_3->ps->psmarg);

 if (VAR_2 != VAR_3->type) {
  VAR_5 = VAR_3->ps->pdfbytes - VAR_3->ps->pdflastpg;
  VAR_6 = VAR_3->ps->pages * 4 + VAR_3->ps->pdfbody;

  FUNC_2(VAR_3, "endstream\nendobj\n");


  FUNC_1(VAR_3, VAR_6 + 1);
  FUNC_2(VAR_3, "%zu\nendobj\n", VAR_5);


  FUNC_1(VAR_3, VAR_6 + 2);
  FUNC_2(VAR_3, "<<\n/ProcSet [/PDF /Text]\n");
  FUNC_2(VAR_3, "/Font <<\n");
  for (VAR_4 = 0; VAR_4 < (int)VAR_1; VAR_4++)
   FUNC_2(VAR_3, "/F%d %d 0 R\n", VAR_4, 3 + VAR_4);
  FUNC_2(VAR_3, ">>\n>>\nendobj\n");


  FUNC_1(VAR_3, VAR_6 + 3);
  FUNC_2(VAR_3, "<<\n");
  FUNC_2(VAR_3, "/Type /Page\n");
  FUNC_2(VAR_3, "/Parent 2 0 R\n");
  FUNC_2(VAR_3, "/Resources %zu 0 R\n", VAR_6 + 2);
  FUNC_2(VAR_3, "/Contents %zu 0 R\n", VAR_6);
  FUNC_2(VAR_3, ">>\nendobj\n");
 } else
  FUNC_2(VAR_3, "showpage\n");

 VAR_3->ps->pages++;
 VAR_3->ps->psrow = VAR_3->ps->top;
 FUNC_0( ! (VAR_0 & VAR_3->ps->flags));
 VAR_3->ps->flags |= VAR_0;
}
