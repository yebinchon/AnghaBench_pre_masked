
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t_Handle ;
struct fman_softc {int muram_handle; } ;
typedef int device_t ;


 struct fman_softc* FUNC_0 (int ) ;

int
FUNC_1(device_t VAR_0, t_Handle *VAR_1)
{
 struct fman_softc *VAR_2 = FUNC_0(VAR_0);

 *VAR_1 = VAR_2->muram_handle;

 return (0);
}
