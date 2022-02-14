
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtrnd_softc {int dummy; } ;


 struct vtrnd_softc* VAR_0 ;
 int FUNC_0 (struct vtrnd_softc*,void*,size_t*) ;

__attribute__((used)) static unsigned
FUNC_1(void *VAR_1, unsigned VAR_2)
{
 struct vtrnd_softc *VAR_3;
 size_t VAR_4;
 int VAR_5;

 VAR_3 = VAR_0;
 if (VAR_3 == ((void*)0))
  return (0);

 VAR_4 = VAR_2;
 VAR_5 = FUNC_0(VAR_3, VAR_1, &VAR_4);
 if (VAR_5 != 0)
  return (0);

 return (VAR_4);
}
