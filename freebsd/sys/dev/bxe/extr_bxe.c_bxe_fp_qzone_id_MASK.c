
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct bxe_fastpath {scalar_t__ cl_id; int sc; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline uint8_t
FUNC_2(struct bxe_fastpath *VAR_1)
{
    if (FUNC_0(VAR_1->sc)) {
        return (VAR_1->cl_id + FUNC_1(VAR_1->sc) * VAR_0);
    } else {
        return (VAR_1->cl_id);
    }
}
