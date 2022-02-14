
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u_long ;
struct uio {int uio_iovcnt; int uio_rw; int uio_offset; int uio_resid; struct thread* uio_td; void* uio_segflg; struct iovec* uio_iov; } ;
struct thread {int dummy; } ;
struct iovec {int iov_len; int iov_base; } ;
struct iiccmd {int slave; int last; int count; int buf; } ;
struct iic_rdwr_data {int dummy; } ;
struct iic_cdevpriv {int started; int addr; TYPE_1__* sc; } ;
struct cdev {int dummy; } ;
typedef int device_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {int sc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct iic_cdevpriv*) ;
 int VAR_5 ;
 int FUNC_1 (struct iic_cdevpriv*) ;
 int VAR_6 ;
 int FUNC_2 (int ,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (void**) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ,int ,int *) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct iic_cdevpriv*,struct iic_rdwr_data*,int) ;
 int FUNC_12 (struct iic_cdevpriv*,struct uio*,int ) ;

__attribute__((used)) static int
FUNC_13(struct cdev *VAR_11, u_long VAR_12, caddr_t VAR_13, int VAR_14, struct thread *VAR_15)
{
 device_t VAR_16, VAR_17;
 struct iiccmd *VAR_18;
 struct uio VAR_19;
 struct iovec VAR_20;
 struct iic_cdevpriv *VAR_21;
 int VAR_22;

 VAR_18 = (struct iiccmd *)VAR_13;
 VAR_22 = FUNC_3((void**)&VAR_21);
 if (VAR_22 != 0)
  return (VAR_22);

 FUNC_2(VAR_21 != ((void*)0), ("iic cdevpriv should not be NULL!"));

 VAR_17 = VAR_21->sc->sc_dev;
 VAR_16 = FUNC_4(VAR_17);
 FUNC_0(VAR_21);


 switch (VAR_12) {
 case 130:
  if (VAR_21->started) {
   VAR_22 = VAR_0;
   break;
  }
  VAR_22 = FUNC_7(VAR_16, VAR_17,
      (VAR_14 & VAR_7) ? VAR_2 : (VAR_6 | VAR_4));

  if (VAR_22 == 0)
   VAR_22 = FUNC_9(VAR_16, VAR_18->slave, 0);

  if (VAR_22 == 0) {
   VAR_21->addr = VAR_18->slave;
   VAR_21->started = 1;
  } else
   FUNC_5(VAR_16, VAR_17);

  break;

 case 129:
  if (VAR_21->started) {
   VAR_22 = FUNC_10(VAR_16);
   FUNC_5(VAR_16, VAR_17);
   VAR_21->started = 0;
  }

  break;

 case 132:





  if (!VAR_21->started)
   VAR_22 = FUNC_7(VAR_16, VAR_17,
       (VAR_14 & VAR_7) ? VAR_2 : (VAR_6 | VAR_4));

  if (VAR_22 == 0) {
   VAR_22 = FUNC_8(VAR_16, VAR_5, 0, ((void*)0));




   if (VAR_22 == VAR_3)
    VAR_22 = 0;

   FUNC_5(VAR_16, VAR_17);
   VAR_21->started = 0;
  }
  break;

 case 128:
  if (!VAR_21->started) {
   VAR_22 = VAR_0;
   break;
  }
  VAR_20.iov_base = VAR_18->buf;
  VAR_20.iov_len = VAR_18->count;
  VAR_19.uio_iov = &VAR_20;
  VAR_19.uio_iovcnt = 1;
  VAR_19.uio_segflg = VAR_9;
  VAR_19.uio_td = VAR_15;
  VAR_19.uio_resid = VAR_18->count;
  VAR_19.uio_offset = 0;
  VAR_19.uio_rw = VAR_10;
  VAR_22 = FUNC_12(VAR_21, &VAR_19, 0);
  break;

 case 134:
  if (!VAR_21->started) {
   VAR_22 = VAR_0;
   break;
  }
  VAR_20.iov_base = VAR_18->buf;
  VAR_20.iov_len = VAR_18->count;
  VAR_19.uio_iov = &VAR_20;
  VAR_19.uio_iovcnt = 1;
  VAR_19.uio_segflg = VAR_9;
  VAR_19.uio_td = VAR_15;
  VAR_19.uio_resid = VAR_18->count;
  VAR_19.uio_offset = 0;
  VAR_19.uio_rw = VAR_8;
  VAR_22 = FUNC_12(VAR_21, &VAR_19, VAR_18->last);
  break;

 case 135:




  if (VAR_21->started) {
   VAR_22 = VAR_0;
   break;
  }

  VAR_22 = FUNC_11(VAR_21, (struct iic_rdwr_data *)VAR_13, VAR_14);

  break;

 case 133:
  if (!VAR_21->started) {
   VAR_22 = VAR_0;
   break;
  }
  VAR_22 = FUNC_6(VAR_16, VAR_18->slave, 0);
  break;

 case 131:
  VAR_21->addr = *((uint8_t*)VAR_13);
  break;

 default:
  VAR_22 = VAR_1;
 }

 FUNC_1(VAR_21);
 return (VAR_22);
}
