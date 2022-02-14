
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_2__ {char* (* mangle_fundamental_type ) (scalar_t__) ;} ;


 scalar_t__ VAR_0 ;







 int FUNC_0 (char*,scalar_t__) ;







 int FUNC_1 (scalar_t__) ;

 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;




 int FUNC_9 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 () ;
 char* FUNC_12 (scalar_t__) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (char) ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (scalar_t__) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (scalar_t__) ;
 int FUNC_21 (char const*) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (scalar_t__) ;
 int FUNC_24 (scalar_t__) ;

__attribute__((used)) static void
FUNC_25 (tree VAR_3)
{


  int VAR_4 = 0;

  FUNC_0 ("type", VAR_3);

  if (VAR_3 == VAR_1)
    return;

  if (FUNC_10 (VAR_3))
    return;

  if (FUNC_13 (VAR_3) > 0)




    FUNC_25 (FUNC_5 (VAR_3));
  else if (FUNC_3 (VAR_3) == VAR_0)



    FUNC_14 (VAR_3);
  else
    {

      VAR_3 = FUNC_5 (VAR_3);

      if (FUNC_7 (VAR_3))
 FUNC_20 (VAR_3);
      else switch (FUNC_3 (VAR_3))
 {
 case 128:
 case 146:
 case 141:
 case 138:
 {

   const char *VAR_5
     = VAR_2.mangle_fundamental_type (VAR_3);

   if (VAR_5)
     {
       FUNC_21 (VAR_5);
       return;
     }




   FUNC_15 (FUNC_5 (VAR_3));
   ++VAR_4;
   break;
 }

 case 144:
   FUNC_16 ('C');
   FUNC_25 (FUNC_4 (VAR_3));
   break;

 case 142:
 case 140:
   FUNC_18 (VAR_3);
   break;

 case 130:
 case 137:
 case 143:


   if (FUNC_6 (VAR_3))
     FUNC_20 (VAR_3);
   else
     FUNC_17 (VAR_3);
   break;

 case 132:
 case 131:


   FUNC_19 (FUNC_8 (VAR_3));
   break;

 case 139:
   FUNC_16 ('P');
   FUNC_25 (FUNC_4 (VAR_3));
   break;


  case 147:
    FUNC_21 ("U13block_pointer");
    FUNC_25 (FUNC_4 (VAR_3));
    break;


 case 136:
   FUNC_16 ('R');
   FUNC_25 (FUNC_4 (VAR_3));
   break;

 case 133:
 case 135:
   FUNC_23 (VAR_3);
   break;

 case 134:
   FUNC_24 (VAR_3);
   break;

 case 145:
   FUNC_24 (VAR_3);
   FUNC_22
     (FUNC_2 (FUNC_1 (VAR_3)));
   break;

 case 129:
   FUNC_21 ("U8__vector");
   FUNC_25 (FUNC_4 (VAR_3));
   break;

 default:
   FUNC_11 ();
 }
    }


  if (!VAR_4)
    FUNC_9 (VAR_3);
}
