
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t sctp_state_t ;
typedef int sctp_sm_table_entry_t ;
typedef size_t sctp_cid_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int const** VAR_6 ;
 int const** VAR_7 ;
 int const VAR_8 ;
 int const** VAR_9 ;
 int const* VAR_10 ;
 int const** VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static const sctp_sm_table_entry_t *FUNC_0(sctp_cid_t VAR_15,
           sctp_state_t VAR_16)
{
 if (VAR_16 > VAR_5)
  return &VAR_8;

 if (VAR_15 <= VAR_3)
  return &VAR_9[VAR_15][VAR_16];

 if (VAR_14) {
  if (VAR_15 == VAR_4)
   return &VAR_11[0][VAR_16];
 }

 if (VAR_12) {
  if (VAR_15 == VAR_0)
   return &VAR_6[0][VAR_16];

  if (VAR_15 == VAR_1)
   return &VAR_6[1][VAR_16];
 }

 if (VAR_13) {
  if (VAR_15 == VAR_2)
   return &VAR_7[0][VAR_16];
 }

 return &VAR_10[VAR_16];
}
