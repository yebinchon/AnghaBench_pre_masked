
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ isc_tokentype_t ;
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
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 (int *,unsigned int,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;

isc_result_t
FUNC_2(isc_lex_t *VAR_16, isc_token_t *VAR_17,
         isc_tokentype_t VAR_18, isc_boolean_t VAR_19)
{
 unsigned int VAR_20 = VAR_2 | VAR_1 |
          VAR_0 | VAR_3;
 isc_result_t VAR_21;

 if (VAR_18 == VAR_14)
  VAR_20 |= VAR_5;
 else if (VAR_18 == VAR_13)
  VAR_20 |= VAR_4;
 VAR_21 = FUNC_0(VAR_16, VAR_20, VAR_17);
 if (VAR_21 == VAR_7)
  FUNC_1(VAR_16, VAR_17);
 if (VAR_21 != VAR_8)
  return (VAR_21);

 if (VAR_19 && ((VAR_17->type == VAR_12) ||
      (VAR_17->type == VAR_11)))
  return (VAR_8);
 if (VAR_17->type == VAR_15 &&
     VAR_18 == VAR_14)
  return (VAR_8);
 if (VAR_17->type != VAR_18) {
  FUNC_1(VAR_16, VAR_17);
  if (VAR_17->type == VAR_12 ||
      VAR_17->type == VAR_11)
   return (VAR_9);
  if (VAR_18 == VAR_13)
   return (VAR_6);
  return (VAR_10);
 }
 return (VAR_8);
}
