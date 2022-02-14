
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct vge_softc {scalar_t__ vge_camidx; } ;
struct sockaddr_dl {int dummy; } ;


 int FUNC_0 (struct sockaddr_dl*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct vge_softc*,int ) ;

__attribute__((used)) static u_int
FUNC_2(void *VAR_1, struct sockaddr_dl *VAR_2, u_int VAR_3)
{
 struct vge_softc *VAR_4 = VAR_1;

        if (VAR_4->vge_camidx == VAR_0)
  return (0);

 (void )FUNC_1(VAR_4, FUNC_0(VAR_2));

 return (1);
}
