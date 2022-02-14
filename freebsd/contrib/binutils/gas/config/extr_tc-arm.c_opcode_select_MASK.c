
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,...) ;
 int VAR_4 ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ,int) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_6 (int VAR_8)
{
  switch (VAR_8)
    {
    case 16:
      if (! VAR_7)
 {
   if (!FUNC_0 (VAR_4, VAR_3))
     FUNC_2 (FUNC_1("selected processor does not support THUMB opcodes"));

   VAR_7 = 1;


   FUNC_5 (VAR_6, 1);
 }
      FUNC_4 (VAR_1);
      break;

    case 32:
      if (VAR_7)
 {
   if (!FUNC_0 (VAR_4, VAR_2))
     FUNC_2 (FUNC_1("selected processor does not support ARM opcodes"));

   VAR_7 = 0;

   if (!VAR_5)
     FUNC_3 (2, 0, 0);

   FUNC_5 (VAR_6, 1);
 }
      FUNC_4 (VAR_0);
      break;

    default:
      FUNC_2 (FUNC_1("invalid instruction size selected (%d)"), VAR_8);
    }
}
