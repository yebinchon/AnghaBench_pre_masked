
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int dummy; } ;
struct sockaddr_ib {int dummy; } ;
struct rdma_addrinfo {int ai_flags; scalar_t__ ai_family; int ai_dst_len; int ai_dst_addr; scalar_t__ ai_port_space; void* ai_dst_canonname; int ai_src_len; int ai_src_addr; void* ai_src_canonname; scalar_t__ ai_qp_type; } ;
struct addrinfo {int ai_socktype; int ai_protocol; int ai_flags; scalar_t__ ai_family; int ai_addrlen; scalar_t__ ai_addr; scalar_t__ ai_canonname; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;


 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,struct sockaddr_ib**,int *,struct sockaddr_in6*,int ) ;
 int FUNC_2 (int *,int *,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(struct rdma_addrinfo *VAR_9,
          const struct rdma_addrinfo *VAR_10,
          const struct addrinfo *VAR_11)
{
 int VAR_12;

 if (VAR_10->ai_qp_type) {
  VAR_9->ai_qp_type = VAR_10->ai_qp_type;
 } else {
  switch (VAR_11->ai_socktype) {
  case 128:
   VAR_9->ai_qp_type = VAR_2;
   break;
  case 129:
   VAR_9->ai_qp_type = VAR_3;
   break;
  }
 }

 if (VAR_10->ai_port_space) {
  VAR_9->ai_port_space = VAR_10->ai_port_space;
 } else {
  switch (VAR_11->ai_protocol) {
  case 131:
   VAR_9->ai_port_space = VAR_7;
   break;
  case 130:
   VAR_9->ai_port_space = VAR_8;
   break;
  }
 }

 if (VAR_11->ai_flags & VAR_1) {
  VAR_9->ai_flags = VAR_6;
  if (VAR_11->ai_canonname)
   VAR_9->ai_src_canonname = FUNC_0(VAR_11->ai_canonname);

  if ((VAR_10->ai_flags & VAR_4) && (VAR_10->ai_family == VAR_0) &&
      (VAR_10->ai_flags & VAR_5)) {
   VAR_9->ai_family = VAR_0;
   VAR_12 = FUNC_1(VAR_9->ai_port_space,
            (struct sockaddr_ib **) &VAR_9->ai_src_addr,
            &VAR_9->ai_src_len,
            (struct sockaddr_in6 *) VAR_11->ai_addr,
            VAR_11->ai_addrlen);
  } else {
   VAR_9->ai_family = VAR_11->ai_family;
   VAR_12 = FUNC_2(&VAR_9->ai_src_addr, &VAR_9->ai_src_len,
          VAR_11->ai_addr, VAR_11->ai_addrlen);
  }
 } else {
  if (VAR_11->ai_canonname)
   VAR_9->ai_dst_canonname = FUNC_0(VAR_11->ai_canonname);

  if ((VAR_10->ai_flags & VAR_4) && (VAR_10->ai_family == VAR_0) &&
      (VAR_10->ai_flags & VAR_5)) {
   VAR_9->ai_family = VAR_0;
   VAR_12 = FUNC_1(VAR_9->ai_port_space,
            (struct sockaddr_ib **) &VAR_9->ai_dst_addr,
            &VAR_9->ai_dst_len,
            (struct sockaddr_in6 *) VAR_11->ai_addr,
            VAR_11->ai_addrlen);
  } else {
   VAR_9->ai_family = VAR_11->ai_family;
   VAR_12 = FUNC_2(&VAR_9->ai_dst_addr, &VAR_9->ai_dst_len,
          VAR_11->ai_addr, VAR_11->ai_addrlen);
  }
 }
 return VAR_12;
}
