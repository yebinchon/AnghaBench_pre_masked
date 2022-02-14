
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_3__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct iapp_hdr {void* length; void* identifier; int command; int version; } ;
struct TYPE_4__ {int s_addr; } ;
struct iapp_data {int udp_sock; TYPE_2__ multicast; int identifier; } ;
struct iapp_add_notify {void* seq_num; int mac_addr; scalar_t__ reserved; int addr_len; } ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (struct sockaddr_in*,int ,int) ;
 scalar_t__ FUNC_4 (int ,char*,int,int ,struct sockaddr*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_7(struct iapp_data *VAR_7, u8 *VAR_8, u16 VAR_9)
{
 char VAR_10[128];
 struct iapp_hdr *VAR_11;
 struct iapp_add_notify *VAR_12;
 struct sockaddr_in VAR_13;




 VAR_11 = (struct iapp_hdr *) VAR_10;
 VAR_11->version = VAR_4;
 VAR_11->command = VAR_2;
 VAR_11->identifier = FUNC_0(VAR_7->identifier++);
 VAR_11->length = FUNC_0(sizeof(*VAR_11) + sizeof(*VAR_12));

 VAR_12 = (struct iapp_add_notify *) (VAR_11 + 1);
 VAR_12->addr_len = VAR_1;
 VAR_12->reserved = 0;
 FUNC_2(VAR_12->mac_addr, VAR_8, VAR_1);

 VAR_12->seq_num = FUNC_0(VAR_9);

 FUNC_3(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.sin_family = VAR_0;
 VAR_13.sin_addr.s_addr = VAR_7->multicast.s_addr;
 VAR_13.sin_port = FUNC_1(VAR_3);
 if (FUNC_4(VAR_7->udp_sock, VAR_10, (char *) (VAR_12 + 1) - VAR_10, 0,
     (struct sockaddr *) &VAR_13, sizeof(VAR_13)) < 0)
  FUNC_6(VAR_5, "sendto[IAPP-ADD]: %s", FUNC_5(VAR_6));
}
