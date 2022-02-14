
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpt_softc {int dummy; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct mpt_softc*) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0)
{
 struct mpt_softc *VAR_1;

 VAR_1 = (struct mpt_softc *)FUNC_0(VAR_0);
 if (VAR_1)
  return (FUNC_1(VAR_1));
 return(0);
}
