
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rping_cb {scalar_t__ state; int persistent_server_thread; int sem; } ;
typedef int pthread_attr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct rping_cb* FUNC_0 (struct rping_cb*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int *,int ,struct rping_cb*) ;
 int FUNC_6 (struct rping_cb*) ;
 int VAR_2 ;
 int FUNC_7 (int *) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_8(struct rping_cb *VAR_4)
{
 int VAR_5;
 struct rping_cb *VAR_6;
 pthread_attr_t VAR_7;

 VAR_5 = FUNC_6(VAR_4);
 if (VAR_5)
  return VAR_5;





 VAR_5 = FUNC_3(&VAR_7);
 if (VAR_5) {
  FUNC_2("pthread_attr_init");
  return VAR_5;
 }
 VAR_5 = FUNC_4(&VAR_7, VAR_1);
 if (VAR_5) {
  FUNC_2("pthread_attr_setdetachstate");
  return VAR_5;
 }

 while (1) {
  FUNC_7(&VAR_4->sem);
  if (VAR_4->state != VAR_0) {
   FUNC_1(VAR_3, "wait for CONNECT_REQUEST state %ld\n",
    VAR_4->state);
   return -1;
  }

  VAR_6 = FUNC_0(VAR_4);
  if (!VAR_6)
   return -1;

  VAR_5 = FUNC_5(&VAR_6->persistent_server_thread, &VAR_7, VAR_2, VAR_6);
  if (VAR_5) {
   FUNC_2("pthread_create");
   return VAR_5;
  }
 }
 return 0;
}
