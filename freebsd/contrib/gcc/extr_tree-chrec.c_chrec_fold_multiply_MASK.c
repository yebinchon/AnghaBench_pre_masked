
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* tree ;


 void* FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int VAR_0 ;

 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (void*) ;
 void* FUNC_5 (void*,int ) ;
 void* FUNC_6 (int ,void*,void*) ;
 void* FUNC_7 (void*,void*) ;
 void* FUNC_8 (void*,void*,void*) ;
 void* FUNC_9 (int ,void*,void*,void*) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (void*) ;

tree
FUNC_12 (tree VAR_1,
       tree VAR_2,
       tree VAR_3)
{
  if (FUNC_4 (VAR_2)
      || FUNC_4 (VAR_3))
    return FUNC_7 (VAR_2, VAR_3);

  switch (FUNC_3 (VAR_2))
    {
    case 128:
      switch (FUNC_3 (VAR_3))
 {
 case 128:
   return FUNC_8 (VAR_1, VAR_2, VAR_3);

 default:
   if (FUNC_10 (VAR_3))
     return VAR_2;
   if (FUNC_11 (VAR_3))
     return FUNC_5 (VAR_1, 0);

   return FUNC_6
     (FUNC_2 (VAR_2),
      FUNC_12 (VAR_1, FUNC_0 (VAR_2), VAR_3),
      FUNC_12 (VAR_1, FUNC_1 (VAR_2), VAR_3));
 }

    default:
      if (FUNC_10 (VAR_2))
 return VAR_3;

      if (FUNC_11 (VAR_2))
     return FUNC_5 (VAR_1, 0);

      switch (FUNC_3 (VAR_3))
 {
 case 128:
   return FUNC_6
     (FUNC_2 (VAR_3),
      FUNC_12 (VAR_1, FUNC_0 (VAR_3), VAR_2),
      FUNC_12 (VAR_1, FUNC_1 (VAR_3), VAR_2));

 default:
   if (FUNC_10 (VAR_3))
     return VAR_2;
   if (FUNC_11 (VAR_3))
     return FUNC_5 (VAR_1, 0);
   return FUNC_9 (VAR_0, VAR_1, VAR_2, VAR_3);
 }
    }
}
