
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef scalar_t__ t_bool ;
struct loop {int dummy; } ;
typedef int basic_block ;
struct TYPE_2__ {int src; } ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 TYPE_1__* FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (struct loop*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_5 (struct loop*,scalar_t__) ;
 int FUNC_6 (struct loop*,int ) ;
 scalar_t__ FUNC_7 (struct loop*,scalar_t__,scalar_t__,scalar_t__,scalar_t__*,int) ;
 struct loop* FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static t_bool
FUNC_9 (struct loop *VAR_3,
    tree VAR_4,
    tree VAR_5,
    tree *VAR_6, int VAR_7)
{
  struct loop *VAR_8 = FUNC_8 (VAR_4);
  tree VAR_9 = FUNC_4 (VAR_8, FUNC_3 (VAR_4));



  if (VAR_9 == FUNC_3 (VAR_4))
    {
      t_bool VAR_10 = VAR_1;
      int VAR_11;

      for (VAR_11 = 0; VAR_11 < FUNC_2 (VAR_4); VAR_11++)
 {
   tree VAR_12 = FUNC_0 (VAR_4, VAR_11);
   basic_block VAR_13;


   VAR_13 = FUNC_1 (VAR_4, VAR_11)->src;
   if (!FUNC_6 (VAR_8, VAR_13))
     VAR_10 = FUNC_7 (VAR_3, VAR_4,
       VAR_12, VAR_5,
       VAR_6, VAR_7);
   if (VAR_10 == VAR_2)
     break;
 }


      if (VAR_10 == VAR_2)
 *VAR_6 = VAR_0;

      return VAR_10;
    }


  VAR_9 = FUNC_5 (VAR_8, VAR_9);
  return FUNC_7 (VAR_3, VAR_4, VAR_9, VAR_5,
     VAR_6, VAR_7);
}
