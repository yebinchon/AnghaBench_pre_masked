
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aoagpio_softc {int level; int detect_active; scalar_t__ i2s; } ;
typedef void* device_t ;


 int VAR_0 ;
 struct aoagpio_softc* FUNC_0 (void*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1)
{
 device_t VAR_2 = VAR_1;
 struct aoagpio_softc *VAR_3;

 VAR_3 = FUNC_0(VAR_2);

 if (FUNC_2(VAR_2) & VAR_0)
  VAR_3->level = VAR_3->detect_active;
 else
  VAR_3->level = !(VAR_3->detect_active);

 if (VAR_3->i2s)
  FUNC_1(VAR_3->i2s);
}
