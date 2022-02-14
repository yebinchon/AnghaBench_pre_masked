
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* tree ;
typedef int htab_t ;



 int const VAR_0 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (void*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (void*) ;


 int VAR_1 ;
 int const VAR_2 ;
 int FUNC_6 (void*) ;


 void* VAR_3 ;


 int FUNC_7 (void*) ;
 int const VAR_4 ;



 int const FUNC_8 (void*) ;
 int FUNC_9 (void*) ;
 void* FUNC_10 (void*,int) ;
 void* FUNC_11 (void*) ;

 void* VAR_5 ;
 int VAR_6 ;
 void* FUNC_12 (void*) ;
 int FUNC_13 (int,int ,int ,int *) ;
 int VAR_7 ;
 int FUNC_14 (int ,void*) ;
 void** FUNC_15 (int ,void*,int ) ;
 int VAR_8 ;
 int FUNC_16 (int ,void*) ;

__attribute__((used)) static tree
FUNC_17 (tree VAR_9, int* VAR_10, int* VAR_11)
{
  switch (FUNC_8 (VAR_9))
    {
    case 136:
      if (FUNC_7 (FUNC_11 (VAR_9)))
 return VAR_3;
      else
 return FUNC_17 (FUNC_10 (VAR_9, 0),
       VAR_10, VAR_11);

    case 140:

      if (FUNC_9 (VAR_9))
 {
   if (VAR_10)
     *VAR_10 = 1;
   return FUNC_11 (VAR_9);
 }
      return VAR_3;

    case 130:

      if (FUNC_9 (VAR_9))
 {
   if (VAR_10)
     *VAR_10 = 1;
   return FUNC_11 (VAR_9);
 }
      return FUNC_17 (FUNC_10 (VAR_9, 0), VAR_10, VAR_11);

    case 132:
    case 135:
      if (FUNC_8 (FUNC_10 (VAR_9, 0)) == 141)
 return FUNC_17 (FUNC_10 (VAR_9, 0), VAR_10, VAR_11);
      if (FUNC_8 (FUNC_10 (VAR_9, 1)) == VAR_2)

 return FUNC_17 (FUNC_10 (VAR_9, 0), VAR_10, VAR_11);
      return VAR_3;

    case 134:
    case 138:
      return FUNC_17 (FUNC_10 (VAR_9, 0), VAR_10, VAR_11);

    case 141:
      VAR_9 = FUNC_10 (VAR_9, 0);
      if (VAR_10)
 {


   tree VAR_12 = FUNC_12 (VAR_9);

   if (VAR_12 && FUNC_5 (VAR_12))
     *VAR_10 = 1;
 }
      return FUNC_17 (VAR_9, VAR_10, VAR_11);

    case 139:


      if (FUNC_2 (FUNC_10 (VAR_9, 1)))
 return FUNC_17 (FUNC_10 (VAR_9, 0), VAR_10, VAR_11);
      return FUNC_17 (FUNC_10 (VAR_9, 1), VAR_10, VAR_11);

    case 128:
    case 137:
      if (FUNC_8 (FUNC_11 (VAR_9)) == VAR_0
   && FUNC_6 (FUNC_11 (FUNC_11 (VAR_9))))
 {
   if (VAR_10)
     *VAR_10 = 1;
   return FUNC_11 (FUNC_11 (VAR_9));
 }

    case 129:
    case 133:
    case 131:
      if (FUNC_6 (FUNC_11 (VAR_9)))
 {
   if (VAR_10)
     *VAR_10 = 1;
   return FUNC_11 (VAR_9);
 }
      else if (VAR_9 == VAR_5)
 {
   if (VAR_10)
     *VAR_10 = 1;


   if (FUNC_4 (VAR_6)
       && (FUNC_0 (VAR_6)
    || FUNC_1 (VAR_6)))
     {
       if (VAR_11)
  *VAR_11 = 1;
       return FUNC_11 (FUNC_11 (VAR_9));
     }
 }
      else if (FUNC_8 (FUNC_11 (VAR_9)) == VAR_4)
 {

   static htab_t VAR_13;
   if (!VAR_13)
     VAR_13 = FUNC_13 (37,
         VAR_8,
         VAR_7,
                      ((void*)0));


   if (VAR_10)
     *VAR_10 = 1;




   if (FUNC_8 (VAR_9) == 128
       && FUNC_3 (VAR_9)
       && !FUNC_14 (VAR_13, VAR_9))
     {
       tree VAR_14;
       void **VAR_15;

       VAR_15 = FUNC_15 (VAR_13, VAR_9, VAR_1);
       *VAR_15 = VAR_9;
       VAR_14 = FUNC_17 (FUNC_3 (VAR_9),
      VAR_10, VAR_11);
       FUNC_16 (VAR_13, VAR_9);

       return VAR_14;
     }
 }
      return VAR_3;

    default:
      return VAR_3;
    }
}
