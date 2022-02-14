
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
 int FUNC_1 (int*,int ,int*,size_t*,int *,int ) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int
FUNC_3(pid_t VAR_5, int *VAR_6)
{
 int VAR_7, VAR_8[4];
 size_t VAR_9;

 VAR_8[0] = VAR_0;
 VAR_8[1] = VAR_2;
 VAR_8[2] = VAR_3;
 VAR_8[3] = VAR_5;
 VAR_9 = sizeof(*VAR_6);
 VAR_7 = FUNC_1(VAR_8, FUNC_0(VAR_8), VAR_6, &VAR_9, ((void*)0), 0);
 if (VAR_7 != 0 && VAR_4 != VAR_1)
  FUNC_2("sysctl: kern.proc.osrel: %d", VAR_5);
 return (VAR_7);
}
