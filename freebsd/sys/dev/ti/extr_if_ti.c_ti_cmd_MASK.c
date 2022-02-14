
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ti_softc {int ti_cmd_saved_prodidx; } ;
struct ti_cmd_desc {int dummy; } ;


 int FUNC_0 (struct ti_softc*,scalar_t__,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_2(struct ti_softc *VAR_3, struct ti_cmd_desc *VAR_4)
{
 int VAR_5;

 VAR_5 = VAR_3->ti_cmd_saved_prodidx;
 FUNC_0(VAR_3, VAR_1 + (VAR_5 * 4), *(uint32_t *)(VAR_4));
 FUNC_1(VAR_5, VAR_0);
 FUNC_0(VAR_3, VAR_2, VAR_5);
 VAR_3->ti_cmd_saved_prodidx = VAR_5;
}
