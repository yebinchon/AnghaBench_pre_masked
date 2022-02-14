
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct probe_resp {size_t len; int data; } ;
struct TYPE_3__ {int probe_resp; } ;
struct TYPE_4__ {TYPE_1__ ap; } ;
struct ieee80211_sub_if_data {TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct probe_resp*,int ) ;
 struct probe_resp* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int const*,size_t) ;
 int FUNC_3 (int ,struct probe_resp*) ;
 int VAR_2 ;
 struct probe_resp* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct ieee80211_sub_if_data *VAR_3,
        const u8 *VAR_4, size_t VAR_5)
{
 struct probe_resp *VAR_6, *VAR_7;

 if (!VAR_4 || !VAR_5)
  return 1;

 VAR_7 = FUNC_4(VAR_3->u.ap.probe_resp);

 VAR_6 = FUNC_1(sizeof(struct probe_resp) + VAR_5, VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->len = VAR_5;
 FUNC_2(VAR_6->data, VAR_4, VAR_5);

 FUNC_3(VAR_3->u.ap.probe_resp, VAR_6);
 if (VAR_7)
  FUNC_0(VAR_7, VAR_2);

 return 0;
}
