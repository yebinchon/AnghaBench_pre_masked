
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ilt_line {int dummy; } ;
struct bxe_softc {TYPE_1__* ilt; } ;
struct TYPE_2__ {struct ilt_line* lines; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct bxe_softc *VAR_4)
{
    int VAR_5 = 0;

    if ((VAR_4->ilt->lines =
         (struct ilt_line *)FUNC_0((sizeof(struct ilt_line) * VAR_0),
                                    VAR_1,
                                    (VAR_2 | VAR_3))) == ((void*)0)) {
        VAR_5 = 1;
    }

    return (VAR_5);
}
