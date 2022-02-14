
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rdma_addrinfo {int ai_src_len; int ai_src_addr; int ai_family; } ;
struct addrinfo {int ai_addrlen; int ai_addr; int ai_family; } ;
struct TYPE_6__ {int ai_flags; } ;
struct TYPE_5__ {int ai_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__ VAR_5 ;
 int FUNC_0 (struct addrinfo*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int ,int ,TYPE_3__*,struct addrinfo**) ;
 int VAR_6 ;
 int FUNC_3 (char*) ;
 int VAR_7 ;
 int FUNC_4 (char*,char*) ;
 TYPE_1__ VAR_8 ;
 int FUNC_5 (int,int ,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct rdma_addrinfo*) ;
 int FUNC_8 (int ,int ,TYPE_1__*,struct rdma_addrinfo**) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int,int ,int ,int*,int) ;
 int FUNC_11 (int ,int ,int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static int FUNC_12(void)
{
 struct rdma_addrinfo *VAR_11 = ((void*)0);
 struct addrinfo *VAR_12;
 int VAR_13, VAR_14;

 if (VAR_10) {
  VAR_8.ai_flags |= VAR_1;
  VAR_14 = FUNC_8(VAR_9, VAR_7, &VAR_8, &VAR_11);
 } else {
  VAR_5.ai_flags |= VAR_0;
  VAR_14 = FUNC_2(VAR_9, VAR_7, &VAR_5, &VAR_12);
 }
 if (VAR_14) {
  FUNC_4("getaddrinfo: %s\n", FUNC_1(VAR_14));
  return VAR_14;
 }

 VAR_6 = VAR_11 ? FUNC_11(VAR_11->ai_family, VAR_2, 0) :
      FUNC_11(VAR_12->ai_family, VAR_2, 0);
 if (VAR_6 < 0) {
  FUNC_3("rsocket");
  VAR_14 = VAR_6;
  goto free;
 }

 VAR_13 = 1;
 VAR_14 = FUNC_10(VAR_6, VAR_3, VAR_4, &VAR_13, sizeof VAR_13);
 if (VAR_14) {
  FUNC_3("rsetsockopt SO_REUSEADDR");
  goto close;
 }

 VAR_14 = VAR_11 ? FUNC_5(VAR_6, VAR_11->ai_src_addr, VAR_11->ai_src_len) :
      FUNC_5(VAR_6, VAR_12->ai_addr, VAR_12->ai_addrlen);
 if (VAR_14) {
  FUNC_3("rbind");
  goto close;
 }

 VAR_14 = FUNC_9(VAR_6, 1);
 if (VAR_14)
  FUNC_3("rlisten");

close:
 if (VAR_14)
  FUNC_6(VAR_6);
free:
 if (VAR_11)
  FUNC_7(VAR_11);
 else
  FUNC_0(VAR_12);
 return VAR_14;
}
