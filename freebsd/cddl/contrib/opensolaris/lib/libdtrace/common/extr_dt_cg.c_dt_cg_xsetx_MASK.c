
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint_t ;
typedef int uint64_t ;
struct TYPE_7__ {TYPE_1__* dl_last; } ;
typedef TYPE_2__ dt_irlist_t ;
typedef int dt_ident_t ;
typedef int dif_instr_t ;
struct TYPE_8__ {int pcb_jmpbuf; int pcb_inttab; } ;
struct TYPE_6__ {int * di_extern; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int ,int ) ;
 TYPE_3__* VAR_5 ;

__attribute__((used)) static void
FUNC_5(dt_irlist_t *VAR_6, dt_ident_t *VAR_7, uint_t VAR_8, int VAR_9, uint64_t VAR_10)
{
 int VAR_11 = VAR_7 != ((void*)0) ? VAR_1 : VAR_2;
 int VAR_12 = FUNC_2(VAR_5->pcb_inttab, VAR_10, VAR_11);
 dif_instr_t VAR_13 = FUNC_0((uint_t)VAR_12, VAR_9);

 if (VAR_12 == -1)
  FUNC_4(VAR_5->pcb_jmpbuf, VAR_4);

 if (VAR_12 > VAR_0)
  FUNC_4(VAR_5->pcb_jmpbuf, VAR_3);

 FUNC_3(VAR_6, FUNC_1(VAR_8, VAR_13));

 if (VAR_7 != ((void*)0))
  VAR_6->dl_last->di_extern = VAR_7;
}
