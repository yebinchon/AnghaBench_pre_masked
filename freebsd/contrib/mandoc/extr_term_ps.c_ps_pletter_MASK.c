
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct termp {scalar_t__ type; TYPE_1__* ps; } ;
struct TYPE_6__ {TYPE_2__* gly; } ;
struct TYPE_5__ {scalar_t__ wx; } ;
struct TYPE_4__ {int flags; int pages; int pdfbody; size_t pscol; size_t psrow; scalar_t__ lastrow; scalar_t__ lastf; int scale; int pdfbytes; int pdflastpg; } ;


 int FUNC_0 (struct termp*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 TYPE_3__* VAR_4 ;
 int FUNC_2 (struct termp*,int) ;
 int FUNC_3 (struct termp*,char*,...) ;
 int FUNC_4 (struct termp*,char) ;

__attribute__((used)) static void
FUNC_5(struct termp *VAR_5, int VAR_6)
{
 int VAR_7;






 if (VAR_2 & VAR_5->ps->flags) {
  if (VAR_3 == VAR_5->type) {
   FUNC_3(VAR_5, "%%%%Page: %zu %zu\n",
       VAR_5->ps->pages + 1, VAR_5->ps->pages + 1);
   FUNC_3(VAR_5, "f%d\n", (int)VAR_5->ps->lastf);
  } else {
   FUNC_2(VAR_5, VAR_5->ps->pdfbody +
       VAR_5->ps->pages * 4);
   FUNC_3(VAR_5, "<<\n");
   FUNC_3(VAR_5, "/Length %zu 0 R\n",
       VAR_5->ps->pdfbody + 1 + VAR_5->ps->pages * 4);
   FUNC_3(VAR_5, ">>\nstream\n");
  }
  VAR_5->ps->pdflastpg = VAR_5->ps->pdfbytes;
  VAR_5->ps->flags &= ~VAR_2;
 }






 if ( ! (VAR_1 & VAR_5->ps->flags)) {
  if (VAR_3 != VAR_5->type) {
   FUNC_3(VAR_5, "BT\n/F%d %zu Tf\n",
       (int)VAR_5->ps->lastf, VAR_5->ps->scale);
   FUNC_3(VAR_5, "%.3f %.3f Td\n(",
       FUNC_0(VAR_5, VAR_5->ps->pscol),
       FUNC_0(VAR_5, VAR_5->ps->psrow));
  } else {
   FUNC_3(VAR_5, "%.3f", FUNC_0(VAR_5, VAR_5->ps->pscol));
   if (VAR_5->ps->psrow != VAR_5->ps->lastrow)
    FUNC_3(VAR_5, " %.3f",
        FUNC_0(VAR_5, VAR_5->ps->psrow));
   FUNC_3(VAR_5, "(");
  }
  VAR_5->ps->flags |= VAR_1;
 }

 FUNC_1( ! (VAR_2 & VAR_5->ps->flags));
 switch (VAR_6) {
 case '(':
 case ')':
 case '\\':
  FUNC_4(VAR_5, '\\');
  break;
 default:
  break;
 }



 VAR_7 = (int)VAR_5->ps->lastf;

 if (VAR_6 <= 32 || VAR_6 - 32 >= VAR_0)
  VAR_6 = 32;

 FUNC_4(VAR_5, (char)VAR_6);
 VAR_6 -= 32;
 VAR_5->ps->pscol += (size_t)VAR_4[VAR_7].gly[VAR_6].wx;
}
