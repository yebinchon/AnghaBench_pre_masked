
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int c_parser ;
struct TYPE_2__ {int type; int keyword; } ;







 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int,int,int,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 TYPE_1__* FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;
 int FUNC_14 () ;
 int VAR_1 ;
 int FUNC_15 (char*) ;
 int VAR_2 ;
 int FUNC_16 (int) ;

__attribute__((used)) static void
FUNC_17 (c_parser *VAR_3)
{
  int VAR_4;
  switch (FUNC_10 (VAR_3)->type)
    {
    case 141:
      switch (FUNC_10 (VAR_3)->keyword)
 {
 case 128:
   VAR_4 = FUNC_12 ();
   FUNC_2 (VAR_3);
   FUNC_17 (VAR_3);
   FUNC_16 (VAR_4);
   break;
 case 136:
   FUNC_1 (VAR_3);
   break;
 case 131:
 case 132:
   FUNC_13 (FUNC_0 ());

   FUNC_6 (VAR_3, VAR_0);
   break;
 case 134:
   FUNC_13 (FUNC_0 ());
   FUNC_5 (VAR_3);
   break;
 case 135:
   FUNC_13 (FUNC_0 ());
   FUNC_4 (VAR_3);
   break;
 case 129:
   FUNC_13 (FUNC_0 ());

   FUNC_9 (VAR_3, VAR_0);
   break;


 case 130:
   FUNC_8 (VAR_3);
   break;

 case 133:
   FUNC_13 (FUNC_0 ());
   FUNC_2 (VAR_3);
   FUNC_14 ();
   break;
 default:
   goto decl_or_fndef;
 }
      break;
    case 137:
      if (VAR_1)
 FUNC_15 ("ISO C does not allow extra %<;%> outside of a function");
      FUNC_2 (VAR_3);
      break;
    case 138:
      FUNC_11 (VAR_3, VAR_2);
      break;
    case 139:
    case 140:
      if (FUNC_0 ())
 {
   FUNC_7 (VAR_3);
   break;
 }


    default:
    decl_or_fndef:




      FUNC_3 (VAR_3, 1, 1, 0, 1, ((void*)0));
      break;
    }
}
