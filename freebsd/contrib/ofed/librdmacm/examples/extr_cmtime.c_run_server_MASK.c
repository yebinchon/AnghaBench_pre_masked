
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct rdma_cm_id {int dummy; } ;
typedef int pthread_t ;
struct TYPE_10__ {int cond; int lock; int list; } ;
struct TYPE_9__ {int ai_port_space; } ;
struct TYPE_8__ {int ai_src_addr; } ;
struct TYPE_7__ {int cond; int lock; int list; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__ VAR_2 ;
 int VAR_3 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ,TYPE_3__*,TYPE_2__**) ;
 TYPE_3__ VAR_4 ;
 int FUNC_3 (char*) ;
 int VAR_5 ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *,int ,int *) ;
 int FUNC_8 (int *,int *) ;
 TYPE_2__* VAR_6 ;
 int FUNC_9 (struct rdma_cm_id*,int ) ;
 int FUNC_10 (int ,struct rdma_cm_id**,int *,int ) ;
 int FUNC_11 (struct rdma_cm_id*) ;
 int FUNC_12 (struct rdma_cm_id*,int ) ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_13(void)
{
 pthread_t VAR_10, VAR_11;
 struct rdma_cm_id *VAR_12;
 int VAR_13;

 FUNC_0(&VAR_8.list);
 FUNC_0(&VAR_2.list);
 VAR_13 = FUNC_8(&VAR_8.lock, ((void*)0));
 if (VAR_13) {
  FUNC_3("initializing mutex for req work");
  return VAR_13;
 }

 VAR_13 = FUNC_8(&VAR_2.lock, ((void*)0));
 if (VAR_13) {
  FUNC_3("initializing mutex for disc work");
  return VAR_13;
 }

 VAR_13 = FUNC_6(&VAR_8.cond, ((void*)0));
 if (VAR_13) {
  FUNC_3("initializing cond for req work");
  return VAR_13;
 }

 VAR_13 = FUNC_6(&VAR_2.cond, ((void*)0));
 if (VAR_13) {
  FUNC_3("initializing cond for disc work");
  return VAR_13;
 }

 VAR_13 = FUNC_7(&VAR_10, ((void*)0), VAR_7, ((void*)0));
 if (VAR_13) {
  FUNC_3("failed to create req handler thread");
  return VAR_13;
 }

 VAR_13 = FUNC_7(&VAR_11, ((void*)0), VAR_1, ((void*)0));
 if (VAR_13) {
  FUNC_3("failed to create disconnect handler thread");
  return VAR_13;
 }

 VAR_13 = FUNC_10(VAR_0, &VAR_12, ((void*)0), VAR_4.ai_port_space);
 if (VAR_13) {
  FUNC_3("listen request failed");
  return VAR_13;
 }

 VAR_13 = FUNC_2(VAR_9, VAR_3, VAR_5, &VAR_4, &VAR_6);
 if (VAR_13) {
  FUNC_4("getrdmaaddr error: %s\n", FUNC_1(VAR_13));
  goto out;
 }

 VAR_13 = FUNC_9(VAR_12, VAR_6->ai_src_addr);
 if (VAR_13) {
  FUNC_3("bind address failed");
  goto out;
 }

 VAR_13 = FUNC_12(VAR_12, 0);
 if (VAR_13) {
  FUNC_3("failure trying to listen");
  goto out;
 }

 FUNC_5(((void*)0));
 out:
 FUNC_11(VAR_12);
 return VAR_13;
}
