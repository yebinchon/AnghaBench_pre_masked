
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_12__ {int cfg_application_ack; } ;
struct TYPE_9__ {int data_cfg; } ;
struct TYPE_13__ {TYPE_4__ m2s_comp; TYPE_1__ m2s_rd; } ;
struct TYPE_10__ {int cfg_1; } ;
struct TYPE_11__ {TYPE_2__ axi; } ;
struct unit_regs {TYPE_5__ m2s; TYPE_3__ gen; } ;
struct al_udma {scalar_t__ rev_id; scalar_t__ type; TYPE_8__* udma_regs; } ;
struct TYPE_14__ {int cfg_application_ack; } ;
struct TYPE_15__ {TYPE_6__ s2m_comp; } ;
struct TYPE_16__ {TYPE_7__ s2m; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void FUNC_2(struct al_udma *VAR_5)
{
 uint8_t VAR_6 = VAR_5->rev_id;

 if (VAR_5->type == VAR_4) {
  struct unit_regs* VAR_7 =
   (struct unit_regs*)VAR_5->udma_regs;



  if (VAR_6 >= VAR_0) {
   FUNC_1(&VAR_7->m2s.m2s_rd.data_cfg,
         VAR_1,
         256 << VAR_2);
  }


  FUNC_0(&VAR_7->gen.axi.cfg_1, 1000000);

  FUNC_0(&VAR_7->m2s.m2s_comp.cfg_application_ack
     , 0);
 }
 if (VAR_5->type == VAR_3) {
  FUNC_0(
   &VAR_5->udma_regs->s2m.s2m_comp.cfg_application_ack, 0);


 }
}
