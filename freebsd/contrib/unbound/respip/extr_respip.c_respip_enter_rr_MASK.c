
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int time_t ;
struct sockaddr {scalar_t__ sa_family; } ;
struct TYPE_5__ {int addr; } ;
struct resp_addr {scalar_t__ action; TYPE_4__* data; TYPE_1__ node; } ;
struct regional {int dummy; } ;
struct packed_rrset_data {int dummy; } ;
typedef int rr ;
typedef int bufshort ;
typedef int buf ;
struct TYPE_7__ {struct packed_rrset_data* data; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct TYPE_8__ {TYPE_3__ entry; TYPE_2__ rk; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,char const*,...) ;
 TYPE_4__* FUNC_3 (struct regional*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (struct regional*,struct packed_rrset_data*,int *,size_t,int ,char const*) ;
 int FUNC_5 (char*,int **,scalar_t__*,scalar_t__*,int *,int *,int,int **,size_t*) ;
 int FUNC_6 (char*,int,char*,char const*) ;
 int FUNC_7 (char*,char const*,int) ;

__attribute__((used)) static int
FUNC_8(struct regional* VAR_8, struct resp_addr* VAR_9,
  const char* VAR_10, const char* VAR_11)
{
 uint8_t* VAR_12;
 uint16_t VAR_13 = 0, VAR_14 = 0;
 time_t VAR_15 = 0;
 uint8_t VAR_16[VAR_2];
 uint8_t* VAR_17 = ((void*)0);
 size_t VAR_18 = 0;
 char VAR_19[65536];
 char VAR_20[64];
 struct packed_rrset_data* VAR_21;
 struct sockaddr* VAR_22;
 int VAR_23;
 if(VAR_9->action != VAR_7
  && VAR_9->action != VAR_6) {
  FUNC_2("cannot parse response-ip-data %s: response-ip "
   "action for %s is not redirect", VAR_10, VAR_11);
  return 0;
 }
 VAR_23 = FUNC_6(VAR_19, sizeof(VAR_19), ". %s", VAR_10);
 if(VAR_23 < 0 || VAR_23 >= (int)sizeof(VAR_19)) {
  FUNC_7(VAR_20, VAR_10, sizeof(VAR_20));
  FUNC_2("bad response-ip-data: %s...", VAR_20);
  return 0;
 }
 if(!FUNC_5(VAR_19, &VAR_12, &VAR_13, &VAR_14, &VAR_15, VAR_16, sizeof(VAR_16),
  &VAR_17, &VAR_18)) {
  FUNC_2("bad response-ip-data: %s", VAR_10);
  return 0;
 }
 FUNC_0(VAR_12);
 VAR_22 = (struct sockaddr*)&VAR_9->node.addr;
 if (VAR_13 == VAR_5 && VAR_9->data) {
  FUNC_2("CNAME response-ip data (%s) can not co-exist with other "
   "response-ip data for netblock %s", VAR_10, VAR_11);
  return 0;
 } else if (VAR_9->data &&
  VAR_9->data->rk.type == FUNC_1(VAR_5)) {
  FUNC_2("response-ip data (%s) can not be added; CNAME response-ip "
   "data already in place for netblock %s", VAR_10, VAR_11);
  return 0;
 } else if((VAR_13 != VAR_5) &&
  ((VAR_22->sa_family == VAR_0 && VAR_13 != VAR_3) ||
  (VAR_22->sa_family == VAR_1 && VAR_13 != VAR_4))) {
  FUNC_2("response-ip data %s record type does not correspond "
   "to netblock %s address family", VAR_10, VAR_11);
  return 0;
 }

 if(!VAR_9->data) {
  VAR_9->data = FUNC_3(VAR_8, VAR_13, VAR_14);
  if(!VAR_9->data)
   return 0;
 }
 VAR_21 = VAR_9->data->entry.data;
 return FUNC_4(VAR_8, VAR_21, VAR_17, VAR_18, VAR_15, VAR_10);
}
