
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct opcic_softc {scalar_t__ sc_base_addr; scalar_t__ sc_flags; } ;
struct cvmx_bootmem_named_block_desc {scalar_t__ base_addr; } ;
struct consdev {int cn_pri; int cn_name; struct opcic_softc* cn_arg; } ;
struct TYPE_2__ {int board_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct cvmx_bootmem_named_block_desc* FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 () ;
 struct opcic_softc VAR_7 ;
 int FUNC_2 (int ,int,char*,struct opcic_softc*) ;

__attribute__((used)) static void
FUNC_3(struct consdev *VAR_8)
{
 const struct cvmx_bootmem_named_block_desc *VAR_9;
 struct opcic_softc *VAR_10;

 VAR_10 = &VAR_7;
 VAR_10->sc_flags = 0;
 VAR_10->sc_base_addr = 0;

 VAR_8->cn_pri = VAR_0;

 switch (FUNC_1()->board_type) {
 default:
  VAR_9 =
      FUNC_0(VAR_3);
  if (VAR_9 == ((void*)0))
   return;
  VAR_10->sc_base_addr = VAR_9->base_addr;
  break;
 }

 VAR_8->cn_arg = VAR_10;
 FUNC_2(VAR_8->cn_name, sizeof VAR_8->cn_name, "opcic@%p", VAR_8->cn_arg);
 VAR_8->cn_pri = (VAR_6 & VAR_5) ? VAR_2 : VAR_1;
}
