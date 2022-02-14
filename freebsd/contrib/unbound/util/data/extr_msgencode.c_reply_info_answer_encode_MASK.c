
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint16_t ;
typedef int time_t ;
struct reply_info {unsigned int flags; scalar_t__ authoritative; } ;
struct regional {int dummy; } ;
struct query_info {scalar_t__ local_alias; } ;
struct edns_data {int dummy; } ;
typedef int sldns_buffer ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int *,struct edns_data*) ;
 unsigned int FUNC_2 (struct edns_data*) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct query_info*,struct reply_info*,unsigned int,unsigned int,int *,int ,struct regional*,unsigned int,int) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;

int
FUNC_8(struct query_info* VAR_8, struct reply_info* VAR_9,
 uint16_t VAR_10, uint16_t VAR_11, sldns_buffer* VAR_12, time_t VAR_13,
 int VAR_14, struct regional* VAR_15, uint16_t VAR_16,
 struct edns_data* VAR_17, int VAR_18, int VAR_19)
{
 uint16_t VAR_20;
 unsigned int VAR_21 = 0;

 if(!VAR_14 || VAR_9->authoritative) {

  VAR_20 = VAR_9->flags | (VAR_11 & (VAR_4|VAR_2));
 } else {

  VAR_20 = (VAR_9->flags & ~VAR_0) | (VAR_11 & (VAR_4|VAR_2));
 }
 if(VAR_19 && (VAR_18 || (VAR_11&VAR_1)))
  VAR_20 |= VAR_1;



 if(VAR_8->local_alias &&
  (FUNC_0(VAR_9->flags) == VAR_6 ||
  FUNC_0(VAR_9->flags) == VAR_7)) {
  VAR_20 |= VAR_0;
  VAR_20 &= ~VAR_1;
 }
 FUNC_3(VAR_20 & VAR_3);
 if(VAR_16 < VAR_5)
  return 0;
 if(FUNC_6(VAR_12) < VAR_16)
  VAR_16 = FUNC_6(VAR_12);
 if(VAR_16 < VAR_5 + FUNC_2(VAR_17)) {

  VAR_21 = 0;
 } else {

  VAR_21 = (unsigned int)FUNC_2(VAR_17);
  VAR_16 -= VAR_21;
 }

 if(!FUNC_5(VAR_8, VAR_9, VAR_10, VAR_20, VAR_12, VAR_13, VAR_15,
  VAR_16, VAR_18)) {
  FUNC_4("reply encode: out of memory");
  return 0;
 }
 if(VAR_21 && FUNC_6(VAR_12) >=
  FUNC_7(VAR_12)+VAR_21)
  FUNC_1(VAR_12, VAR_17);
 return 1;
}
