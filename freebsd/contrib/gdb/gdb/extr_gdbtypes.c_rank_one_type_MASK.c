
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct type*) ;
 int VAR_11 ;


 struct type* FUNC_1 (struct type*,int ) ;
 int FUNC_2 (struct type*) ;
 char* FUNC_3 (struct type*) ;
 int FUNC_4 (struct type*) ;
 struct type* FUNC_5 (struct type*) ;
 int FUNC_6 (struct type*) ;
 int VAR_12 ;
 struct type* FUNC_7 (struct type*) ;
 int FUNC_8 (int ,char*,char*,int,char*,int) ;
 int VAR_13 ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (struct type*,struct type*) ;
 scalar_t__ VAR_14 ;
 int FUNC_11 (char*,char*) ;

int
FUNC_12 (struct type *VAR_15, struct type *VAR_16)
{




  if (VAR_15 == VAR_16)
    return 0;


  if (FUNC_0 (VAR_15) == VAR_11)
    VAR_15 = FUNC_7 (VAR_15);
  if (FUNC_0 (VAR_16) == VAR_11)
    VAR_16 = FUNC_7 (VAR_16);
  if (FUNC_3 (VAR_15) && FUNC_3 (VAR_16) &&
      !FUNC_11 (FUNC_3 (VAR_15), FUNC_3 (VAR_16)))
      return 0;


  if (VAR_15 == VAR_16)
    return 0;



  if (FUNC_0 (VAR_16) == 132)
    return (FUNC_12 (VAR_15, FUNC_5 (VAR_16))
     + VAR_10);
  if (FUNC_0 (VAR_15) == 132)
    return (FUNC_12 (FUNC_5 (VAR_15), VAR_16)
     + VAR_10);
  if (VAR_14)

    FUNC_8 (VAR_13,"------ Arg is %s [%d], parm is %s [%d]\n",
        FUNC_3 (VAR_16), FUNC_0 (VAR_16), FUNC_3 (VAR_15), FUNC_0 (VAR_15));



  switch (FUNC_0 (VAR_15))
    {
    case 134:
      switch (FUNC_0 (VAR_16))
 {
 case 134:
   if (FUNC_0 (FUNC_5 (VAR_15)) == 128)
     return VAR_12;
   else
     return FUNC_12 (FUNC_5 (VAR_15), FUNC_5 (VAR_16));
 case 144:
   return FUNC_12 (FUNC_5 (VAR_15), FUNC_5 (VAR_16));
 case 138:
   return FUNC_12 (FUNC_5 (VAR_15), VAR_16);
 case 137:
 case 140:
 case 142:
 case 133:
 case 143:
   return VAR_9;
 default:
   return VAR_4;
 }
    case 144:
      switch (FUNC_0 (VAR_16))
 {
 case 134:
 case 144:
   return FUNC_12 (FUNC_5 (VAR_15), FUNC_5 (VAR_16));
 default:
   return VAR_4;
 }
    case 138:
      switch (FUNC_0 (VAR_16))
 {
 case 134:
   return FUNC_12 (VAR_15, FUNC_5 (VAR_16));
 default:
   return VAR_4;
 }
    case 137:
      switch (FUNC_0 (VAR_16))
 {
 case 137:
   if (FUNC_2 (VAR_16) == FUNC_2 (VAR_15))
     {


       if (FUNC_4 (VAR_15))
  {

    if (FUNC_4 (VAR_16))
      return 0;
    else
      return VAR_5;
  }
       else if (FUNC_6 (VAR_15))
  {
    if (FUNC_6 (VAR_16))
      {

        if (FUNC_9 (FUNC_3 (VAR_15), FUNC_3 (VAR_16)))
   return 0;
        else if (FUNC_9 (FUNC_3 (VAR_16), "int")
          && FUNC_9 (FUNC_3 (VAR_15), "long"))
   return VAR_6;
        else
   return VAR_5;
      }
    else
      {
        if (FUNC_9 (FUNC_3 (VAR_16), "long")
     && FUNC_9 (FUNC_3 (VAR_15), "int"))
   return VAR_5;
        else
   return VAR_5;
      }
  }
       else if (!FUNC_4 (VAR_16) && !FUNC_6 (VAR_16))
  {
    if (FUNC_9 (FUNC_3 (VAR_15), FUNC_3 (VAR_16)))
      return 0;
    else if (FUNC_9 (FUNC_3 (VAR_16), "int")
      && FUNC_9 (FUNC_3 (VAR_15), "long"))
      return VAR_6;
    else
      return VAR_5;
  }
       else
  return VAR_5;
     }
   else if (FUNC_2 (VAR_16) < FUNC_2 (VAR_15))
     return VAR_6;
   else
     return VAR_5;
 case 140:
 case 142:
 case 133:
 case 143:
   return VAR_6;
 case 139:
   return VAR_7;
 case 134:
   return VAR_8;
 default:
   return VAR_4;
 }
      break;
    case 140:
      switch (FUNC_0 (VAR_16))
 {
 case 137:
 case 142:
 case 133:
 case 143:
 case 140:
   return VAR_5;
 case 139:
   return VAR_7;
 default:
   return VAR_4;
 }
      break;
    case 142:
      switch (FUNC_0 (VAR_16))
 {
 case 133:
 case 143:
 case 140:
   return VAR_5;
 case 139:
   return VAR_7;
 case 137:
   if (FUNC_2 (VAR_16) > FUNC_2 (VAR_15))
     return VAR_5;
   else if (FUNC_2 (VAR_16) < FUNC_2 (VAR_15))
     return VAR_6;

 case 142:


   if (FUNC_4 (VAR_15))
     {
       if (FUNC_4 (VAR_16))
  return 0;
       else
  return VAR_5;
     }
   else if (FUNC_6 (VAR_15))
     {
       if (FUNC_6 (VAR_16))
  return 0;
       else
  return VAR_6;
     }
   else if (!FUNC_4 (VAR_16) && !FUNC_6 (VAR_16))
     return 0;
   else
     return VAR_5;
 default:
   return VAR_4;
 }
      break;
    case 133:
      switch (FUNC_0 (VAR_16))
 {
 case 137:
 case 142:
 case 133:
 case 143:
 case 140:
   return VAR_5;
 case 139:
   return VAR_7;
 default:
   return VAR_4;
 }
      break;
    case 143:
      switch (FUNC_0 (VAR_16))
 {
 case 137:
 case 142:
 case 133:
 case 140:
 case 139:
 case 134:
   return VAR_1;
 case 143:
   return 0;
 default:
   return VAR_4;
 }
      break;
    case 139:
      switch (FUNC_0 (VAR_16))
 {
 case 139:
   if (FUNC_2 (VAR_16) < FUNC_2 (VAR_15))
     return VAR_3;
   else if (FUNC_2 (VAR_16) == FUNC_2 (VAR_15))
     return 0;
   else
     return VAR_2;
 case 137:
 case 143:
 case 140:
 case 133:
 case 142:
   return VAR_7;
 default:
   return VAR_4;
 }
      break;
    case 141:
      switch (FUNC_0 (VAR_16))
 {
 case 139:
   return VAR_3;
 case 141:
   return 0;
 default:
   return VAR_4;
 }
      break;
    case 130:

      switch (FUNC_0 (VAR_16))
 {
 case 130:

   if (FUNC_10 (VAR_15, VAR_16))
     return VAR_0;

 default:
   return VAR_4;
 }
      break;
    case 129:
      switch (FUNC_0 (VAR_16))
 {
 case 129:
 default:
   return VAR_4;
 }
      break;
    case 136:
      switch (FUNC_0 (VAR_16))
 {
 default:
   return VAR_4;
 }
      break;
    case 135:
      switch (FUNC_0 (VAR_16))
 {

 default:
   return VAR_4;
 }
      break;
    case 132:
      switch (FUNC_0 (VAR_16))
 {

 default:
   return VAR_4;
 }

      break;
    case 131:
      switch (FUNC_0 (VAR_16))
 {

 case 131:
   return FUNC_12 (FUNC_1 (VAR_15, 0), FUNC_1 (VAR_16, 0));
 default:
   return VAR_4;
 }
      break;
    case 128:
    default:
      return VAR_4;
    }
}
