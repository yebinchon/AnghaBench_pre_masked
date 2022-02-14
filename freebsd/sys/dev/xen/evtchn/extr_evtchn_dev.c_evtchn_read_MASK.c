
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int uio_resid; } ;
struct per_user_data {unsigned int ring_cons; unsigned int ring_prod; int ring_cons_mutex; int * ring; scalar_t__ ring_overflow; } ;
struct cdev {int dummy; } ;
typedef int evtchn_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (unsigned int) ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (void**) ;
 int FUNC_2 () ;
 int FUNC_3 (struct per_user_data*,int *,int ,char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,unsigned int,struct uio*) ;

__attribute__((used)) static int
FUNC_7(struct cdev *VAR_8, struct uio *VAR_9, int VAR_10)
{
 int VAR_11, VAR_12;
 unsigned int VAR_13, VAR_14, VAR_15 = 0, VAR_16 = 0;
 struct per_user_data *VAR_17;

 VAR_11 = FUNC_1((void **)&VAR_17);
 if (VAR_11 != 0)
  return (VAR_2);


 VAR_12 = VAR_9->uio_resid;
 VAR_12 &= ~(sizeof(evtchn_port_t)-1);

 if (VAR_12 == 0)
  return (0);

 if (VAR_12 > VAR_6)
  VAR_12 = VAR_6;

 FUNC_4(&VAR_17->ring_cons_mutex);
 for (;;) {
  VAR_11 = VAR_1;
  if (VAR_17->ring_overflow)
   goto unlock_out;

  VAR_13 = VAR_17->ring_cons;
  VAR_14 = VAR_17->ring_prod;
  if (VAR_13 != VAR_14)
   break;

  if (VAR_10 & VAR_5) {
   FUNC_5(&VAR_17->ring_cons_mutex);
   return (VAR_4);
  }

  VAR_11 = FUNC_3(VAR_17, &VAR_17->ring_cons_mutex, VAR_7, "evtchw", 0);
  if ((VAR_11 != 0) && (VAR_11 != VAR_4))
   return (VAR_11);
 }


 if (((VAR_13 ^ VAR_14) & VAR_3) != 0) {
  VAR_15 = (VAR_3 - FUNC_0(VAR_13)) *
      sizeof(evtchn_port_t);
  VAR_16 = FUNC_0(VAR_14) * sizeof(evtchn_port_t);
 } else {
  VAR_15 = (VAR_14 - VAR_13) * sizeof(evtchn_port_t);
  VAR_16 = 0;
 }


 if (VAR_15 > VAR_12) {
  VAR_15 = VAR_12;
  VAR_16 = 0;
 } else if ((VAR_15 + VAR_16) > VAR_12) {
  VAR_16 = VAR_12 - VAR_15;
 }

 VAR_11 = VAR_0;
 FUNC_2();

 if (FUNC_6(&VAR_17->ring[FUNC_0(VAR_13)], VAR_15, VAR_9) ||
     ((VAR_16 != 0) && FUNC_6(&VAR_17->ring[0], VAR_16, VAR_9)))
  goto unlock_out;

 VAR_17->ring_cons += (VAR_15 + VAR_16) / sizeof(evtchn_port_t);
 VAR_11 = 0;

unlock_out:
 FUNC_5(&VAR_17->ring_cons_mutex);
 return (VAR_11);
}
