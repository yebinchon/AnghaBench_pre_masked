
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int machname ;
typedef int gid_t ;
typedef int AUTH ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int * FUNC_1 (char*,int ,int ,int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (long,int *) ;
 int FUNC_6 (char*,int) ;
 int * FUNC_7 (int) ;
 int FUNC_8 (int ) ;

AUTH *
FUNC_9(void)
{
 AUTH *VAR_3;
 int VAR_4;
 long VAR_5;
 char VAR_6[VAR_0 + 1];
 uid_t VAR_7;
 gid_t VAR_8;
 gid_t *VAR_9;

 VAR_5 = FUNC_8(VAR_2) + 1;
 VAR_9 = FUNC_7(sizeof(gid_t) * VAR_5);
 if (VAR_9 == ((void*)0))
  return (((void*)0));

 if (FUNC_6(VAR_6, sizeof VAR_6) == -1)
  FUNC_0();
 VAR_6[sizeof(VAR_6) - 1] = 0;
 VAR_7 = FUNC_4();
 VAR_8 = FUNC_3();
 if ((VAR_4 = FUNC_5(VAR_5, VAR_9)) < 0)
  FUNC_0();
 if (VAR_4 > VAR_1)
  VAR_4 = VAR_1;

 VAR_3 = FUNC_1(VAR_6, VAR_7, VAR_8, VAR_4, VAR_9);
 FUNC_2(VAR_9);
 return (VAR_3);
}
