
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ifmediareq {int ifm_count; int * ifm_ulist; int ifm_name; } ;
struct _ifconfig_media_status {struct ifmediareq ifmr; int * medialist; } ;
struct TYPE_5__ {void* errcode; void* errtype; } ;
struct TYPE_6__ {TYPE_1__ error; } ;
typedef TYPE_2__ ifconfig_handle_t ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 struct _ifconfig_media_status* FUNC_0 (int,int) ;
 int FUNC_1 (struct _ifconfig_media_status*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,unsigned long,struct ifmediareq*) ;
 int FUNC_3 (struct _ifconfig_media_status*,int ,int) ;
 struct _ifconfig_media_status* FUNC_4 (struct _ifconfig_media_status*,int) ;
 int FUNC_5 (int ,char const*,int) ;

int
FUNC_6(ifconfig_handle_t *VAR_6, const char *VAR_7,
    struct ifmediareq **VAR_8)
{
 struct _ifconfig_media_status *VAR_9, *VAR_10;
 unsigned long VAR_11 = VAR_5;

 *VAR_8 = ((void*)0);
 VAR_9 = FUNC_0(1, sizeof(*VAR_9));
 if (VAR_9 == ((void*)0)) {
  VAR_6->error.errtype = VAR_3;
  VAR_6->error.errcode = VAR_1;
  return (-1);
 }
 (void)FUNC_3(VAR_9, 0, sizeof(*VAR_9));
 (void)FUNC_5(VAR_9->ifmr.ifm_name, VAR_7, sizeof(VAR_9->ifmr.ifm_name));




 if (FUNC_2(VAR_6, VAR_0, VAR_11, &VAR_9->ifmr) < 0) {
  VAR_11 = VAR_4;
  if (FUNC_2(VAR_6, VAR_0, VAR_11, &VAR_9->ifmr) < 0) {

   VAR_6->error.errtype = VAR_2;
   FUNC_1(VAR_9);
   return (-1);
  }
 }
 if (VAR_9->ifmr.ifm_count == 0) {
  *VAR_8 = &VAR_9->ifmr;
  return (0);
 }

 VAR_10 = FUNC_4(VAR_9, sizeof(*VAR_9) + sizeof(int) * VAR_9->ifmr.ifm_count);
 if (VAR_10 == ((void*)0)) {
  VAR_6->error.errtype = VAR_3;
  VAR_6->error.errcode = VAR_1;
  FUNC_1(VAR_9);
  return (-1);
 }
 VAR_10->ifmr.ifm_ulist = &VAR_10->medialist[0];

 if (FUNC_2(VAR_6, VAR_0, VAR_11, &VAR_10->ifmr) < 0) {
  FUNC_1(VAR_10);
  return (-1);
 }

 *VAR_8 = &VAR_10->ifmr;
 return (0);
}
