
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct pvscsi_softc {struct pvscsi_hcb* hcbs; } ;
struct pvscsi_hcb {int dummy; } ;



__attribute__((used)) static inline uint64_t FUNC_0(struct pvscsi_softc *VAR_0,
    struct pvscsi_hcb *VAR_1)
{


 return (VAR_1 - VAR_0->hcbs + 1);
}
