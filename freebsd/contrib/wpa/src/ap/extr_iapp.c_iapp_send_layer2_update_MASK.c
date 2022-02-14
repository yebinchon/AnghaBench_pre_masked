
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iapp_layer2_update {int ssap; int control; int* xid_info; scalar_t__ dsap; int len; int sa; int da; } ;
struct iapp_data {int packet_sock; } ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ,int,int ) ;
 scalar_t__ FUNC_3 (int ,struct iapp_layer2_update*,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_6(struct iapp_data *VAR_3, u8 *VAR_4)
{
 struct iapp_layer2_update VAR_5;







 FUNC_2(VAR_5.da, 0xff, VAR_0);
 FUNC_1(VAR_5.sa, VAR_4, VAR_0);
 VAR_5.len = FUNC_0(6);
 VAR_5.dsap = 0;
 VAR_5.ssap = 0x01;
 VAR_5.control = 0xaf;

 VAR_5.xid_info[0] = 0x81;
 VAR_5.xid_info[1] = 1;
 VAR_5.xid_info[2] = 1 << 1;


 if (FUNC_3(VAR_3->packet_sock, &VAR_5, sizeof(VAR_5), 0) < 0)
  FUNC_5(VAR_1, "send[L2 Update]: %s", FUNC_4(VAR_2));
}
