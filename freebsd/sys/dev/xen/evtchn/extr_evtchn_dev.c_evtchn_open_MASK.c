
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct per_user_data {struct per_user_data* ring; int ring_cons_mutex; int ring_prod_mutex; int bind_mutex; int evtchns; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct per_user_data*,int ) ;
 int VAR_5 ;
 int FUNC_2 (struct per_user_data*,int ) ;
 void* FUNC_3 (int,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;

__attribute__((used)) static int
FUNC_8(struct cdev *VAR_6, int VAR_7, int VAR_8, struct thread *VAR_9)
{
 struct per_user_data *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_3(sizeof(*VAR_10), VAR_1, VAR_2 | VAR_3);
 VAR_10->ring = FUNC_3(VAR_4, VAR_1, VAR_2 | VAR_3);


 FUNC_5(&VAR_10->bind_mutex, "evtchn_bind_mutex", ((void*)0), VAR_0);
 FUNC_7(&VAR_10->ring_cons_mutex, "evtchn_ringc_sx");
 FUNC_5(&VAR_10->ring_prod_mutex, "evtchn_ringp_mutex", ((void*)0), VAR_0);


 FUNC_0(&VAR_10->evtchns);


 VAR_11 = FUNC_1(VAR_10, VAR_5);
 if (VAR_11 != 0) {
  FUNC_4(&VAR_10->bind_mutex);
  FUNC_4(&VAR_10->ring_prod_mutex);
  FUNC_6(&VAR_10->ring_cons_mutex);
  FUNC_2(VAR_10->ring, VAR_1);
  FUNC_2(VAR_10, VAR_1);
 }

 return (VAR_11);
}
