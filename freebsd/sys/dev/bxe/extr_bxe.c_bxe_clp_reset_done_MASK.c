
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct bxe_softc {int dummy; } ;
struct TYPE_2__ {int clp_mb; } ;


 int FUNC_0 (struct bxe_softc*,int ) ;
 int FUNC_1 (struct bxe_softc*,int ,int) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct bxe_softc *VAR_2,
                   uint32_t VAR_3)
{

    uint32_t VAR_4 = FUNC_0(VAR_2, VAR_1.clp_mb);
    FUNC_1(VAR_2, VAR_1.clp_mb,
              (VAR_4 & (~VAR_0)) | VAR_3);
}
