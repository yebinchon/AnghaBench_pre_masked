
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_addr {int dummy; } ;
struct bxe_softc {int dummy; } ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 struct reg_addr const* VAR_0 ;
 struct reg_addr const* VAR_1 ;

__attribute__((used)) static const struct reg_addr *
FUNC_2(struct bxe_softc *VAR_2)
{
    if (FUNC_0(VAR_2))
        return VAR_0;
    else if (FUNC_1(VAR_2))
        return VAR_1;
    else
        return ((void*)0);
}
