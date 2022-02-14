
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct uio {scalar_t__ uio_rw; } ;
struct iic_cdevpriv {int addr; TYPE_1__* sc; scalar_t__ started; } ;
struct cdev {int dummy; } ;
typedef int device_t ;
struct TYPE_2__ {int sc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iic_cdevpriv*) ;
 int FUNC_1 (struct iic_cdevpriv*) ;
 int VAR_4 ;
 int FUNC_2 (int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (void**) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct iic_cdevpriv*,struct uio*,int ) ;

__attribute__((used)) static int
FUNC_10(struct cdev *VAR_8, struct uio *VAR_9, int VAR_10)
{
 device_t VAR_11;
 struct iic_cdevpriv *VAR_12;
 int VAR_13;
 uint8_t VAR_14;

 VAR_12 = ((void*)0);
 VAR_13 = FUNC_3((void**)&VAR_12);

 if (VAR_13 != 0)
  return (VAR_13);
 FUNC_2(VAR_12 != ((void*)0), ("iic cdevpriv should not be NULL!"));

 FUNC_0(VAR_12);
 if (VAR_12->started || (VAR_12->addr == 0)) {
  FUNC_1(VAR_12);
  return (VAR_0);
 }
 VAR_11 = FUNC_4(VAR_12->sc->sc_dev);

 VAR_13 = FUNC_6(VAR_11, VAR_12->sc->sc_dev,
     (VAR_10 & VAR_6) ? VAR_1 : (VAR_4 | VAR_2));
 if (VAR_13 != 0) {
  FUNC_1(VAR_12);
  return (VAR_13);
 }

 if (VAR_9->uio_rw == VAR_7)
  VAR_14 = VAR_12->addr | VAR_5;
 else
  VAR_14 = VAR_12->addr & ~VAR_5;

 VAR_13 = FUNC_7(VAR_11, VAR_14, 0);
 if (VAR_13 != 0)
 {
  FUNC_5(VAR_11, VAR_12->sc->sc_dev);
  FUNC_1(VAR_12);
  return (VAR_13);
 }

 VAR_13 = FUNC_9(VAR_12, VAR_9, VAR_3);

 FUNC_8(VAR_11);
 FUNC_5(VAR_11, VAR_12->sc->sc_dev);
 FUNC_1(VAR_12);
 return (VAR_13);
}
