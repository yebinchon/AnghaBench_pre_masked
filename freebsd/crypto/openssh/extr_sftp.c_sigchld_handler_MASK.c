
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int *,int ) ;
 int FUNC_1 (int ,char const*,int) ;

__attribute__((used)) static void
FUNC_2(int VAR_5)
{
 int VAR_6 = VAR_3;
 pid_t VAR_7;
 const char VAR_8[] = "\rConnection closed.  \n";


 while ((VAR_7 = FUNC_0(VAR_4, ((void*)0), VAR_2)) == -1 && VAR_3 == VAR_0)
  continue;
 if (VAR_7 == VAR_4) {
  (void)FUNC_1(VAR_1, VAR_8, sizeof(VAR_8) - 1);
  VAR_4 = -1;
 }

 VAR_3 = VAR_6;
}
