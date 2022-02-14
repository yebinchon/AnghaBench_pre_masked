
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*,int ,char*,size_t*,int *,int ) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int
FUNC_3(pid_t VAR_5, char *VAR_6, size_t VAR_7)
{
 int VAR_8, VAR_9[4];
 size_t VAR_10;

 VAR_9[0] = VAR_0;
 VAR_9[1] = VAR_2;
 VAR_9[2] = VAR_3;
 VAR_9[3] = VAR_5;
 VAR_10 = VAR_7;
 VAR_8 = FUNC_1(VAR_9, FUNC_0(VAR_9), VAR_6, &VAR_10, ((void*)0), 0);
 if (VAR_8 != 0 && VAR_4 != VAR_1)
  FUNC_2("sysctl: kern.proc.pathname: %d", VAR_5);
 if (VAR_10 == 0)
  VAR_6[0] = '\0';
 return (VAR_8);
}
