
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct per_user_data {scalar_t__ ring_cons; scalar_t__ ring_prod; int ring_prod_mutex; int ev_rsel; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct thread*,int *) ;

__attribute__((used)) static int
FUNC_4(struct cdev *VAR_5, int VAR_6, struct thread *VAR_7)
{
 struct per_user_data *VAR_8;
 int VAR_9, VAR_10;

 VAR_9 = FUNC_0((void **)&VAR_8);
 if (VAR_9 != 0)
  return (VAR_0);


 VAR_10 = VAR_6 & (VAR_2 | VAR_4);

 FUNC_1(&VAR_8->ring_prod_mutex);
 if (VAR_6 & (VAR_1 | VAR_3)) {
  if (VAR_8->ring_cons != VAR_8->ring_prod) {
   VAR_10 |= VAR_6 & (VAR_1 | VAR_3);
  } else {

   FUNC_3(VAR_7, &VAR_8->ev_rsel);
  }
 }
 FUNC_2(&VAR_8->ring_prod_mutex);

 return (VAR_10);
}
