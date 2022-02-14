
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct job {scalar_t__ state; scalar_t__ jobctl; scalar_t__ foreground; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 (int,struct job*) ;
 int VAR_11 ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (struct job*) ;
 int FUNC_11 (struct job*) ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 () ;
 struct job* VAR_12 ;
 int FUNC_14 (int ,int) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_15 (struct job*) ;
 scalar_t__ FUNC_16 (scalar_t__,int ) ;
 scalar_t__ VAR_15 ;

int
FUNC_17(struct job *VAR_16, int *VAR_17)
{



 int VAR_18;
 int VAR_19;

 VAR_4;
 FUNC_0(("waitforjob(%%%td) called\n", VAR_16 - VAR_12 + 1));
 while (VAR_16->state == 0)
  if (FUNC_8(VAR_1 | (VAR_10 ? VAR_2 |
      VAR_3 : 0), VAR_16) == -1)
   FUNC_7();
 VAR_18 = FUNC_11(VAR_16);
 if (VAR_17 != ((void*)0))
  *VAR_17 = FUNC_3(VAR_18);

 if (FUNC_2(VAR_18))
  VAR_19 = FUNC_1(VAR_18);




 else
  VAR_19 = FUNC_6(VAR_18) + 128;
 if (! VAR_7 || VAR_16->state == VAR_6)
  FUNC_10(VAR_16);
 if (FUNC_13()) {
  if (!FUNC_3(VAR_18) || FUNC_6(VAR_18) != VAR_9)
   VAR_0;
 }





 VAR_5;
 return VAR_19;
}
