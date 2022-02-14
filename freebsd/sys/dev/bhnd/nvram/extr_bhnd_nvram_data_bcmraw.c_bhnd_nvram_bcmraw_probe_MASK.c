
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_io {int dummy; } ;
typedef int envp ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char) ;
 size_t FUNC_1 (int,size_t) ;
 size_t FUNC_2 (struct bhnd_nvram_io*) ;
 int FUNC_3 (struct bhnd_nvram_io*,size_t,char*,size_t) ;

__attribute__((used)) static int
FUNC_4(struct bhnd_nvram_io *VAR_2)
{
 char VAR_3[16];
 size_t VAR_4;
 size_t VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_2);




 VAR_4 = FUNC_1(sizeof(VAR_3), VAR_5);
 if ((VAR_6 = FUNC_3(VAR_2, 0x0, VAR_3, VAR_4)))
  return (VAR_6);



 if (VAR_4 == 0)
  return (VAR_1);

 if (VAR_4 == 1) {
  if (VAR_3[0] != '\0')
   return (VAR_1);

  return (VAR_0);
 }



 for (size_t VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  char VAR_8 = VAR_3[VAR_7];


  if (VAR_8 == '\n')
   return (VAR_1);

  if (VAR_8 == '\0' && !FUNC_0(VAR_8))
   continue;
 }




 VAR_4 = 2;
 if (VAR_5 < VAR_4)
  return (VAR_1);

 if ((VAR_6 = FUNC_3(VAR_2, VAR_5-VAR_4, VAR_3, VAR_4)))
  return (VAR_6);

 if (VAR_3[0] != '\0' || VAR_3[1] != '\0')
  return (VAR_1);

 return (VAR_0 + 1);
}
