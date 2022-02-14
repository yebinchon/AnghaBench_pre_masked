
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*) ;
 scalar_t__ FUNC_3 (int,int ,int *,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_3 ;
 int * FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(int VAR_4)
{
 if (VAR_2 != ((void*)0))
  return;
 VAR_2 = FUNC_7(FUNC_0(VAR_1));
 if (VAR_2 == ((void*)0))
  FUNC_2(1, "no space for channel list");
 if (FUNC_3(VAR_4, VAR_0, VAR_2,
     FUNC_0(VAR_1)) < 0)
  FUNC_1(1, "unable to get channel information");
 VAR_3 = FUNC_6(VAR_4);
 FUNC_4(VAR_4);
 FUNC_5(VAR_4);
}
