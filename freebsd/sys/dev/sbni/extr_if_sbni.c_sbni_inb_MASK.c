
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sbni_softc {int io_off; int io_res; } ;
typedef enum sbni_reg { ____Placeholder_sbni_reg } sbni_reg ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static __inline u_char
FUNC_3(struct sbni_softc *VAR_0, enum sbni_reg VAR_1)
{
 return FUNC_0(
     FUNC_2(VAR_0->io_res),
     FUNC_1(VAR_0->io_res),
     VAR_0->io_off + VAR_1);
}
