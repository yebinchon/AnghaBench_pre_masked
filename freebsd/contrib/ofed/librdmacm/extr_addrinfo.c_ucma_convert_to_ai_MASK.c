
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_addrinfo {int ai_flags; scalar_t__ ai_family; int ai_qp_type; int ai_port_space; int ai_dst_canonname; int ai_dst_addr; int ai_dst_len; int ai_src_addr; int ai_src_len; } ;
struct addrinfo {scalar_t__ ai_family; int * ai_next; int ai_canonname; int ai_addr; int ai_addrlen; void* ai_protocol; int ai_socktype; int ai_flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct addrinfo*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct addrinfo *VAR_9,
          const struct rdma_addrinfo *VAR_10)
{
 FUNC_0(VAR_9, 0, sizeof(*VAR_9));
 if (VAR_10->ai_flags & VAR_6)
  VAR_9->ai_flags = VAR_2;
 if (VAR_10->ai_flags & VAR_5)
  VAR_9->ai_flags |= VAR_1;
 if (VAR_10->ai_family != VAR_0)
  VAR_9->ai_family = VAR_10->ai_family;

 switch (VAR_10->ai_qp_type) {
 case 136:
 case 135:
 case 132:
 case 133:
  VAR_9->ai_socktype = VAR_8;
  break;
 case 134:
  VAR_9->ai_socktype = VAR_7;
  break;
 }

 switch (VAR_10->ai_port_space) {
 case 129:
  VAR_9->ai_protocol = VAR_3;
  break;
 case 130:
 case 128:
  VAR_9->ai_protocol = VAR_4;
  break;
 case 131:
  if (VAR_9->ai_socktype == VAR_8)
   VAR_9->ai_protocol = VAR_3;
  else if (VAR_9->ai_socktype == VAR_7)
   VAR_9->ai_protocol = VAR_4;
  break;
 }

 if (VAR_10->ai_flags & VAR_6) {
  VAR_9->ai_addrlen = VAR_10->ai_src_len;
  VAR_9->ai_addr = VAR_10->ai_src_addr;
 } else {
  VAR_9->ai_addrlen = VAR_10->ai_dst_len;
  VAR_9->ai_addr = VAR_10->ai_dst_addr;
 }
 VAR_9->ai_canonname = VAR_10->ai_dst_canonname;
 VAR_9->ai_next = ((void*)0);
}
