
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bxe_softc {int dummy; } ;
struct bxe_fastpath {int cl_id; int cl_qzone_id; } ;


 int VAR_0 ;
 int FUNC_0 (struct bxe_softc*) ;
 int FUNC_1 (struct bxe_softc*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static inline uint32_t
FUNC_4(struct bxe_softc *VAR_1,
                           struct bxe_fastpath *VAR_2)
{
    uint32_t VAR_3 = VAR_0;

    if (!FUNC_0(VAR_1)) {
        VAR_3 += FUNC_3(VAR_2->cl_qzone_id);
    } else {
        VAR_3 += FUNC_2(FUNC_1(VAR_1), VAR_2->cl_id);
    }

    return (VAR_3);
}
