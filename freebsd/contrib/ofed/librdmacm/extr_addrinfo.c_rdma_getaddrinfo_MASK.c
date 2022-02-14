
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_addrinfo {int ai_flags; scalar_t__ ai_src_len; int ai_src_addr; scalar_t__ ai_dst_len; int ai_dst_addr; int ai_port_space; int ai_qp_type; int ai_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 struct rdma_addrinfo* FUNC_1 (int,int) ;
 struct rdma_addrinfo VAR_3 ;
 int FUNC_2 (struct rdma_addrinfo*) ;
 int FUNC_3 (int *,scalar_t__*,int ,scalar_t__) ;
 int FUNC_4 (char const*,char const*,struct rdma_addrinfo const*,struct rdma_addrinfo*) ;
 int FUNC_5 (struct rdma_addrinfo**,struct rdma_addrinfo const*) ;
 int FUNC_6 () ;

int FUNC_7(const char *VAR_4, const char *VAR_5,
       const struct rdma_addrinfo *VAR_6,
       struct rdma_addrinfo **VAR_7)
{
 struct rdma_addrinfo *VAR_8;
 int VAR_9;

 if (!VAR_5 && !VAR_4 && !VAR_6)
  return FUNC_0(VAR_0);

 VAR_9 = FUNC_6();
 if (VAR_9)
  return VAR_9;

 VAR_8 = FUNC_1(1, sizeof(*VAR_8));
 if (!VAR_8)
  return FUNC_0(VAR_1);

 if (!VAR_6)
  VAR_6 = &VAR_3;

 if (VAR_4 || VAR_5) {
  VAR_9 = FUNC_4(VAR_4, VAR_5, VAR_6, VAR_8);
 } else {
  VAR_8->ai_flags = VAR_6->ai_flags;
  VAR_8->ai_family = VAR_6->ai_family;
  VAR_8->ai_qp_type = VAR_6->ai_qp_type;
  VAR_8->ai_port_space = VAR_6->ai_port_space;
  if (VAR_6->ai_dst_len) {
   VAR_9 = FUNC_3(&VAR_8->ai_dst_addr, &VAR_8->ai_dst_len,
          VAR_6->ai_dst_addr, VAR_6->ai_dst_len);
  }
 }
 if (VAR_9)
  goto err;

 if (!VAR_8->ai_src_len && VAR_6->ai_src_len) {
  VAR_9 = FUNC_3(&VAR_8->ai_src_addr, &VAR_8->ai_src_len,
         VAR_6->ai_src_addr, VAR_6->ai_src_len);
  if (VAR_9)
   goto err;
 }

 if (!(VAR_8->ai_flags & VAR_2))
  FUNC_5(&VAR_8, VAR_6);

 *VAR_7 = VAR_8;
 return 0;

err:
 FUNC_2(VAR_8);
 return VAR_9;
}
