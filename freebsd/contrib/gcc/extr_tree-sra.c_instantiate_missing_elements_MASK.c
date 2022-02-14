
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct sra_elt {int element; int type; } ;




 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ,int ,int ) ;
 int FUNC_11 () ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (struct sra_elt*,int ,int ) ;
 int FUNC_14 (int ,int ,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_15 (int ,int ) ;

__attribute__((used)) static void
FUNC_16 (struct sra_elt *VAR_6)
{
  tree VAR_7 = VAR_6->type;

  switch (FUNC_3 (VAR_7))
    {
    case 128:
      {
 tree VAR_8;
 for (VAR_8 = FUNC_6 (VAR_7); VAR_8 ; VAR_8 = FUNC_2 (VAR_8))
   if (FUNC_3 (VAR_8) == VAR_1)
     {
       tree VAR_9 = FUNC_4 (VAR_8);





       if (FUNC_1 (VAR_9)
    && FUNC_0 (VAR_8) != FUNC_9 (VAR_9))
  VAR_9 = FUNC_4 (FUNC_12 (FUNC_10 (VAR_0,
              VAR_9,
              VAR_6->element,
              VAR_8, VAR_2),
             VAR_2));

       FUNC_13 (VAR_6, VAR_8, VAR_9);
     }
 break;
      }

    case 130:
      {
 tree VAR_10, VAR_11, VAR_12;

 VAR_10 = FUNC_8 (FUNC_5 (VAR_7));
 VAR_11 = FUNC_7 (FUNC_5 (VAR_7));
 VAR_12 = FUNC_4 (VAR_7);

 while (1)
   {
     FUNC_13 (VAR_6, VAR_10, VAR_12);
     if (FUNC_15 (VAR_10, VAR_11))
       break;
     VAR_10 = FUNC_14 (VAR_3, VAR_10, VAR_4, 1);
   }

 break;
      }

    case 129:
      VAR_7 = FUNC_4 (VAR_7);
      FUNC_13 (VAR_6, VAR_5, VAR_7);
      FUNC_13 (VAR_6, VAR_4, VAR_7);
      break;

    default:
      FUNC_11 ();
    }
}
