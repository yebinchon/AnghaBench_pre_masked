
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symit_data_t ;
typedef int source_types_t ;
typedef int Elf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 int * FUNC_3 (int *,char const*) ;
 int * FUNC_4 (int *,int ) ;

source_types_t
FUNC_5(Elf *VAR_5, char const *VAR_6)
{
 source_types_t VAR_7 = VAR_1;
 symit_data_t *VAR_8;

 if ((VAR_8 = FUNC_3(VAR_5, VAR_6)) == ((void*)0))
  return (VAR_1);

 while (FUNC_4(VAR_8, VAR_4) != ((void*)0)) {
  char *VAR_9 = FUNC_2(VAR_8);
  size_t VAR_10 = FUNC_0(VAR_9);
  if (VAR_10 < 2 || VAR_9[VAR_10 - 2] != '.') {
   VAR_7 |= VAR_3;
   continue;
  }

  switch (VAR_9[VAR_10 - 1]) {
  case 'c':
   VAR_7 |= VAR_0;
   break;
  case 'h':

   break;
  case 's':
  case 'S':
   VAR_7 |= VAR_2;
   break;
  default:
   VAR_7 |= VAR_3;
  }
 }

 FUNC_1(VAR_8);
 return (VAR_7);
}
