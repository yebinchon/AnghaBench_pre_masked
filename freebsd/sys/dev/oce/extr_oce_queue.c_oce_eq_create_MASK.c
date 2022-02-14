
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef void* uint32_t ;
struct TYPE_6__ {scalar_t__ cur_eqd; void* item_size; void* q_len; } ;
struct oce_eq {int eq_id; TYPE_1__ eq_cfg; int ring; void* parent; } ;
struct TYPE_8__ {int neqs; TYPE_2__* intrs; } ;
struct TYPE_7__ {struct oce_eq* eq; } ;
typedef TYPE_3__* POCE_SOFTC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct oce_eq* FUNC_0 (int,int ,int) ;
 int FUNC_1 (TYPE_3__*,void*,void*) ;
 int FUNC_2 (struct oce_eq*) ;
 int FUNC_3 (struct oce_eq*) ;

__attribute__((used)) static struct
oce_eq *FUNC_4(POCE_SOFTC VAR_3, uint32_t VAR_4,
        uint32_t VAR_5,
        uint32_t VAR_6,
        uint32_t VAR_7)
{
 struct oce_eq *VAR_8;
 int VAR_9 = 0;


 VAR_8 = FUNC_0(sizeof(struct oce_eq), VAR_0, VAR_1 | VAR_2);
 if (VAR_8 == ((void*)0))
  return ((void*)0);

 VAR_8->parent = (void *)VAR_3;
 VAR_8->eq_id = 0xffff;
 VAR_8->ring = FUNC_1(VAR_3, VAR_4, VAR_5);
 if (!VAR_8->ring)
  goto free_eq;

 VAR_8->eq_cfg.q_len = VAR_4;
 VAR_8->eq_cfg.item_size = VAR_5;
 VAR_8->eq_cfg.cur_eqd = (uint8_t) VAR_6;

 VAR_9 = FUNC_3(VAR_8);
 if (VAR_9)
  goto free_eq;

 VAR_3->intrs[VAR_3->neqs++].eq = VAR_8;

 return VAR_8;

free_eq:
 FUNC_2(VAR_8);
 return ((void*)0);
}
