
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
typedef int uint8_t ;
struct scfg {scalar_t__ current_request_stage; scalar_t__ current_request_stages; TYPE_3__* current_request; } ;
struct enc_fsm_state {int dummy; } ;
struct TYPE_10__ {int result; int elm_idx; } ;
typedef TYPE_3__ safte_control_request_t ;
struct TYPE_9__ {TYPE_1__* elm_map; } ;
struct TYPE_11__ {TYPE_2__ enc_cache; struct scfg* enc_private; } ;
typedef TYPE_4__ enc_softc_t ;
struct TYPE_8__ {int elm_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_2(enc_softc_t *VAR_7, struct enc_fsm_state *VAR_8,
    union ccb *VAR_9, uint8_t **VAR_10, int VAR_11, int VAR_12)
{
 struct scfg *VAR_13;
 safte_control_request_t *VAR_14;
 int VAR_15, VAR_16;

 VAR_13 = VAR_7->enc_private;
 if (VAR_13 == ((void*)0))
  return (VAR_2);

 VAR_14 = VAR_13->current_request;
 if (VAR_14->result == 0)
  VAR_14->result = VAR_11;
 if (++VAR_13->current_request_stage >= VAR_13->current_request_stages) {
  VAR_15 = VAR_14->elm_idx;
  if (VAR_15 == VAR_6)
   VAR_16 = -1;
  else
   VAR_16 = VAR_7->enc_cache.elm_map[VAR_15].elm_type;
  if (VAR_16 == VAR_1 || VAR_16 == VAR_0)
   FUNC_0(VAR_7, VAR_5);
  else
   FUNC_0(VAR_7, VAR_4);
  VAR_13->current_request = ((void*)0);
  FUNC_1(VAR_14);
 } else {
  FUNC_0(VAR_7, VAR_3);
 }
 return (0);
}
