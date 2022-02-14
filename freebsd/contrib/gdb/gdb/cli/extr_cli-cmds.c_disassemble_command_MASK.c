
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int asection ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char**,int *,int *) ;
 int FUNC_2 (int ,int ,int ,int ,int,int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 (char*,...) ;
 scalar_t__ FUNC_8 (char*,char) ;
 scalar_t__ VAR_4 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_12 (char *VAR_6, int VAR_7)
{
  CORE_ADDR VAR_8, VAR_9;
  char *VAR_10;
  CORE_ADDR VAR_11, VAR_12;
  char *VAR_13;




  VAR_10 = ((void*)0);
  if (!VAR_6)
    {
      if (!VAR_2)
 FUNC_0 ("No frame selected.\n");

      VAR_11 = FUNC_4 (VAR_2);
      if (FUNC_1 (VAR_11, &VAR_10, &VAR_8, &VAR_9) == 0)
 FUNC_0 ("No function contains program counter for selected frame.\n");







      VAR_8 += VAR_1;
    }
  else if (!(VAR_13 = (char *) FUNC_8 (VAR_6, ' ')))
    {

      VAR_11 = FUNC_5 (VAR_6);
      if (FUNC_1 (VAR_11, &VAR_10, &VAR_8, &VAR_9) == 0)
 FUNC_0 ("No function contains specified address.\n");







      VAR_8 += VAR_1;
    }
  else
    {

      *VAR_13 = '\0';
      VAR_8 = FUNC_5 (VAR_6);
      VAR_9 = FUNC_5 (VAR_13 + 1);
    }




    {
      FUNC_7 ("Dump of assembler code ");
      if (VAR_10 != ((void*)0))
 {
   FUNC_7 ("for function %s:\n", VAR_10);
 }
      else
 {
   FUNC_7 ("from ");
   FUNC_6 (VAR_8, 1, VAR_3);
   FUNC_7 (" to ");
   FUNC_6 (VAR_9, 1, VAR_3);
   FUNC_7 (":\n");
 }


      FUNC_2 (VAR_5, 0, 0, 0, -1, VAR_8, VAR_9);

      FUNC_7 ("End of assembler dump.\n");
      FUNC_3 (VAR_3);
    }






}
