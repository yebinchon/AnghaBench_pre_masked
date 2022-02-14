
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sta_info {int flags; } ;
struct hostapd_data {int own_addr; int msg_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sta_info* FUNC_0 (struct hostapd_data*,int *) ;
 int FUNC_1 (struct hostapd_data*,int ,int *,int) ;
 scalar_t__ FUNC_2 (char const*,int *) ;
 int FUNC_3 (int ,int ,char*,char const*) ;

int FUNC_4(struct hostapd_data *VAR_3,
    const char *VAR_4)
{
 u8 VAR_5[VAR_0];
 struct sta_info *VAR_6;

 FUNC_3(VAR_3->msg_ctx, VAR_1, "CTRL_IFACE POLL_STA %s", VAR_4);

 if (FUNC_2(VAR_4, VAR_5))
  return -1;

 VAR_6 = FUNC_0(VAR_3, VAR_5);
 if (!VAR_6)
  return -1;

 FUNC_1(VAR_3, VAR_3->own_addr, VAR_5,
    VAR_6->flags & VAR_2);
 return 0;
}
