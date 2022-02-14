
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_memattr_t ;
struct ntb_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 struct ntb_softc* FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (struct ntb_softc*,unsigned int,int ) ;
 unsigned int FUNC_3 (struct ntb_softc*,unsigned int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1, unsigned VAR_2, vm_memattr_t VAR_3)
{
 struct ntb_softc *VAR_4 = FUNC_0(VAR_1);

 if (VAR_2 >= FUNC_1(VAR_1))
  return (VAR_0);

 VAR_2 = FUNC_3(VAR_4, VAR_2);
 return (FUNC_2(VAR_4, VAR_2, VAR_3));
}
