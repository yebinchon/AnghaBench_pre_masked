
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iser_conn {int dummy; } ;
struct icl_pdu {int * ip_bhs; struct icl_conn* ip_conn; } ;
struct TYPE_2__ {int iscsi_header; } ;
struct icl_iser_pdu {TYPE_1__ desc; struct icl_pdu icl_pdu; struct iser_conn* iser_conn; } ;
struct icl_conn {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct iser_conn* FUNC_1 (struct icl_conn*) ;
 struct icl_iser_pdu* FUNC_2 (int ,int) ;

struct icl_pdu *
FUNC_3(struct icl_conn *VAR_2, int VAR_3)
{
 struct icl_iser_pdu *VAR_4;
 struct icl_pdu *VAR_5;
 struct iser_conn *VAR_6 = FUNC_1(VAR_2);

 VAR_4 = FUNC_2(VAR_1, VAR_3 | VAR_0);
 if (VAR_4 == ((void*)0)) {
  FUNC_0("failed to allocate %zd bytes", sizeof(*VAR_4));
  return (((void*)0));
 }

 VAR_4->iser_conn = VAR_6;
 VAR_5 = &VAR_4->icl_pdu;
 VAR_5->ip_conn = VAR_2;
 VAR_5->ip_bhs = &VAR_4->desc.iscsi_header;

 return (VAR_5);
}
