
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_evtchn {int enabled; int port; } ;
struct uio {int uio_resid; } ;
struct per_user_data {int bind_mutex; } ;
struct cdev {int dummy; } ;
typedef int evtchn_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void**) ;
 int FUNC_1 (int ) ;
 struct user_evtchn* FUNC_2 (struct per_user_data*,int ) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int,struct uio*) ;

__attribute__((used)) static int
FUNC_8(struct cdev *VAR_4, struct uio *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 evtchn_port_t *VAR_10;
 struct per_user_data *VAR_11;

 VAR_7 = FUNC_0((void **)&VAR_11);
 if (VAR_7 != 0)
  return (VAR_0);

 VAR_10 = FUNC_4(VAR_3, VAR_1, VAR_2);

 VAR_9 = VAR_5->uio_resid;

 VAR_9 &= ~(sizeof(evtchn_port_t)-1);

 VAR_7 = 0;
 if (VAR_9 == 0)
  goto out;

 if (VAR_9 > VAR_3)
  VAR_9 = VAR_3;

 VAR_7 = FUNC_7(VAR_10, VAR_9, VAR_5);
 if (VAR_7 != 0)
  goto out;

 FUNC_5(&VAR_11->bind_mutex);

 for (VAR_8 = 0; VAR_8 < (VAR_9/sizeof(evtchn_port_t)); VAR_8++) {
  evtchn_port_t VAR_12 = VAR_10[VAR_8];
  struct user_evtchn *VAR_13;

  VAR_13 = FUNC_2(VAR_11, VAR_12);
  if (VAR_13 && !VAR_13->enabled) {
   VAR_13->enabled = 1;
   FUNC_1(VAR_13->port);
  }
 }

 FUNC_6(&VAR_11->bind_mutex);
 VAR_7 = 0;

out:
 FUNC_3(VAR_10, VAR_1);
 return (VAR_7);
}
