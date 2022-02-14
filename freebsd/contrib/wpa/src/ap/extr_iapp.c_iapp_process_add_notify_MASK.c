
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_info {int dummy; } ;
struct sockaddr_in {int sin_port; int sin_addr; } ;
struct iapp_hdr {int dummy; } ;
struct iapp_data {int hapd; } ;
struct iapp_add_notify {int mac_addr; int seq_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sta_info* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,struct sta_info*,int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ,char*,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct iapp_data *VAR_4,
        struct sockaddr_in *VAR_5,
        struct iapp_hdr *VAR_6, int VAR_7)
{
 struct iapp_add_notify *VAR_8 = (struct iapp_add_notify *) (VAR_6 + 1);
 struct sta_info *VAR_9;

 if (VAR_7 != sizeof(*VAR_8)) {
  FUNC_6(VAR_3, "Invalid IAPP-ADD packet length %d (expected %lu)",
      VAR_7, (unsigned long) sizeof(*VAR_8));
  return;
 }

 VAR_9 = FUNC_0(VAR_4->hapd, VAR_8->mac_addr);


 FUNC_3(VAR_4->hapd, VAR_8->mac_addr, VAR_2,
         VAR_1,
         "Received IAPP ADD-notify (seq# %d) from %s:%d%s",
         FUNC_2(VAR_8->seq_num),
         FUNC_4(VAR_5->sin_addr), FUNC_5(VAR_5->sin_port),
         VAR_9 ? "" : " (STA not found)");

 if (!VAR_9)
  return;





 FUNC_3(VAR_4->hapd, VAR_8->mac_addr, VAR_2,
         VAR_0,
         "Removing STA due to IAPP ADD-notify");
 FUNC_1(VAR_4->hapd, VAR_9, ((void*)0), 0);
}
