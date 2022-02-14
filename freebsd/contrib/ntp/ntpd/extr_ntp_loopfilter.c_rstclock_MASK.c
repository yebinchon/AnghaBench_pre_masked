
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 double VAR_2 ;
 scalar_t__ VAR_3 ;
 double VAR_4 ;
 int FUNC_1 (int,int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_2(
 int VAR_8,
 double VAR_9
 )
{
 FUNC_0(2, ("rstclock: mu %lu state %d poll %d count %d\n",
      VAR_3 - VAR_1, VAR_8, VAR_6,
      VAR_7));
 if (VAR_8 != VAR_5 && VAR_8 != VAR_0)
  FUNC_1(VAR_8, ((void*)0), ((void*)0));
 VAR_5 = VAR_8;
 VAR_4 = VAR_2 = VAR_9;
 VAR_1 = VAR_3;
}
