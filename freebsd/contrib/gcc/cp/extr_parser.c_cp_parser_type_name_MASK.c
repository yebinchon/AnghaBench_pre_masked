
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_11__ {int scope; } ;
typedef TYPE_1__ cp_parser ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int,int,int ,int,int,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,scalar_t__) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,scalar_t__,char*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;

__attribute__((used)) static tree
FUNC_14 (cp_parser* VAR_3)
{
  tree VAR_4;
  tree VAR_5;


  FUNC_8 (VAR_3);

  VAR_4 = FUNC_2 (VAR_3,
                               0,
                               0,
        VAR_2,
                               1,
                         0,
                           0);

  if (!FUNC_7 (VAR_3))
    {

      VAR_5 = FUNC_3 (VAR_3);
      if (VAR_5 == VAR_1)
 return VAR_1;


      VAR_4 = FUNC_4 (VAR_3, VAR_5);

      if (FUNC_0 (VAR_4) != VAR_0
   && (FUNC_13 (VAR_5) || FUNC_12 (VAR_5)))
 {

   tree VAR_6 = FUNC_6 (VAR_3);
   tree VAR_7 = FUNC_11 (VAR_5, VAR_6);
   if (VAR_7)
     VAR_4 = FUNC_1 (VAR_7);
 }


      if (FUNC_0 (VAR_4) != VAR_0)
 {
   if (!FUNC_9 (VAR_3))
     FUNC_5 (VAR_3, VAR_5, VAR_4,
      "is not a type");
   VAR_4 = VAR_1;
 }




      else if (VAR_4 != VAR_1
        && !VAR_3->scope)
 FUNC_10 (VAR_5, VAR_4);
    }

  return VAR_4;
}
