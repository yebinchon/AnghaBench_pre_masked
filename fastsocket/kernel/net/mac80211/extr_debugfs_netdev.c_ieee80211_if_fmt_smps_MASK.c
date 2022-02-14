
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t req_smps; } ;
struct TYPE_6__ {TYPE_2__ mgd; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct ieee80211_sub_if_data {size_t smps_mode; TYPE_3__ u; TYPE_1__ vif; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char** VAR_2 ;
 int FUNC_0 (char*,int,char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_1(const struct ieee80211_sub_if_data *VAR_3,
         char *VAR_4, int VAR_5)
{
 if (VAR_3->vif.type != VAR_1)
  return -VAR_0;

 return FUNC_0(VAR_4, VAR_5, "request: %s\nused: %s\n",
   VAR_2[VAR_3->u.mgd.req_smps],
   VAR_2[VAR_3->smps_mode]);
}
