
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct termp {TYPE_1__* ps; } ;
struct TYPE_2__ {int flags; char* psmarg; int psmargcur; int pdfbytes; } ;


 int VAR_0 ;
 int FUNC_0 (struct termp*,int) ;
 int FUNC_1 (char) ;

__attribute__((used)) static void
FUNC_2(struct termp *VAR_1, char VAR_2)
{
 int VAR_3;



 if ( ! (VAR_0 & VAR_1->ps->flags)) {
  FUNC_1(VAR_2);
  VAR_1->ps->pdfbytes++;
  return;
 }

 FUNC_0(VAR_1, 2);

 VAR_3 = (int)VAR_1->ps->psmargcur++;
 VAR_1->ps->psmarg[VAR_3++] = VAR_2;
 VAR_1->ps->psmarg[VAR_3] = '\0';
}
