
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct g_provider* uintmax_t ;
struct sbuf {int dummy; } ;
struct g_provider {int flags; struct g_provider* geom; int (* dumpconf ) (struct sbuf*,char*,struct g_provider*,int *,struct g_provider*) ;scalar_t__ stripeoffset; scalar_t__ stripesize; struct g_provider* sectorsize; scalar_t__ mediasize; int name; int ace; int acw; int acr; } ;
typedef struct g_provider* intmax_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sbuf*,int ) ;
 int FUNC_1 (struct sbuf*,char*) ;
 int FUNC_2 (struct sbuf*,char*,struct g_provider*,...) ;
 int FUNC_3 (struct sbuf*,char*,struct g_provider*,int *,struct g_provider*) ;

__attribute__((used)) static void
FUNC_4(struct sbuf *VAR_2, struct g_provider *VAR_3)
{

 FUNC_2(VAR_2, "\t<provider id=\"%p\">\n", VAR_3);
 FUNC_2(VAR_2, "\t  <geom ref=\"%p\"/>\n", VAR_3->geom);
 FUNC_2(VAR_2, "\t  <mode>r%dw%de%d</mode>\n",
     VAR_3->acr, VAR_3->acw, VAR_3->ace);
 FUNC_1(VAR_2, "\t  <name>");
 FUNC_0(VAR_2, VAR_3->name);
 FUNC_1(VAR_2, "</name>\n");
 FUNC_2(VAR_2, "\t  <mediasize>%jd</mediasize>\n",
     (intmax_t)VAR_3->mediasize);
 FUNC_2(VAR_2, "\t  <sectorsize>%u</sectorsize>\n", VAR_3->sectorsize);
 FUNC_2(VAR_2, "\t  <stripesize>%ju</stripesize>\n", (uintmax_t)VAR_3->stripesize);
 FUNC_2(VAR_2, "\t  <stripeoffset>%ju</stripeoffset>\n", (uintmax_t)VAR_3->stripeoffset);
 if (VAR_3->flags & VAR_1)
  FUNC_1(VAR_2, "\t  <wither/>\n");
 else if (VAR_3->geom->flags & VAR_0)
  ;
 else if (VAR_3->geom->dumpconf != ((void*)0)) {
  FUNC_1(VAR_2, "\t  <config>\n");
  VAR_3->geom->dumpconf(VAR_2, "\t    ", VAR_3->geom, ((void*)0), VAR_3);
  FUNC_1(VAR_2, "\t  </config>\n");
 }
 FUNC_1(VAR_2, "\t</provider>\n");
}
