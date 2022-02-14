
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_provider {scalar_t__ acr; scalar_t__ acw; scalar_t__ ace; int name; } ;
struct g_geom {int consumer; int provider; } ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ,...) ;
 struct g_provider* FUNC_1 (int *) ;
 int FUNC_2 (struct g_provider*) ;
 int FUNC_3 () ;

__attribute__((used)) static int
FUNC_4(struct g_geom *VAR_1, boolean_t VAR_2)
{
 struct g_provider *VAR_3;

 FUNC_3();
 VAR_3 = FUNC_1(&VAR_1->provider);
 if (VAR_3 != ((void*)0) && (VAR_3->acr != 0 || VAR_3->acw != 0 || VAR_3->ace != 0)) {
  if (VAR_2) {
   FUNC_0(0, "Provider %s is still open, so it "
       "can't be definitely removed.", VAR_3->name);
  } else {
   FUNC_0(1,
       "Provider %s is still open (r%dw%de%d).", VAR_3->name,
       VAR_3->acr, VAR_3->acw, VAR_3->ace);
   return (VAR_0);
  }
 } else if (VAR_3 != ((void*)0))
  FUNC_0(1, "Label %s removed.", VAR_3->name);
 FUNC_2(FUNC_1(&VAR_1->consumer));
 return (0);
}
