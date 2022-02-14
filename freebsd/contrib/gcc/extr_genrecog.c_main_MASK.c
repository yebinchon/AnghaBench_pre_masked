
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct decision_head {int dummy; } ;
typedef int * rtx ;







 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (int,char**) ;
 struct decision_head FUNC_4 (int *,int ) ;
 int FUNC_5 (struct decision_head*,int ,int) ;
 int FUNC_6 (struct decision_head*,struct decision_head*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct decision_head*,int ) ;
 char* VAR_9 ;
 int FUNC_9 (char*) ;
 int * FUNC_10 (int *,scalar_t__*) ;
 int VAR_10 ;
 int FUNC_11 () ;

int
FUNC_12 (int VAR_11, char **VAR_12)
{
  rtx VAR_13;
  struct decision_head VAR_14, VAR_15, VAR_16, VAR_17;

  VAR_9 = "genrecog";

  FUNC_5 (&VAR_14, 0, sizeof VAR_14);
  FUNC_5 (&VAR_15, 0, sizeof VAR_15);
  FUNC_5 (&VAR_16, 0, sizeof VAR_16);

  if (FUNC_3 (VAR_11, VAR_12) != VAR_4)
    return (VAR_0);

  VAR_7 = 0;

  FUNC_11 ();



  while (1)
    {
      VAR_13 = FUNC_10 (&VAR_8, &VAR_7);
      if (VAR_13 == ((void*)0))
 break;

      switch (FUNC_0 (VAR_13))
 {
 case 130:
 case 129:
   FUNC_7 (VAR_13);
   break;

 case 132:
   VAR_17 = FUNC_4 (VAR_13, VAR_2);
   FUNC_6 (&VAR_14, &VAR_17);
   break;

 case 128:
   VAR_17 = FUNC_4 (VAR_13, VAR_3);
   FUNC_6 (&VAR_15, &VAR_17);
   break;

 case 131:
   VAR_17 = FUNC_4 (VAR_13, VAR_1);
   FUNC_6 (&VAR_16, &VAR_17);

 default:
                   ;
 }
    }

  if (VAR_5 || VAR_6)
    return VAR_0;

  FUNC_9 ("\n\n");

  FUNC_8 (&VAR_14, VAR_2);
  FUNC_8 (&VAR_15, VAR_3);
  FUNC_8 (&VAR_16, VAR_1);

  FUNC_2 (VAR_10);
  return (FUNC_1 (VAR_10) != 0 ? VAR_0 : VAR_4);
}
