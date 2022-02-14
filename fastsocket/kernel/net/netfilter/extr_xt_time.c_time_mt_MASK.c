
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xtm {int weekday; int monthday; } ;
struct xt_time_info {int flags; scalar_t__ date_start; scalar_t__ date_stop; unsigned int daytime_start; unsigned int daytime_stop; int weekdays_match; int monthdays_match; } ;
struct xt_match_param {struct xt_time_info* matchinfo; } ;
struct TYPE_4__ {scalar_t__ tv64; } ;
struct sk_buff {TYPE_2__ tstamp; } ;
typedef scalar_t__ s64 ;
struct TYPE_3__ {int tz_minuteswest; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__) ;
 unsigned int FUNC_3 (struct xtm*,scalar_t__) ;
 int FUNC_4 (struct xtm*,scalar_t__) ;
 int FUNC_5 (struct xtm*,scalar_t__) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static bool
FUNC_6(const struct sk_buff *VAR_4, const struct xt_match_param *VAR_5)
{
 const struct xt_time_info *VAR_6 = VAR_5->matchinfo;
 unsigned int VAR_7;
 struct xtm VAR_8;
 s64 VAR_9;
 if (VAR_4->tstamp.tv64 == 0)
  FUNC_0((struct sk_buff *)VAR_4);

 VAR_9 = FUNC_2(VAR_4->tstamp);
 VAR_9 = FUNC_1(VAR_9, VAR_0);

 if (VAR_6->flags & VAR_2)

  VAR_9 -= 60 * VAR_3.tz_minuteswest;
 if (VAR_9 < VAR_6->date_start || VAR_9 > VAR_6->date_stop)
  return 0;

 VAR_7 = FUNC_3(&VAR_8, VAR_9);

 if (VAR_6->daytime_start < VAR_6->daytime_stop) {
  if (VAR_7 < VAR_6->daytime_start ||
      VAR_7 > VAR_6->daytime_stop)
   return 0;
 } else {
  if (VAR_7 < VAR_6->daytime_start &&
      VAR_7 > VAR_6->daytime_stop)
   return 0;
 }

 FUNC_4(&VAR_8, VAR_9);

 if (!(VAR_6->weekdays_match & (1 << VAR_8.weekday)))
  return 0;


 if (VAR_6->monthdays_match != VAR_1) {
  FUNC_5(&VAR_8, VAR_9);
  if (!(VAR_6->monthdays_match & (1 << VAR_8.monthday)))
   return 0;
 }

 return 1;
}
