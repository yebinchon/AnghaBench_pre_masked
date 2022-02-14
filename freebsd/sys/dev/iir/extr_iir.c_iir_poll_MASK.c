
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdt_softc {int dummy; } ;
struct cam_sim {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct cam_sim*) ;
 int FUNC_2 (struct gdt_softc*) ;

__attribute__((used)) static void
FUNC_3( struct cam_sim *VAR_1 )
{
    struct gdt_softc *VAR_2;

    VAR_2 = (struct gdt_softc *)FUNC_1( VAR_1 );
    FUNC_0(VAR_0, ("iir_poll sim %p gdt %p\n", VAR_1, VAR_2));
    FUNC_2(VAR_2);
}
