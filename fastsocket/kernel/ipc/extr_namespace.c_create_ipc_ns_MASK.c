
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipc_namespace {int proc_inum; int count; } ;


 int VAR_0 ;
 struct ipc_namespace* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ipc_namespace*) ;
 struct ipc_namespace* FUNC_5 (int,int ) ;
 int FUNC_6 (struct ipc_namespace*) ;
 int FUNC_7 (struct ipc_namespace*) ;
 int VAR_3 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct ipc_namespace*) ;
 int FUNC_11 (struct ipc_namespace*) ;
 int FUNC_12 (struct ipc_namespace*) ;

__attribute__((used)) static struct ipc_namespace *FUNC_13(void)
{
 struct ipc_namespace *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_5(sizeof(struct ipc_namespace), VAR_1);
 if (VAR_4 == ((void*)0))
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_8(&VAR_4->proc_inum);
 if (VAR_5) {
  FUNC_4(VAR_4);
  return FUNC_0(VAR_5);
 }

 FUNC_2(&VAR_4->count, 1);
 VAR_5 = FUNC_6(VAR_4);
 if (VAR_5) {
  FUNC_9(VAR_4->proc_inum);
  FUNC_4(VAR_4);
  return FUNC_0(VAR_5);
 }
 FUNC_1(&VAR_3);

 FUNC_11(VAR_4);
 FUNC_7(VAR_4);
 FUNC_12(VAR_4);






 FUNC_3(VAR_2);
 FUNC_10(VAR_4);

 return VAR_4;
}
