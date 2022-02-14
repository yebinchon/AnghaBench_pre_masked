
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct md_s {int flags; int opencount; } ;
struct g_provider {scalar_t__ acr; scalar_t__ acw; scalar_t__ ace; TYPE_1__* geom; } ;
struct TYPE_2__ {struct md_s* softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(struct g_provider *VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 struct md_s *VAR_7;

 VAR_7 = VAR_3->geom->softc;
 if (VAR_7 == ((void*)0)) {
  if (VAR_4 <= 0 && VAR_5 <= 0 && VAR_6 <= 0)
   return (0);
  return (VAR_0);
 }
 VAR_4 += VAR_3->acr;
 VAR_5 += VAR_3->acw;
 VAR_6 += VAR_3->ace;
 if ((VAR_7->flags & VAR_2) != 0 && VAR_5 > 0)
  return (VAR_1);
 if ((VAR_3->acr + VAR_3->acw + VAR_3->ace) == 0 && (VAR_4 + VAR_5 + VAR_6) > 0) {
  VAR_7->opencount = 1;
 } else if ((VAR_3->acr + VAR_3->acw + VAR_3->ace) > 0 && (VAR_4 + VAR_5 + VAR_6) == 0) {
  VAR_7->opencount = 0;
 }
 return (0);
}
