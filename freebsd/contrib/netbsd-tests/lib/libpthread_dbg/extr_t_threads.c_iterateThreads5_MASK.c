
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int td_thread_t ;
typedef int name ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *,char*,int) ;

__attribute__((used)) static int
FUNC_4(td_thread_t *VAR_1, void *VAR_2)
{
 int *VAR_3 = (int *)VAR_2;

 char VAR_4[3];

 FUNC_0(FUNC_3(VAR_1, VAR_4, sizeof(VAR_4)) == VAR_0);

 FUNC_1("Thread name: %s\n", VAR_4);


 FUNC_0(FUNC_2(VAR_4) < sizeof(VAR_4));

 ++(*VAR_3);

 return VAR_0;
}
