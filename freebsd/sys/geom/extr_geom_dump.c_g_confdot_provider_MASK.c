
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct sbuf {int dummy; } ;
struct g_provider {scalar_t__ stripesize; int sectorsize; int error; int ace; int acw; int acr; int name; } ;


 int FUNC_0 (struct sbuf*,char*,struct g_provider*,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct sbuf *VAR_0, struct g_provider *VAR_1)
{

 FUNC_0(VAR_0, "z%p [shape=hexagon,label=\"%s\\nr%dw%de%d\\nerr#%d\\n"
     "sector=%u\\nstripe=%ju\"];\n", VAR_1, VAR_1->name, VAR_1->acr, VAR_1->acw,
     VAR_1->ace, VAR_1->error, VAR_1->sectorsize, (uintmax_t)VAR_1->stripesize);
}
