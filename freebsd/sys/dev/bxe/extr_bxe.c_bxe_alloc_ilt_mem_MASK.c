
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_ilt {int dummy; } ;
struct bxe_softc {struct ecore_ilt* ilt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct bxe_softc *VAR_3)
{
    int VAR_4 = 0;

    if ((VAR_3->ilt =
         (struct ecore_ilt *)FUNC_0(sizeof(struct ecore_ilt),
                                    VAR_0,
                                    (VAR_1 | VAR_2))) == ((void*)0)) {
        VAR_4 = 1;
    }

    return (VAR_4);
}
