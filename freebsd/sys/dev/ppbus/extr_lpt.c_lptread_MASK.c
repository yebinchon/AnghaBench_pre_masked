
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {scalar_t__ uio_resid; } ;
struct lpt_data {int sc_flags; int sc_statbuf; int sc_dev; } ;
struct cdev {struct lpt_data* si_drv1; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int,struct uio*) ;

__attribute__((used)) static int
FUNC_8(struct cdev *VAR_4, struct uio *VAR_5, int VAR_6)
{
 struct lpt_data *VAR_7 = VAR_4->si_drv1;
 device_t VAR_8 = VAR_7->sc_dev;
 device_t VAR_9 = FUNC_0(VAR_8);
 int VAR_10 = 0, VAR_11;

 if (VAR_7->sc_flags & VAR_2) {

  return (VAR_1);
 }

 FUNC_5(VAR_9);
 if ((VAR_10 = FUNC_2(VAR_9, VAR_3, 0))) {
  FUNC_6(VAR_9);
  return (VAR_10);
 }


 VAR_11 = 0;
 while (VAR_5->uio_resid) {
  if ((VAR_10 = FUNC_3(VAR_9, VAR_3,
    VAR_7->sc_statbuf, FUNC_1(VAR_0,
    VAR_5->uio_resid), &VAR_11))) {
   goto error;
  }

  if (!VAR_11)
   goto error;

  FUNC_6(VAR_9);
  VAR_10 = FUNC_7(VAR_7->sc_statbuf, VAR_11, VAR_5);
  FUNC_5(VAR_9);
  if (VAR_10)
   goto error;
 }

error:
 FUNC_4(VAR_9);
 FUNC_6(VAR_9);
 return (VAR_10);
}
