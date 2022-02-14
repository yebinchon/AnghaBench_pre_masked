
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,char*) ;
 scalar_t__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int,char*,char*,int) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (scalar_t__,int *) ;
 int FUNC_7 (scalar_t__,int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

void FUNC_8(int VAR_10, char *VAR_11, int VAR_12)
{
 static int VAR_13 = 0;
 int VAR_14 = VAR_2;
 int VAR_15;


 if (VAR_13++)
  return;

 for (VAR_15 = 0; VAR_15 < VAR_5; VAR_15++)
  if (VAR_1[VAR_15]) {
   FUNC_7(VAR_1[VAR_15], VAR_0);
   FUNC_6(VAR_1[VAR_15], ((void*)0));
  }

 if (VAR_6 != -1)
  if (FUNC_3(VAR_6))
   FUNC_5("mq_close() during shutdown");
 if (VAR_7)




  FUNC_4(VAR_7);
 if (VAR_8)
  FUNC_0(VAR_3, VAR_8,
        "failed to restore saved_max_msgs");
 if (VAR_9)
  FUNC_0(VAR_4, VAR_9,
        "failed to restore saved_max_msgsize");
 if (VAR_10)
  FUNC_1(VAR_10, VAR_14, "%s at %d",
        VAR_11, VAR_12);
 FUNC_2(0);
}
