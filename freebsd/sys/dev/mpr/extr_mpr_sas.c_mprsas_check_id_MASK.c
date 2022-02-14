
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mprsas_softc {struct mpr_softc* sc; } ;
struct mpr_softc {char* exclude_ids; } ;


 char* FUNC_0 (char**,char*) ;
 long FUNC_1 (char*,int *,int ) ;

int
FUNC_2(struct mprsas_softc *VAR_0, int VAR_1)
{
 struct mpr_softc *VAR_2 = VAR_0->sc;
 char *VAR_3;
 char *VAR_4;

 VAR_3 = &VAR_2->exclude_ids[0];
 while((VAR_4 = FUNC_0(&VAR_3, ",")) != ((void*)0)) {
  if (VAR_4[0] == '\0')
   continue;
  if (FUNC_1(VAR_4, ((void*)0), 0) == (long)VAR_1)
   return (1);
 }

 return (0);
}
