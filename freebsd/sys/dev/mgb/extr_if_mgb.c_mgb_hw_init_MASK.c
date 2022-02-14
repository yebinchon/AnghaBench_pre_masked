
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mgb_softc {int dummy; } ;


 int FUNC_0 (struct mgb_softc*) ;
 int FUNC_1 (struct mgb_softc*) ;
 int FUNC_2 (struct mgb_softc*) ;
 int FUNC_3 (struct mgb_softc*) ;

__attribute__((used)) static int
FUNC_4(struct mgb_softc *VAR_0)
{
 int VAR_1 = 0;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1 != 0)
  goto fail;

 FUNC_2(VAR_0);

 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1 != 0)
  goto fail;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 != 0)
  goto fail;

fail:
 return VAR_1;
}
