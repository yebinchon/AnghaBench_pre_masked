
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pt_time_cal {int dummy; } ;
struct pt_time {int dummy; } ;
struct TYPE_9__ {scalar_t__ apl12; scalar_t__ apl11; scalar_t__ skd010; } ;
struct TYPE_6__ {scalar_t__ keep_tcal_on_ovf; } ;
struct TYPE_7__ {TYPE_1__ query; } ;
struct TYPE_8__ {TYPE_2__ variant; } ;
struct TYPE_10__ {TYPE_4__ errata; TYPE_3__ flags; } ;
struct pt_query_decoder {TYPE_5__ config; int pos; struct pt_time_cal tcal; struct pt_time time; } ;


 int FUNC_0 (struct pt_query_decoder*) ;
 int FUNC_1 (struct pt_query_decoder*) ;
 int FUNC_2 (struct pt_query_decoder*) ;
 int FUNC_3 (struct pt_query_decoder*) ;
 int FUNC_4 (struct pt_query_decoder*,unsigned int) ;
 int FUNC_5 (struct pt_query_decoder*) ;
 int FUNC_6 (struct pt_query_decoder*) ;
 int FUNC_7 (struct pt_query_decoder*) ;
 int FUNC_8 (struct pt_time_cal*,TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

int FUNC_9(struct pt_query_decoder *VAR_4)
{
 struct pt_time_cal VAR_5;
 struct pt_time VAR_6;
 int VAR_7, VAR_8;

 if (!VAR_4)
  return -VAR_2;

 VAR_7 = FUNC_6(VAR_4);
 if (VAR_7 < 0)
  return VAR_7;


 if (VAR_7)
  return 0;


 VAR_6 = VAR_4->time;
 VAR_5 = VAR_4->tcal;

 FUNC_7(VAR_4);

 VAR_4->time = VAR_6;
 if (VAR_4->config.flags.variant.query.keep_tcal_on_ovf) {
  VAR_7 = FUNC_8(&VAR_5, &VAR_4->config);
  if (VAR_7 < 0)
   return VAR_7;

  VAR_4->tcal = VAR_5;
 }


 VAR_4->pos += VAR_3;
 VAR_8 = FUNC_2(VAR_4);
 if (VAR_8 <= 0) {






  if (VAR_4->config.errata.skd010) {
   VAR_7 = FUNC_5(VAR_4);
   if (VAR_7 <= 0)
    return VAR_7;
  }






  if (VAR_4->config.errata.apl11 &&
      (VAR_8 == -VAR_0)) {
   VAR_7 = FUNC_3(VAR_4);
   if (VAR_7 <= 0)
    return VAR_7;
  }






  if (VAR_8 < 0 && VAR_8 != -VAR_1)
   return VAR_8;

  return FUNC_0(VAR_4);
 } else {





  if (VAR_4->config.errata.apl12) {
   VAR_7 = FUNC_4(VAR_4,
           (unsigned int) VAR_8);
   if (VAR_7 <= 0)
    return VAR_7;
  }

  return FUNC_1(VAR_4);
 }
}
