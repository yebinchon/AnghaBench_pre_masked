
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int uio_iovcnt; size_t uio_resid; int uio_td; int uio_segflg; int uio_rw; struct iovec* uio_iov; } ;
struct iovec {size_t iov_len; void* iov_base; } ;
struct ha_softc {int ha_disconnect; int ha_wakeup; int ha_lock; scalar_t__ ha_connected; int ha_so; } ;
typedef int ctl_ha_status ;
typedef int ctl_ha_channel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ha_softc VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,struct uio*,int *,int *,int*) ;
 int FUNC_3 (int*) ;

ctl_ha_status
FUNC_4(ctl_ha_channel VAR_8, void *VAR_9, size_t VAR_10,
  int VAR_11)
{
 struct ha_softc *VAR_12 = &VAR_7;
 struct uio VAR_13;
 struct iovec VAR_14;
 int VAR_15, VAR_16;

 if (!VAR_12->ha_connected)
  return (VAR_0);

 VAR_14.iov_base = VAR_9;
 VAR_14.iov_len = VAR_10;
 VAR_13.uio_iov = &VAR_14;
 VAR_13.uio_iovcnt = 1;
 VAR_13.uio_rw = VAR_4;
 VAR_13.uio_segflg = VAR_5;
 VAR_13.uio_td = VAR_6;
 VAR_13.uio_resid = VAR_10;
 VAR_16 = VAR_11 ? 0 : VAR_3;
 VAR_15 = FUNC_2(VAR_12->ha_so, ((void*)0), &VAR_13, ((void*)0), ((void*)0), &VAR_16);
 if (VAR_15 == 0)
  return (VAR_2);


 FUNC_0(&VAR_12->ha_lock);
 if (VAR_12->ha_connected) {
  VAR_12->ha_disconnect = 1;
  VAR_12->ha_wakeup = 1;
  FUNC_3(&VAR_12->ha_wakeup);
 }
 FUNC_1(&VAR_12->ha_lock);
 return (VAR_1);
}
