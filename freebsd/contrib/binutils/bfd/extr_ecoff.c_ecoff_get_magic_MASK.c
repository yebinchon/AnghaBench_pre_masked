
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;


 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;




__attribute__((used)) static int
FUNC_4 (bfd *VAR_7)
{
  int VAR_8, VAR_9;

  switch (FUNC_2 (VAR_7))
    {
    case 131:
      switch (FUNC_3 (VAR_7))
 {
 default:
 case 0:
 case 130:
   VAR_8 = VAR_1;
   VAR_9 = VAR_4;
   break;

 case 128:
   VAR_8 = VAR_2;
   VAR_9 = VAR_5;
   break;

 case 129:
   VAR_8 = VAR_3;
   VAR_9 = VAR_6;
   break;
 }

      return FUNC_1 (VAR_7) ? VAR_8 : VAR_9;

    case 132:
      return VAR_0;

    default:
      FUNC_0 ();
      return 0;
    }
}
