
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211req {int i_type; int i_val; int i_len; void* i_data; int i_name; } ;
struct bsd_driver_data {scalar_t__ ifindex; TYPE_1__* global; int ifname; scalar_t__ if_removed; } ;
typedef int ireq ;
struct TYPE_2__ {int sock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,struct ieee80211req*) ;
 int FUNC_1 (struct ieee80211req*,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int,int,int,int ) ;

__attribute__((used)) static int
FUNC_5(void *VAR_3, int VAR_4, int VAR_5, const void *VAR_6, int VAR_7)
{
 struct bsd_driver_data *VAR_8 = VAR_3;
 struct ieee80211req VAR_9;

 if (VAR_8->ifindex == 0 || VAR_8->if_removed)
  return -1;

 FUNC_1(&VAR_9, 0, sizeof(VAR_9));
 FUNC_2(VAR_9.i_name, VAR_8->ifname, sizeof(VAR_9.i_name));
 VAR_9.i_type = VAR_4;
 VAR_9.i_val = VAR_5;
 VAR_9.i_data = (void *) VAR_6;
 VAR_9.i_len = VAR_7;

 if (FUNC_0(VAR_8->global->sock, VAR_1, &VAR_9) < 0) {
  FUNC_4(VAR_0, "ioctl[SIOCS80211, op=%u, val=%u, "
      "arg_len=%u]: %s", VAR_4, VAR_5, VAR_7,
      FUNC_3(VAR_2));
  return -1;
 }
 return 0;
}
