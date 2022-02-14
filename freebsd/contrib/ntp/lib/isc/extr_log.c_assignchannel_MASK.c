
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ isc_result_t ;
struct TYPE_13__ {scalar_t__ id; } ;
typedef TYPE_1__ isc_logmodule_t ;
struct TYPE_14__ {scalar_t__ highest_level; int dynamic; int * channellists; TYPE_5__* lctx; } ;
typedef TYPE_2__ isc_logconfig_t ;
struct TYPE_15__ {TYPE_1__ const* module; TYPE_4__* channel; } ;
typedef TYPE_3__ isc_logchannellist_t ;
struct TYPE_16__ {scalar_t__ type; scalar_t__ level; } ;
typedef TYPE_4__ isc_logchannel_t ;
struct TYPE_17__ {unsigned int category_count; scalar_t__ module_count; int mctx; } ;
typedef TYPE_5__ isc_log_t ;


 int FUNC_0 (int ,TYPE_3__*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_3__* FUNC_3 (int ,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static isc_result_t
FUNC_5(isc_logconfig_t *VAR_6, unsigned int VAR_7,
       const isc_logmodule_t *VAR_8, isc_logchannel_t *VAR_9)
{
 isc_logchannellist_t *VAR_10;
 isc_log_t *VAR_11;
 isc_result_t VAR_12;

 FUNC_1(FUNC_2(VAR_6));

 VAR_11 = VAR_6->lctx;

 FUNC_1(VAR_7 < VAR_11->category_count);
 FUNC_1(VAR_8 == ((void*)0) || VAR_8->id < VAR_11->module_count);
 FUNC_1(VAR_9 != ((void*)0));




 VAR_12 = FUNC_4(VAR_6);
 if (VAR_12 != VAR_3)
  return (VAR_12);

 VAR_10 = FUNC_3(VAR_11->mctx, sizeof(*VAR_10));
 if (VAR_10 == ((void*)0))
  return (VAR_2);

 VAR_10->channel = VAR_9;
 VAR_10->module = VAR_8;
 FUNC_0(VAR_6->channellists[VAR_7],
          VAR_10, VAR_5);






 if (VAR_9->type != VAR_1) {
  if (VAR_6->highest_level < VAR_9->level)
   VAR_6->highest_level = VAR_9->level;
  if (VAR_9->level == VAR_0)
   VAR_6->dynamic = VAR_4;
 }

 return (VAR_3);
}
