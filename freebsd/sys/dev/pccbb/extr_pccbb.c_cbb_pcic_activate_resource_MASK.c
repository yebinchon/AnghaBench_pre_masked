
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct cbb_softc {int * exca; } ;
typedef int device_t ;


 int FUNC_0 (int ,int) ;
 struct cbb_softc* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int,int,struct resource*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0, device_t VAR_1, int VAR_2, int VAR_3,
    struct resource *VAR_4)
{
 struct cbb_softc *VAR_5 = FUNC_1(VAR_0);
 int VAR_6;

 VAR_6 = FUNC_2(&VAR_5->exca[0], VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_6 == 0)
  FUNC_0(VAR_0, VAR_2);
 return (VAR_6);
}
