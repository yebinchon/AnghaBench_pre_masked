
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfe_softc {int dummy; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char const*) ;

__attribute__((used)) static int
FUNC_3(struct nfe_softc *VAR_0)
{
 static const char *VAR_1 = "MSI";
 static const char *VAR_2 = "K9N6PGM2-V2 (MS-7309)";
 char *VAR_3, *VAR_4;
 int VAR_5;

 VAR_5 = 0;
 VAR_3 = FUNC_1("smbios.planar.maker");
 VAR_4 = FUNC_1("smbios.planar.product");
 if (VAR_3 != ((void*)0) && VAR_4 != ((void*)0)) {
  if (FUNC_2(VAR_3, VAR_1) == 0 && FUNC_2(VAR_4, VAR_2) == 0)
   VAR_5 = 1;
 }
 if (VAR_3 != ((void*)0))
  FUNC_0(VAR_3);
 if (VAR_4 != ((void*)0))
  FUNC_0(VAR_4);

 return (VAR_5);
}
