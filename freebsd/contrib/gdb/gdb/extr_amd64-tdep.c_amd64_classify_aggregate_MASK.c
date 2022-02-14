
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
typedef enum amd64_reg_class { ____Placeholder_amd64_reg_class } amd64_reg_class ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct type*,int) ;
 scalar_t__ FUNC_2 (struct type*,int) ;
 int FUNC_3 (struct type*,int) ;
 int FUNC_4 (struct type*) ;
 int FUNC_5 (struct type*) ;
 int FUNC_6 (struct type*) ;
 int FUNC_7 (struct type*,int*) ;
 int FUNC_8 (int,int) ;
 scalar_t__ FUNC_9 (struct type*) ;
 struct type* FUNC_10 (int ) ;
 int FUNC_11 (int) ;

__attribute__((used)) static void
FUNC_12 (struct type *VAR_7, enum amd64_reg_class VAR_8[2])
{
  int VAR_9 = FUNC_4 (VAR_7);




  if (VAR_9 > 16 || FUNC_9 (VAR_7))
    {
      VAR_8[0] = VAR_8[1] = VAR_0;
      return;
    }


  VAR_8[0] = VAR_8[1] = VAR_1;






  if (FUNC_0 (VAR_7) == VAR_4)
    {
      struct type *VAR_10 = FUNC_10 (FUNC_6 (VAR_7));


      FUNC_7 (VAR_10, VAR_8);
      if (VAR_9 > 8 && VAR_8[1] == VAR_1)
 VAR_8[1] = VAR_8[0];
    }
  else
    {
      int VAR_11;


      FUNC_11 (FUNC_0 (VAR_7) == VAR_5
    || FUNC_0 (VAR_7) == VAR_6);

      for (VAR_11 = 0; VAR_11 < FUNC_5 (VAR_7); VAR_11++)
 {
   struct type *VAR_12 = FUNC_10 (FUNC_3 (VAR_7, VAR_11));
   int VAR_13 = FUNC_1 (VAR_7, VAR_11) / 64;
   enum amd64_reg_class VAR_14[2];


   if (FUNC_2 (VAR_7, VAR_11))
     continue;

   FUNC_11 (VAR_13 == 0 || VAR_13 == 1);

   FUNC_7 (VAR_12, VAR_14);
   VAR_8[VAR_13] = FUNC_8 (VAR_8[VAR_13], VAR_14[0]);
   if (VAR_13 == 0)
     VAR_8[1] = FUNC_8 (VAR_8[1], VAR_14[1]);
 }
    }





  if (VAR_8[0] == VAR_0 || VAR_8[1] == VAR_0)
    VAR_8[0] = VAR_8[1] = VAR_0;



  if (VAR_8[0] == VAR_3)
    VAR_8[0] = VAR_2;
  if (VAR_8[1] == VAR_3 && VAR_8[0] != VAR_2)
    VAR_8[1] = VAR_2;
}
