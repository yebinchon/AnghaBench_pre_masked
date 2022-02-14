
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct rsocket {int udp_sock; TYPE_8__* conn_dest; } ;
struct msghdr {int msg_iovlen; struct iovec* msg_iov; int msg_namelen; TYPE_7__* msg_name; } ;
struct iovec {scalar_t__ iov_len; struct ds_udp_header* iov_base; } ;
struct TYPE_11__ {struct iovec* ipv6; int ipv4; } ;
struct ds_udp_header {int version; scalar_t__ length; TYPE_3__ addr; void* qpn; scalar_t__ reserved; int op; void* tag; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_15__ {int sa; } ;
struct TYPE_16__ {TYPE_7__ addr; TYPE_6__* qp; } ;
struct TYPE_12__ {struct iovec const ipv6; int ipv4; } ;
struct TYPE_13__ {int version; TYPE_4__ addr; } ;
struct TYPE_14__ {TYPE_5__ hdr; TYPE_2__* cm_id; } ;
struct TYPE_10__ {TYPE_1__* qp; } ;
struct TYPE_9__ {int qp_num; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct iovec*,struct iovec const*,int) ;
 int FUNC_3 (struct msghdr*,int ,int) ;
 scalar_t__ FUNC_4 (int ,struct msghdr*,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static ssize_t FUNC_6(struct rsocket *VAR_4, const struct iovec *VAR_5,
       int VAR_6, int VAR_7, uint8_t VAR_8)
{
 struct ds_udp_header VAR_9;
 struct msghdr VAR_10;
 struct iovec VAR_11[8];
 ssize_t VAR_12;

 if (VAR_6 > 8)
  return FUNC_0(VAR_3);

 VAR_9.tag = FUNC_1(VAR_2);
 VAR_9.version = VAR_4->conn_dest->qp->hdr.version;
 VAR_9.op = VAR_8;
 VAR_9.reserved = 0;
 VAR_9.qpn = FUNC_1(VAR_4->conn_dest->qp->cm_id->qp->qp_num & 0xFFFFFF);
 if (VAR_4->conn_dest->qp->hdr.version == 4) {
  VAR_9.length = VAR_0;
  VAR_9.addr.ipv4 = VAR_4->conn_dest->qp->hdr.addr.ipv4;
 } else {
  VAR_9.length = VAR_1;
  FUNC_2(VAR_9.addr.ipv6, &VAR_4->conn_dest->qp->hdr.addr.ipv6, 16);
 }

 VAR_11[0].iov_base = &VAR_9;
 VAR_11[0].iov_len = VAR_9.length;
 if (VAR_5 && VAR_6)
  FUNC_2(&VAR_11[1], VAR_5, sizeof(*VAR_5) * VAR_6);

 FUNC_3(&VAR_10, 0, sizeof VAR_10);
 VAR_10.msg_name = &VAR_4->conn_dest->addr;
 VAR_10.msg_namelen = FUNC_5(&VAR_4->conn_dest->addr.sa);
 VAR_10.msg_iov = VAR_11;
 VAR_10.msg_iovlen = VAR_6 + 1;
 VAR_12 = FUNC_4(VAR_4->udp_sock, &VAR_10, VAR_7);
 return VAR_12 > 0 ? VAR_12 - VAR_9.length : VAR_12;
}
