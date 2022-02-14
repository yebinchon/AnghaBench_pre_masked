
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_elem {int lineno; int data; } ;
typedef int rtx ;
typedef int rtvec ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;



 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 char const* FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int VAR_2 ;
 int FUNC_7 () ;
 int FUNC_8 (int ,char*,...) ;
 int VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int * FUNC_9 (char const*,char) ;
 scalar_t__ FUNC_10 (char const*,char*) ;

__attribute__((used)) static int
FUNC_11 (struct queue_elem *VAR_6)
{
  rtvec VAR_7 = FUNC_6 (VAR_6->data, 4);
  const char *VAR_8;
  int VAR_9;

  if (! VAR_7)
    return VAR_3;

  for (VAR_9 = FUNC_1 (VAR_7) - 1; VAR_9 >= 0; --VAR_9)
    {
      rtx VAR_10 = FUNC_2 (VAR_7, VAR_9);
      switch (FUNC_0 (VAR_10))
 {
 case 129:
   if (FUNC_10 (FUNC_5 (VAR_10, 0), "predicable") == 0)
     {
       VAR_8 = FUNC_5 (VAR_10, 1);
       goto found;
     }
   break;

 case 128:
   if (FUNC_10 (FUNC_5 (VAR_10, 0), "predicable") == 0)
     {
       FUNC_8 (VAR_6->lineno,
     "multiple alternatives for `predicable'");
       VAR_2 = 1;
       return 0;
     }
   break;

 case 130:
   if (FUNC_0 (FUNC_3 (VAR_10)) != VAR_0
       || FUNC_10 (FUNC_5 (FUNC_3 (VAR_10), 0), "predicable") != 0)
     break;
   VAR_10 = FUNC_4 (VAR_10);
   if (FUNC_0 (VAR_10) == VAR_1)
     {
       VAR_8 = FUNC_5 (VAR_10, 0);
       goto found;
     }




   FUNC_8 (VAR_6->lineno,
        "non-constant value for `predicable'");
   VAR_2 = 1;
   return 0;

 default:
   FUNC_7 ();
 }
    }

  return VAR_3;

 found:




  if (FUNC_9 (VAR_8, ',') != ((void*)0))
    {
      FUNC_8 (VAR_6->lineno,
    "multiple alternatives for `predicable'");
      VAR_2 = 1;
      return 0;
    }


  if (FUNC_10 (VAR_8, VAR_5) == 0)
    return 1;
  if (FUNC_10 (VAR_8, VAR_4) == 0)
    return 0;

  FUNC_8 (VAR_6->lineno,
       "unknown value `%s' for `predicable' attribute",
       VAR_8);
  VAR_2 = 1;
  return 0;
}
