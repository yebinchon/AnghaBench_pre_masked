
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
typedef int u_int ;
struct ssh {int compat; int * kex; struct session_state* state; } ;
struct TYPE_8__ {scalar_t__ packets; scalar_t__ blocks; } ;
struct TYPE_7__ {scalar_t__ packets; scalar_t__ blocks; } ;
struct session_state {scalar_t__ rekey_interval; scalar_t__ max_blocks_out; scalar_t__ max_blocks_in; TYPE_4__ p_read; TYPE_3__ p_send; TYPE_2__** newkeys; scalar_t__ rekey_time; int after_authentication; } ;
typedef scalar_t__ int64_t ;
struct TYPE_5__ {int block_size; } ;
struct TYPE_6__ {TYPE_1__ enc; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (struct ssh*) ;

__attribute__((used)) static int
FUNC_3(struct ssh *VAR_3, u_int VAR_4)
{
 struct session_state *VAR_5 = VAR_3->state;
 u_int32_t VAR_6;


 if (!VAR_5->after_authentication)
  return 0;


 if (VAR_3->kex == ((void*)0) || FUNC_2(VAR_3))
  return 0;


 if (VAR_3->compat & VAR_2)
  return 0;





 if (VAR_5->p_send.packets == 0 && VAR_5->p_read.packets == 0)
  return 0;


 if (VAR_5->rekey_interval != 0 &&
     (int64_t)VAR_5->rekey_time + VAR_5->rekey_interval <= FUNC_1())
  return 1;





 if (VAR_5->p_send.packets > VAR_0 ||
     VAR_5->p_read.packets > VAR_0)
  return 1;


 VAR_6 = FUNC_0(VAR_4,
     VAR_5->newkeys[VAR_1]->enc.block_size);
 return (VAR_5->max_blocks_out &&
     (VAR_5->p_send.blocks + VAR_6 > VAR_5->max_blocks_out)) ||
     (VAR_5->max_blocks_in &&
     (VAR_5->p_read.blocks > VAR_5->max_blocks_in));
}
