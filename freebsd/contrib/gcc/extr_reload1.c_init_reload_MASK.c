
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,char*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;

void
FUNC_10 (void)
{
  int VAR_12;





  rtx VAR_13
    = FUNC_3 (VAR_3,
     FUNC_4 (VAR_3,
     FUNC_5 (VAR_3,
           VAR_2 + 1),
     FUNC_0 (4)));
  VAR_10 = 0;

  while (FUNC_7 (VAR_4, VAR_13))
    {
      VAR_10++;
      VAR_13 = FUNC_3 (VAR_3, VAR_13);
    }



  VAR_13 = FUNC_3 (VAR_3, FUNC_6 (VAR_3, "foo"));
  VAR_6 = FUNC_7 (VAR_4, VAR_13);



  for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++)
    {
      VAR_13 = FUNC_4 (VAR_3,
     FUNC_5 (VAR_3, VAR_1),
     FUNC_5 (VAR_3, VAR_12));


      VAR_13 = FUNC_9 (VAR_13, 4);

      if (FUNC_7 (VAR_4, VAR_13))
 {
   VAR_5 = 1;
   break;
 }
    }


  FUNC_2 (&VAR_8);
  VAR_9 = FUNC_8 (&VAR_8, 0);

  FUNC_1 (&VAR_11);
  FUNC_1 (&VAR_7);
}
