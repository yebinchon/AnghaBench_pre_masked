
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct TYPE_2__ {int p2p_device_addr; } ;
struct p2p_device {int dialog_token; int oper_ssid_len; int oper_ssid; TYPE_1__ info; } ;
struct p2p_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpabuf*,int const*) ;
 int FUNC_1 (struct wpabuf*,int ,int ,int ) ;
 int * FUNC_2 (struct wpabuf*) ;
 int FUNC_3 (struct wpabuf*,int ,int) ;
 int FUNC_4 (struct wpabuf*,int *) ;
 struct wpabuf* FUNC_5 (int) ;

__attribute__((used)) static struct wpabuf * FUNC_6(struct p2p_data *VAR_1,
           struct p2p_device *VAR_2,
           const u8 *VAR_3)
{
 struct wpabuf *VAR_4;
 u8 *VAR_5;

 VAR_4 = FUNC_5(100);
 if (VAR_4 == ((void*)0))
  return ((void*)0);

 VAR_2->dialog_token++;
 if (VAR_2->dialog_token == 0)
  VAR_2->dialog_token = 1;
 FUNC_3(VAR_4, VAR_0, VAR_2->dialog_token);

 VAR_5 = FUNC_2(VAR_4);
 FUNC_0(VAR_4, VAR_3);
 FUNC_1(VAR_4, VAR_2->info.p2p_device_addr, VAR_2->oper_ssid,
        VAR_2->oper_ssid_len);
 FUNC_4(VAR_4, VAR_5);

 return VAR_4;
}
