
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bhnd_nvram_btxt_ident {char* btxt; int bcm_magic; } ;
struct bhnd_nvram_io {int dummy; } ;
typedef int ident ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char) ;
 int FUNC_1 (char) ;
 int FUNC_2 (char) ;
 int FUNC_3 (struct bhnd_nvram_io*,int,union bhnd_nvram_btxt_ident*,int) ;
 scalar_t__ FUNC_4 (int ) ;
 size_t FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(struct bhnd_nvram_io *VAR_3)
{
 union bhnd_nvram_btxt_ident VAR_4;
 char VAR_5;
 int VAR_6;



 if ((VAR_6 = FUNC_3(VAR_3, 0x0, &VAR_4, sizeof(VAR_4))))
  return (VAR_6);



 if (FUNC_4(VAR_4.bcm_magic) == VAR_0)
  return (VAR_2);


 for (size_t VAR_7 = 0; VAR_7 < FUNC_5(VAR_4.btxt); VAR_7++) {
  VAR_5 = VAR_4.btxt[VAR_7];
  if (!FUNC_1(VAR_5))
   return (VAR_2);
 }



 VAR_5 = VAR_4.btxt[0];
 if (!FUNC_2(VAR_5) && !FUNC_0(VAR_5) && VAR_5 != '#')
  return (VAR_2);



 return (VAR_1);
}
