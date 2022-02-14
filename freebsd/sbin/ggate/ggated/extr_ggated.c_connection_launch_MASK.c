
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ggd_connection {int c_path; } ;
typedef int pthread_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ggd_connection*) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *,int ,struct ggd_connection*) ;
 int FUNC_6 (int *,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int) ;

__attribute__((used)) static void
FUNC_8(struct ggd_connection *VAR_9)
{
 pthread_t VAR_10;
 int VAR_11, VAR_12;

 VAR_12 = FUNC_1();
 if (VAR_12 > 0)
  return;
 else if (VAR_12 == -1) {
  FUNC_2(VAR_1, "Cannot fork: %s.", FUNC_7(VAR_2));
  return;
 }
 FUNC_2(VAR_0, "Process created [%s].", VAR_9->c_path);





 VAR_11 = FUNC_6(&VAR_4, ((void*)0));
 if (VAR_11 != 0) {
  FUNC_3("pthread_mutex_init(inqueue_mtx): %s.",
      FUNC_7(VAR_11));
 }
 VAR_11 = FUNC_4(&VAR_3, ((void*)0));
 if (VAR_11 != 0) {
  FUNC_3("pthread_cond_init(inqueue_cond): %s.",
      FUNC_7(VAR_11));
 }
 VAR_11 = FUNC_6(&VAR_6, ((void*)0));
 if (VAR_11 != 0) {
  FUNC_3("pthread_mutex_init(outqueue_mtx): %s.",
      FUNC_7(VAR_11));
 }
 VAR_11 = FUNC_4(&VAR_5, ((void*)0));
 if (VAR_11 != 0) {
  FUNC_3("pthread_cond_init(outqueue_cond): %s.",
      FUNC_7(VAR_11));
 }







 VAR_11 = FUNC_5(&VAR_10, ((void*)0), VAR_8, VAR_9);
 if (VAR_11 != 0) {
  FUNC_3("pthread_create(send_thread): %s.",
      FUNC_7(VAR_11));
 }
 VAR_11 = FUNC_5(&VAR_10, ((void*)0), VAR_7, VAR_9);
 if (VAR_11 != 0) {
  FUNC_3("pthread_create(recv_thread): %s.",
      FUNC_7(VAR_11));
 }
 FUNC_0(VAR_9);
}
