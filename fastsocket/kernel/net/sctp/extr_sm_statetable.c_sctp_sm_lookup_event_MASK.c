
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int chunk; } ;
typedef TYPE_1__ sctp_subtype_t ;
typedef int sctp_state_t ;
typedef int sctp_sm_table_entry_t ;
typedef int sctp_event_t ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int const VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int const* FUNC_1 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;

const sctp_sm_table_entry_t *FUNC_2(sctp_event_t VAR_10,
        sctp_state_t VAR_11,
        sctp_subtype_t VAR_12)
{
 switch (VAR_10) {
 case 131:
  return FUNC_1(VAR_12.chunk, VAR_11);
  break;
 case 128:
  FUNC_0(VAR_2, VAR_8,
     VAR_9);
  break;

 case 130:
  FUNC_0(VAR_0, VAR_4, VAR_5);
  break;

 case 129:
  FUNC_0(VAR_1, VAR_6,
     VAR_7);
  break;

 default:

  return &VAR_3;
 }
}
