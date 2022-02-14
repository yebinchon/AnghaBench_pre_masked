
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptid_t ;
typedef enum target_signal { ____Placeholder_target_signal } target_signal ;
typedef int PointHandle ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;
 int VAR_3 ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8 (ptid_t VAR_4, int VAR_5, enum target_signal VAR_6)
{
  int VAR_7;
  PointHandle VAR_8;

  if (0 )
    {
      VAR_7 = FUNC_1 (1, &VAR_8);
      if (VAR_7 != VAR_2)
 FUNC_5 ("RDI_step: %s\n", FUNC_6 (VAR_7));
    }
  else
    {
      char VAR_9[4];
      CORE_ADDR VAR_10 = 0;

      if (VAR_5)
 {
   VAR_10 = FUNC_7 (VAR_0);
   VAR_10 = FUNC_2 (VAR_10);
   FUNC_3 (VAR_10, VAR_9);
 }

      VAR_3 = VAR_7 = FUNC_0 (&VAR_8);
      if (VAR_7 != VAR_2 && VAR_7 != VAR_1)
 FUNC_5 ("RDI_execute: %s\n", FUNC_6 (VAR_7));

      if (VAR_5)
 FUNC_4 (VAR_10, VAR_9);
    }
}
