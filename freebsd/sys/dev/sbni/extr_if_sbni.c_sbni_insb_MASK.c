
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct sbni_softc {scalar_t__ io_off; int io_res; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__,int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static __inline void
FUNC_3(struct sbni_softc *VAR_1, u_char *VAR_2, u_int VAR_3)
{
 FUNC_0(
     FUNC_2(VAR_1->io_res),
     FUNC_1(VAR_1->io_res),
     VAR_1->io_off + VAR_0, VAR_2, VAR_3);
}
