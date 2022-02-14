
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_ib {int sib_addr; void* sib_flowinfo; int sib_pkey; void* sib_family; } ;
struct sockaddr {int dummy; } ;
struct rdma_addrinfo {int ai_src_len; int ai_dst_len; struct sockaddr* ai_dst_addr; struct sockaddr* ai_src_addr; int ai_port_space; scalar_t__ ai_route; } ;
struct ibv_path_record {int dgid; int flowlabel_hoplimit; int pkey; int sgid; } ;
struct ibv_path_data {struct ibv_path_record path; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct sockaddr_ib* FUNC_2 (int,int) ;
 int FUNC_3 (struct sockaddr_ib*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int ,struct sockaddr*,struct sockaddr_ib*) ;

__attribute__((used)) static int FUNC_7(struct rdma_addrinfo *VAR_2,
       struct rdma_addrinfo *VAR_3)
{
 struct sockaddr_ib *VAR_4, *VAR_5;
 struct ibv_path_record *VAR_6;

 VAR_4 = FUNC_2(1, sizeof(*VAR_4));
 if (!VAR_4)
  return FUNC_0(VAR_1);

 VAR_5 = FUNC_2(1, sizeof(*VAR_5));
 if (!VAR_5) {
  FUNC_3(VAR_4);
  return FUNC_0(VAR_1);
 }

 VAR_6 = &((struct ibv_path_data *) VAR_2->ai_route)->path;

 VAR_4->sib_family = VAR_0;
 VAR_4->sib_pkey = VAR_6->pkey;
 VAR_4->sib_flowinfo = FUNC_4(FUNC_1(VAR_6->flowlabel_hoplimit) >> 8);
 FUNC_5(&VAR_4->sib_addr, &VAR_6->sgid, 16);
 FUNC_6(VAR_2->ai_port_space, VAR_3->ai_src_addr, VAR_4);

 VAR_5->sib_family = VAR_0;
 VAR_5->sib_pkey = VAR_6->pkey;
 VAR_5->sib_flowinfo = FUNC_4(FUNC_1(VAR_6->flowlabel_hoplimit) >> 8);
 FUNC_5(&VAR_5->sib_addr, &VAR_6->dgid, 16);
 FUNC_6(VAR_2->ai_port_space, VAR_3->ai_dst_addr, VAR_5);

 VAR_2->ai_src_addr = (struct sockaddr *) VAR_4;
 VAR_2->ai_src_len = sizeof(*VAR_4);

 VAR_2->ai_dst_addr = (struct sockaddr *) VAR_5;
 VAR_2->ai_dst_len = sizeof(*VAR_5);

 return 0;
}
