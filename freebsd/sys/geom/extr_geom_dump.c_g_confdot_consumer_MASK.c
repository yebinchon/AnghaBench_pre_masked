
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
struct g_consumer {scalar_t__ provider; int ace; int acw; int acr; } ;


 int FUNC_0 (struct sbuf*,char*,struct g_consumer*,scalar_t__,...) ;

__attribute__((used)) static void
FUNC_1(struct sbuf *VAR_0, struct g_consumer *VAR_1)
{

 FUNC_0(VAR_0, "z%p [label=\"r%dw%de%d\"];\n",
     VAR_1, VAR_1->acr, VAR_1->acw, VAR_1->ace);
 if (VAR_1->provider)
  FUNC_0(VAR_0, "z%p -> z%p;\n", VAR_1, VAR_1->provider);
}
