
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio {int uio_resid; scalar_t__ uio_rw; } ;
struct iic_cdevpriv {TYPE_1__* sc; } ;
typedef int device_t ;
typedef int buffer ;
struct TYPE_2__ {int sc_dev; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,int*,int,int ) ;
 int FUNC_3 (int ,char*,int,int*,int ) ;
 int FUNC_4 (char*,int,struct uio*) ;

__attribute__((used)) static int
FUNC_5(struct iic_cdevpriv *VAR_2, struct uio *VAR_3, int VAR_4)
{
 device_t VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9;
 char VAR_10[128];

 VAR_5 = FUNC_1(VAR_2->sc->sc_dev);
 VAR_6 = 0;





 while ((VAR_6 == 0) && (VAR_3->uio_resid > 0)) {

  VAR_7 = FUNC_0(VAR_3->uio_resid, sizeof(VAR_10));
  VAR_8 = 0;

  if (VAR_3->uio_rw == VAR_1) {
   VAR_6 = FUNC_4(VAR_10, VAR_7, VAR_3);

   while ((VAR_6 == 0) && (VAR_8 < VAR_7)) {
    VAR_9 = 0;
    VAR_6 = FUNC_3(VAR_5, &VAR_10[VAR_8],
        VAR_7 - VAR_8, &VAR_9, 0);
    VAR_8 += VAR_9;
   }

  } else if (VAR_3->uio_rw == VAR_0) {
   VAR_6 = FUNC_2(VAR_5, VAR_10,
       VAR_7, &VAR_8,
       ((VAR_3->uio_resid <= sizeof(VAR_10)) ? VAR_4 : 0), 0);
   if (VAR_6 == 0)
    VAR_6 = FUNC_4(VAR_10, VAR_8, VAR_3);
  }
 }

 return (VAR_6);
}
