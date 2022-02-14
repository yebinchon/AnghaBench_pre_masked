
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eapol_test_data {int id_req_sent; int wpa_s; scalar_t__ ctrl_iface; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int *) ;
 int FUNC_1 (int*,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(void *VAR_2, u8 *VAR_3)
{
 struct eapol_test_data *VAR_4 = VAR_2;

 if (VAR_4->ctrl_iface && !VAR_4->id_req_sent) {
  FUNC_0(0, 0, VAR_1,
           VAR_4->wpa_s, ((void*)0));
  VAR_4->id_req_sent = 1;
 }

 FUNC_1(VAR_3, 0, VAR_0);
 VAR_3[5] = 1;
 return 0;
}
