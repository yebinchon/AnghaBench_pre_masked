
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct termp {scalar_t__ type; TYPE_1__* ps; } ;
struct TYPE_2__ {int flags; char last; size_t pages; size_t pdfbody; size_t pdfbytes; int * pdfobjs; int height; int width; } ;


 scalar_t__ FUNC_0 (struct termp*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct termp*,size_t) ;
 int FUNC_3 (struct termp*) ;
 int FUNC_4 (struct termp*) ;
 int FUNC_5 (struct termp*) ;
 int FUNC_6 (struct termp*,char*,...) ;

__attribute__((used)) static void
FUNC_7(struct termp *VAR_2)
{
 size_t VAR_3, VAR_4, VAR_5;

 FUNC_5(VAR_2);
 FUNC_4(VAR_2);







 if ( ! (VAR_0 & VAR_2->ps->flags)) {
  FUNC_1(0 == VAR_2->ps->flags);
  FUNC_1('\0' == VAR_2->ps->last);
  FUNC_3(VAR_2);
 }

 if (VAR_1 == VAR_2->type) {
  FUNC_6(VAR_2, "%%%%Trailer\n");
  FUNC_6(VAR_2, "%%%%Pages: %zu\n", VAR_2->ps->pages);
  FUNC_6(VAR_2, "%%%%EOF\n");
  return;
 }

 FUNC_2(VAR_2, 2);
 FUNC_6(VAR_2, "<<\n/Type /Pages\n");
 FUNC_6(VAR_2, "/MediaBox [0 0 %zu %zu]\n",
   (size_t)FUNC_0(VAR_2, VAR_2->ps->width),
   (size_t)FUNC_0(VAR_2, VAR_2->ps->height));

 FUNC_6(VAR_2, "/Count %zu\n", VAR_2->ps->pages);
 FUNC_6(VAR_2, "/Kids [");

 for (VAR_3 = 0; VAR_3 < VAR_2->ps->pages; VAR_3++)
  FUNC_6(VAR_2, " %zu 0 R", VAR_3 * 4 + VAR_2->ps->pdfbody + 3);

 VAR_5 = (VAR_2->ps->pages - 1) * 4 + VAR_2->ps->pdfbody + 4;

 FUNC_6(VAR_2, "]\n>>\nendobj\n");
 FUNC_2(VAR_2, VAR_5);
 FUNC_6(VAR_2, "<<\n");
 FUNC_6(VAR_2, "/Type /Catalog\n");
 FUNC_6(VAR_2, "/Pages 2 0 R\n");
 FUNC_6(VAR_2, ">>\nendobj\n");
 VAR_4 = VAR_2->ps->pdfbytes;
 FUNC_6(VAR_2, "xref\n");
 FUNC_6(VAR_2, "0 %zu\n", VAR_5 + 1);
 FUNC_6(VAR_2, "0000000000 65535 f \n");

 for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++)
  FUNC_6(VAR_2, "%.10zu 00000 n \n",
      VAR_2->ps->pdfobjs[(int)VAR_3]);

 FUNC_6(VAR_2, "trailer\n");
 FUNC_6(VAR_2, "<<\n");
 FUNC_6(VAR_2, "/Size %zu\n", VAR_5 + 1);
 FUNC_6(VAR_2, "/Root %zu 0 R\n", VAR_5);
 FUNC_6(VAR_2, "/Info 1 0 R\n");
 FUNC_6(VAR_2, ">>\n");
 FUNC_6(VAR_2, "startxref\n");
 FUNC_6(VAR_2, "%zu\n", VAR_4);
 FUNC_6(VAR_2, "%%%%EOF\n");
}
