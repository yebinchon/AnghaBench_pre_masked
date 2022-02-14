
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct type {int dummy; } ;
struct symbol {int dummy; } ;
struct fn_field {int physname; } ;
struct badness_vector {int* rank; } ;
struct TYPE_2__ {struct type* type; } ;


 int FUNC_0 (struct symbol*) ;
 int FUNC_1 (struct symbol*) ;
 struct type* FUNC_2 (int ,int) ;
 TYPE_1__* FUNC_3 (struct fn_field*,int) ;
 int FUNC_4 (struct fn_field*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct badness_vector*,struct badness_vector*) ;
 int FUNC_7 (int ,char*,int,int) ;
 int VAR_0 ;
 int FUNC_8 (int,struct fn_field*,int) ;
 scalar_t__ VAR_1 ;
 struct badness_vector* FUNC_9 (struct type**,int,struct type**,int) ;
 int FUNC_10 (struct type**) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int
FUNC_12 (struct type **VAR_2, int VAR_3, int VAR_4,
    int VAR_5, struct fn_field *VAR_6,
    struct symbol **VAR_7,
    struct badness_vector **VAR_8)
{
  int VAR_9;
  struct badness_vector *VAR_10;
  int VAR_11 = -1;
  int VAR_12 = 0;


  *VAR_8 = ((void*)0);


  for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
    {
      int VAR_13;
      int VAR_14 = FUNC_8 (VAR_4, VAR_6, VAR_9);
      int VAR_15;
      struct type **VAR_16;

      if (VAR_4)
 {
   VAR_15 = FUNC_5 (FUNC_4 (VAR_6, VAR_9));
 }
      else
 {

   VAR_15=FUNC_5(FUNC_1(VAR_7[VAR_9]));
 }


      VAR_16 = (struct type **) FUNC_11 (VAR_15 * (sizeof (struct type *)));
      for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13++)
 VAR_16[VAR_13] = (VAR_4
     ? (FUNC_3 (VAR_6, VAR_9)[VAR_13].type)
     : FUNC_2 (FUNC_1 (VAR_7[VAR_9]), VAR_13));



      VAR_10 = FUNC_9 (VAR_16, VAR_15, VAR_2 + VAR_14,
     VAR_3 - VAR_14);

      if (!*VAR_8)
 {
   *VAR_8 = VAR_10;
   VAR_11 = 0;
 }
      else

 switch (FUNC_6 (VAR_10, *VAR_8))
   {
   case 0:
     VAR_12 = 1;
     break;
   case 1:
     VAR_12 = 2;
     break;
   case 2:
     *VAR_8 = VAR_10;
     VAR_12 = 0;
     VAR_11 = VAR_9;
     break;
   case 3:
   default:
     break;
   }
      FUNC_10 (VAR_16);
      if (VAR_1)
 {
   if (VAR_4)
     FUNC_7 (VAR_0,"Overloaded method instance %s, # of parms %d\n", VAR_6[VAR_9].physname, VAR_15);
   else
     FUNC_7 (VAR_0,"Overloaded function instance %s # of parms %d\n", FUNC_0 (VAR_7[VAR_9]), VAR_15);
   for (VAR_13 = 0; VAR_13 < VAR_3 - VAR_14; VAR_13++)
     FUNC_7 (VAR_0,"...Badness @ %d : %d\n", VAR_13, VAR_10->rank[VAR_13]);
   FUNC_7 (VAR_0,"Overload resolution champion is %d, ambiguous? %d\n", VAR_11, VAR_12);
 }
    }

  return VAR_11;
}
