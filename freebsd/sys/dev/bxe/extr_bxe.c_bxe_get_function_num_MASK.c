
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct bxe_softc {int pfunc_rel; int path_id; int pfunc_abs; } ;


 int VAR_0 ;
 int FUNC_0 (struct bxe_softc*,int ,char*,int,int,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct bxe_softc*,int ) ;

__attribute__((used)) static void
FUNC_3(struct bxe_softc *VAR_7)
{
    uint32_t VAR_8 = 0;
    VAR_8 = FUNC_2(VAR_7, VAR_0);

    VAR_7->pfunc_rel =
        (uint8_t)((VAR_8 & VAR_5) >> VAR_6);
    VAR_7->path_id =
        (uint8_t)((VAR_8 & VAR_3) >> VAR_4) & 1;

    if (FUNC_1(VAR_7) == VAR_1) {
        VAR_7->pfunc_abs = ((VAR_7->pfunc_rel << 1) | VAR_7->path_id);
    } else {
        VAR_7->pfunc_abs = (VAR_7->pfunc_rel | VAR_7->path_id);
    }

    FUNC_0(VAR_7, VAR_2,
          "Relative function %d, Absolute function %d, Path %d\n",
          VAR_7->pfunc_rel, VAR_7->pfunc_abs, VAR_7->path_id);
}
