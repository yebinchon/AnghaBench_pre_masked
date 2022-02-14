
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct req_pkt {int rm_vn_mode; } ;
struct recvbuf {int recv_pkt; } ;


 int FUNC_0 (int ) ;

int
FUNC_1(struct recvbuf *VAR_0)
{
 struct req_pkt *VAR_1 = (struct req_pkt *)&VAR_0->recv_pkt;
 return (FUNC_0(VAR_1->rm_vn_mode));
}
