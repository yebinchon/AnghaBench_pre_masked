
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int td_thread_t ;
typedef int name ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (int *,char*,int) ;

__attribute__((used)) static int
FUNC_3(td_thread_t *VAR_2, void *VAR_3)
{
 int *VAR_4 = (int *)VAR_3;
 char VAR_5[VAR_0];

 FUNC_0(FUNC_2(VAR_2, VAR_5, sizeof(VAR_5)) == VAR_1);

 FUNC_1("Thread name: %s\n", VAR_5);

 ++(*VAR_4);

 return VAR_1;
}
