
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int cxx_pretty_printer ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;




 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void
FUNC_14 (cxx_pretty_printer *VAR_0, tree VAR_1)
{
  switch (FUNC_3 (VAR_1))
    {
    case 128:
    case 131:
    case 134:
    case 133:
      FUNC_12 (VAR_0, VAR_1);
      FUNC_14 (VAR_0, FUNC_4 (VAR_1));
      break;

    case 129:
      FUNC_10 (VAR_0, "typedef");
      FUNC_14 (VAR_0, FUNC_4 (VAR_1));
      break;

    case 130:
      if (FUNC_6 (VAR_1))
 {
   tree VAR_2 = FUNC_5 (VAR_1);
   FUNC_14 (VAR_0, FUNC_4 (FUNC_4 (VAR_2)));
   FUNC_13 (VAR_0);
   FUNC_11 (VAR_0, VAR_1);
 }
      break;

    case 132:


      if (FUNC_0 (VAR_1) || FUNC_1 (VAR_1))
 FUNC_9 (VAR_0, VAR_1);
      else if (FUNC_2 (VAR_1))
 FUNC_14 (VAR_0, FUNC_4 (FUNC_4 (VAR_1)));
      else
 default:
      FUNC_8 (FUNC_7 (VAR_0), VAR_1);
      break;
    }
}
