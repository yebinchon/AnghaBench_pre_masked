
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iic_cdevpriv {int lock; scalar_t__ started; TYPE_1__* sc; } ;
typedef int device_t ;
struct TYPE_2__ {int sc_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iic_cdevpriv*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(void *VAR_2)
{
 device_t VAR_3, VAR_4;
 struct iic_cdevpriv *VAR_5;

 VAR_5 = VAR_2;
 FUNC_0(VAR_5 != ((void*)0), ("iic cdevpriv should not be NULL!"));

 VAR_3 = VAR_5->sc->sc_dev;
 VAR_4 = FUNC_1(VAR_3);

 if (VAR_5->started) {
  FUNC_5(VAR_4);
  FUNC_4(VAR_4, VAR_0, 0, ((void*)0));
  FUNC_3(VAR_4, VAR_3);
 }

 FUNC_6(&VAR_5->lock);
 FUNC_2(VAR_5, VAR_1);
}
