
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kinfo_proc2 {int dummy; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*,int ,struct kinfo_proc2*,size_t*,int *,int ) ;

__attribute__((used)) static int
FUNC_2(pid_t VAR_3, struct kinfo_proc2 *VAR_4)
{
 int VAR_5[6];
 size_t VAR_6 = sizeof(*VAR_4);

 VAR_5[0] = VAR_0;
 VAR_5[1] = VAR_1;
 VAR_5[2] = VAR_2;
 VAR_5[3] = VAR_3;
 VAR_5[4] = VAR_6;
 VAR_5[5] = 1;

 return FUNC_1(VAR_5, FUNC_0(VAR_5), VAR_4, &VAR_6, ((void*)0), 0);
}
