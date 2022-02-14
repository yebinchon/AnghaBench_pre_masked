
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iser_conn {int login_req_buf; } ;
struct icl_pdu {size_t ip_data_len; TYPE_1__* ip_bhs; } ;
struct icl_conn {int dummy; } ;
struct TYPE_2__ {int bhs_opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 struct iser_conn* FUNC_1 (struct icl_conn*) ;
 int FUNC_2 (int ,void const*,size_t) ;

int
FUNC_3(struct icl_conn *VAR_2, struct icl_pdu *VAR_3,
     const void *VAR_4, size_t VAR_5, int VAR_6)
{
 struct iser_conn *VAR_7 = FUNC_1(VAR_2);

 if (VAR_3->ip_bhs->bhs_opcode & VAR_0 ||
     VAR_3->ip_bhs->bhs_opcode & VAR_1) {
  FUNC_0("copy to login buff");
  FUNC_2(VAR_7->login_req_buf, VAR_4, VAR_5);
  VAR_3->ip_data_len = VAR_5;
 }

 return (0);
}
