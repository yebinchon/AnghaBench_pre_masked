
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinmux_softc {int dev; } ;
struct pincfg {char* function; } ;
typedef int phandle_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,char*,int) ;
 int FUNC_2 (struct pinmux_softc*,char*,struct pincfg*) ;
 int FUNC_3 (struct pinmux_softc*,int ,struct pincfg*,char**,int*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(struct pinmux_softc *VAR_0, phandle_t VAR_1)
{
 struct pincfg VAR_2;
 char *VAR_3, *VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_8 = FUNC_3(VAR_0, VAR_1, &VAR_2, &VAR_3, &VAR_7);
 if (VAR_8 != 0)
  return (VAR_8);

 VAR_6 = 0;
 VAR_4 = VAR_3;
 do {
  VAR_5 = FUNC_4(VAR_4) + 1;
  VAR_8 = FUNC_2(VAR_0, VAR_4, &VAR_2);
  if (VAR_8 != 0)
   FUNC_1(VAR_0->dev,
       "Cannot configure pin: %s: %d\n", VAR_4, VAR_8);

  VAR_6 += VAR_5;
  VAR_4 += VAR_5;
 } while (VAR_6 < VAR_7);

 if (VAR_3 != ((void*)0))
  FUNC_0(VAR_3);
 if (VAR_2.function != ((void*)0))
  FUNC_0(VAR_2.function);
 return (VAR_8);
}
