
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef scalar_t__ isc_result_t ;
struct TYPE_14__ {scalar_t__ maximum_size; void* versions; int * name; void* stream; } ;
struct TYPE_15__ {TYPE_1__ file; int facility; } ;
typedef TYPE_2__ isc_logdestination_t ;
struct TYPE_16__ {int highest_level; int channels; int magic; int dynamic; int * tag; scalar_t__ duplicate_interval; scalar_t__ channellist_count; int * channellists; TYPE_4__* lctx; } ;
typedef TYPE_3__ isc_logconfig_t ;
struct TYPE_17__ {int mctx; } ;
typedef TYPE_4__ isc_log_t ;
struct TYPE_13__ {int channel; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*) ;
 TYPE_11__ VAR_12 ;
 scalar_t__ FUNC_4 (TYPE_3__*,char*,int ,int,TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_3__**) ;
 TYPE_3__* FUNC_6 (int ,int) ;
 void* VAR_13 ;

isc_result_t
FUNC_7(isc_log_t *VAR_14, isc_logconfig_t **VAR_15) {
 isc_logconfig_t *VAR_16;
 isc_logdestination_t VAR_17;
 isc_result_t VAR_18 = VAR_9;
 int VAR_19 = VAR_2;

 FUNC_2(VAR_15 != ((void*)0) && *VAR_15 == ((void*)0));
 FUNC_2(FUNC_3(VAR_14));

 VAR_16 = FUNC_6(VAR_14->mctx, sizeof(*VAR_16));

 if (VAR_16 != ((void*)0)) {
  VAR_16->lctx = VAR_14;
  VAR_16->channellists = ((void*)0);
  VAR_16->channellist_count = 0;
  VAR_16->duplicate_interval = 0;
  VAR_16->highest_level = VAR_19;
  VAR_16->tag = ((void*)0);
  VAR_16->dynamic = VAR_0;

  FUNC_1(VAR_16->channels);







  VAR_16->magic = VAR_10;

 } else
  VAR_18 = VAR_8;





 if (VAR_18 == VAR_9) {
  VAR_17.facility = VAR_11;
  VAR_18 = FUNC_4(VAR_16, "default_syslog",
            VAR_7, VAR_19,
            &VAR_17, 0);
 }

 if (VAR_18 == VAR_9) {
  VAR_17.file.stream = VAR_13;
  VAR_17.file.name = ((void*)0);
  VAR_17.file.versions = VAR_4;
  VAR_17.file.maximum_size = 0;
  VAR_18 = FUNC_4(VAR_16, "default_stderr",
            VAR_5,
            VAR_19,
            &VAR_17,
            VAR_3);
 }

 if (VAR_18 == VAR_9) {





  VAR_12.channel = FUNC_0(VAR_16->channels);

  VAR_17.file.stream = VAR_13;
  VAR_17.file.name = ((void*)0);
  VAR_17.file.versions = VAR_4;
  VAR_17.file.maximum_size = 0;
  VAR_18 = FUNC_4(VAR_16, "default_debug",
            VAR_5,
            VAR_1,
            &VAR_17,
            VAR_3);
 }

 if (VAR_18 == VAR_9)
  VAR_18 = FUNC_4(VAR_16, "null",
            VAR_6,
            VAR_1,
            ((void*)0), 0);

 if (VAR_18 == VAR_9)
  *VAR_15 = VAR_16;

 else
  if (VAR_16 != ((void*)0))
   FUNC_5(&VAR_16);

 return (VAR_18);
}
