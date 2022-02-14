
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* ar_name; } ;
typedef int Elf_Cmd ;
typedef TYPE_1__ Elf_Arhdr ;
typedef int Elf ;


 int VAR_0 ;
 int * FUNC_0 (int,int ,int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static int
FUNC_5(int VAR_1, Elf *VAR_2, char *VAR_3)
{
 Elf *VAR_4;
 Elf_Cmd VAR_5 = VAR_0;
 Elf_Arhdr *VAR_6;
 int VAR_7 = 0, VAR_8 = 0;

 while ((VAR_4 = FUNC_0(VAR_1, VAR_5, VAR_2)) != ((void*)0)) {
  if ((VAR_6 = FUNC_2(VAR_4)) == ((void*)0)) {
   FUNC_4("Can't process input archive %s\n",
       VAR_3);
   VAR_8++;
  }

  if (*VAR_6->ar_name != '/')
   VAR_7++;

  VAR_5 = FUNC_3(VAR_4);
  (void) FUNC_1(VAR_4);
 }

 if (VAR_8 > 0)
  return (-1);

 return (VAR_7);
}
