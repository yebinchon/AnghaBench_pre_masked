
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct reply_info {int flags; } ;
struct regional {int dummy; } ;
typedef enum respip_action { ____Placeholder_respip_action } respip_action ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct reply_info* FUNC_1 (struct reply_info const*,struct regional*,size_t,size_t) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_2(uint16_t VAR_10, enum respip_action VAR_11,
 const struct reply_info *VAR_12, size_t VAR_13,
 struct reply_info** VAR_14, struct regional* VAR_15)
{
 struct reply_info* VAR_16;

 if(VAR_11 == VAR_8 || VAR_11 == VAR_5) {
  VAR_16 = FUNC_1(VAR_12, VAR_15, 0, 0);
  if(!VAR_16)
   return 0;
  FUNC_0(VAR_16->flags, VAR_2);
  *VAR_14 = VAR_16;
  return 1;
 } else if(VAR_11 == VAR_9 || VAR_11 == VAR_7 ||
  VAR_11 == VAR_4 ||
  VAR_11 == VAR_6) {



  int VAR_17 = (VAR_11 == VAR_4)?
   VAR_1:VAR_0;




  if(VAR_10 == VAR_3)
   VAR_13 = 0;
  VAR_16 = FUNC_1(VAR_12, VAR_15, VAR_13, VAR_13);
  if(!VAR_16)
   return 0;
  FUNC_0(VAR_16->flags, VAR_17);
  *VAR_14 = VAR_16;
  return 1;
 }

 return 1;
}
