
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;



 int FUNC_0 (int ) ;
 int const FUNC_1 (int ) ;

 int const VAR_0 ;


 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,char*,int,int,...) ;
 int VAR_2 ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 (char*,int *) ;

const char *
FUNC_9 (rtx *VAR_3)
{
  rtx VAR_4;
  rtx VAR_5;
  rtx VAR_6;
  rtx VAR_7;
  rtx VAR_8;

  FUNC_6 (FUNC_1 (VAR_3[0]) == 128);
  FUNC_6 (FUNC_1 (VAR_3[1]) == VAR_0);


  VAR_4 = FUNC_3 (VAR_3[1], 0);


  switch (FUNC_1 (VAR_4))
    {
    case 128:
      VAR_3[2] = FUNC_4 (VAR_3[1], VAR_1, 4);

      if (FUNC_2 (VAR_3[0]) == FUNC_2 (VAR_4))
 {
   FUNC_8 ("ldr\t%H0, %2", VAR_3);
   FUNC_8 ("ldr\t%0, %1", VAR_3);
 }
      else
 {
   FUNC_8 ("ldr\t%0, %1", VAR_3);
   FUNC_8 ("ldr\t%H0, %2", VAR_3);
 }
      break;

    case 131:

      VAR_3[2] = FUNC_4 (VAR_3[1], VAR_1, 4);

      FUNC_8 ("ldr\t%0, %1", VAR_3);
      FUNC_8 ("ldr\t%H0, %2", VAR_3);
      break;

    case 129:
      VAR_7 = FUNC_3 (VAR_4, 0);
      VAR_8 = FUNC_3 (VAR_4, 1);

      if (FUNC_0 (VAR_7))
 VAR_5 = VAR_8, VAR_6 = VAR_7;
      else
 VAR_5 = VAR_7, VAR_6 = VAR_8;

      FUNC_6 (FUNC_1 (VAR_5) == 128);


      if (FUNC_1 (VAR_6) == 128)
 {
   int VAR_9 = FUNC_2 (VAR_6);
   int VAR_10 = FUNC_2 (VAR_5);
   int VAR_11 = FUNC_2 (VAR_3[0]);



   FUNC_5 (VAR_2, "\tadd\t%r, %r, %r",
         VAR_11 + 1, VAR_10, VAR_9);



   FUNC_5 (VAR_2, "\tldr\t%r, [%r, #0]",
         VAR_11, VAR_11 + 1);



   FUNC_5 (VAR_2, "\tldr\t%r, [%r, #4]",
         VAR_11 + 1, VAR_11 + 1);
 }
      else
 {

   VAR_3[2] = FUNC_4 (VAR_3[1], VAR_1, 4);




   if (FUNC_2 (VAR_3[0]) == FUNC_2 (VAR_5))
     {
       FUNC_8 ("ldr\t%H0, %2", VAR_3);
       FUNC_8 ("ldr\t%0, %1", VAR_3);
     }
   else
     {
       FUNC_8 ("ldr\t%0, %1", VAR_3);
       FUNC_8 ("ldr\t%H0, %2", VAR_3);
     }
 }
      break;

    case 130:


      VAR_3[2] = FUNC_4 (VAR_3[1], VAR_1, 4);

      FUNC_8 ("ldr\t%H0, %2", VAR_3);
      FUNC_8 ("ldr\t%0, %1", VAR_3);
      break;

    default:
      FUNC_7 ();
    }

  return "";
}
