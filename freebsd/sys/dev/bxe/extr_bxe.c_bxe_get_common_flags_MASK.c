
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct bxe_softc {int flags; } ;
struct bxe_fastpath {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,unsigned long*) ;

__attribute__((used)) static unsigned long
FUNC_1(struct bxe_softc *VAR_6,
                     struct bxe_fastpath *VAR_7,
                     uint8_t VAR_8)
{
    unsigned long VAR_9 = 0;


    FUNC_0(VAR_1, &VAR_9);







    FUNC_0(VAR_3, &VAR_9);
    if (VAR_8) {
        FUNC_0(VAR_5, &VAR_9);
    }





    if (VAR_6->flags & VAR_0) {
        FUNC_0(VAR_4, &VAR_9);
    }

    FUNC_0(VAR_2, &VAR_9);

    return (VAR_9);
}
