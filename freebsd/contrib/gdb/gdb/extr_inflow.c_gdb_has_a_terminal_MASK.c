
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 () ;

 int FUNC_2 (int ,int ,int *) ;

 int VAR_3 ;
 int * VAR_4 ;
 int * FUNC_3 (int ) ;
 int * FUNC_4 (int *) ;
 int * VAR_5 ;
 int FUNC_5 (int ) ;
 int VAR_6 ;


int
FUNC_6 (void)
{
  switch (VAR_2)
    {
    case 128:
      return 1;
    case 129:
      return 0;
    case 130:
      VAR_2 = 129;
      VAR_5 = FUNC_3 (0);
      if (VAR_5 != ((void*)0))
 {
   VAR_4 = FUNC_4 (VAR_5);

   if (VAR_4 != ((void*)0))
     {
       VAR_2 = 128;
     }
 }

      return VAR_2 == 128;
    default:

      return 0;
    }
}
