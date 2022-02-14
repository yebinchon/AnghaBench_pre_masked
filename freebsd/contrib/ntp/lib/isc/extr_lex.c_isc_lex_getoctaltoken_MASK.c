
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; } ;
typedef TYPE_1__ isc_token_t ;
typedef scalar_t__ isc_result_t ;
typedef int isc_lex_t ;
typedef scalar_t__ isc_boolean_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (int *,unsigned int,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;

isc_result_t
FUNC_2(isc_lex_t *VAR_13, isc_token_t *VAR_14, isc_boolean_t VAR_15)
{
 unsigned int VAR_16 = VAR_2 | VAR_1 |
          VAR_0 | VAR_3|
          VAR_4 | VAR_5;
 isc_result_t VAR_17;

 VAR_17 = FUNC_0(VAR_13, VAR_16, VAR_14);
 if (VAR_17 == VAR_7)
  FUNC_1(VAR_13, VAR_14);
 if (VAR_17 != VAR_8)
  return (VAR_17);

 if (VAR_15 && ((VAR_14->type == VAR_11) ||
      (VAR_14->type == VAR_10)))
  return (VAR_8);
 if (VAR_14->type != VAR_12) {
  FUNC_1(VAR_13, VAR_14);
  if (VAR_14->type == VAR_11 ||
      VAR_14->type == VAR_10)
   return (VAR_9);
  return (VAR_6);
 }
 return (VAR_8);
}
