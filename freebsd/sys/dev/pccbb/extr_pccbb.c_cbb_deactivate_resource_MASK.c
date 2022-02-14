
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct cbb_softc {int flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int,struct resource*) ;
 int FUNC_1 (int ,int ,int,int,struct resource*) ;
 struct cbb_softc* FUNC_2 (int ) ;

int
FUNC_3(device_t VAR_1, device_t VAR_2, int VAR_3,
    int VAR_4, struct resource *VAR_5)
{
 struct cbb_softc *VAR_6 = FUNC_2(VAR_1);

 if (VAR_6->flags & VAR_0)
  return (FUNC_1(VAR_1, VAR_2, VAR_3,
      VAR_4, VAR_5));
 else
  return (FUNC_0(VAR_1, VAR_2, VAR_3,
      VAR_4, VAR_5));
}
