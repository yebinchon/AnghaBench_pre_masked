
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_addrinfo {int ai_dst_len; int ai_dst_addr; int ai_family; } ;
struct pollfd {int events; void* fd; } ;
struct addrinfo {int ai_addrlen; int ai_addr; int ai_family; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pollfd*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct addrinfo*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int *,struct addrinfo**) ;
 int FUNC_4 (char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (char*,char*) ;
 int VAR_10 ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*,int ,int ) ;
 int FUNC_8 (struct rdma_addrinfo*) ;
 int FUNC_9 (int ,int ,int *,struct rdma_addrinfo**) ;
 int FUNC_10 (void*,int ,int ,int*,int*) ;
 void* VAR_11 ;
 void* FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (void*) ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static int FUNC_13(void)
{
 struct rdma_addrinfo *VAR_13 = ((void*)0);
 struct addrinfo *VAR_14;
 struct pollfd VAR_15;
 int VAR_16, VAR_17;
 socklen_t VAR_18;

 VAR_16 = VAR_12 ? FUNC_9(VAR_6, VAR_9, &VAR_10, &VAR_13) :
    FUNC_3(VAR_6, VAR_9, &VAR_5, &VAR_14);
 if (VAR_16) {
  FUNC_5("getaddrinfo: %s\n", FUNC_2(VAR_16));
  return VAR_16;
 }

 VAR_11 = VAR_13 ? FUNC_11(VAR_13->ai_family, VAR_2, 0) :
     FUNC_11(VAR_14->ai_family, VAR_2, 0);
 if (VAR_11 < 0) {
  FUNC_4("rsocket");
  VAR_16 = VAR_11;
  goto free;
 }

 FUNC_12(VAR_11);


 VAR_16 = VAR_13 ? FUNC_7(VAR_11, VAR_13->ai_dst_addr, VAR_13->ai_dst_len) :
      FUNC_7(VAR_11, VAR_14->ai_addr, VAR_14->ai_addrlen);
 if (VAR_16 && (VAR_7 != VAR_0)) {
  FUNC_4("rconnect");
  goto close;
 }

 if (VAR_16 && (VAR_7 == VAR_0)) {
  VAR_15.fd = VAR_11;
  VAR_15.events = VAR_1;
  VAR_16 = FUNC_0(&VAR_15, VAR_8);
  if (VAR_16) {
   FUNC_4("rpoll");
   goto close;
  }

  VAR_18 = sizeof VAR_17;
  VAR_16 = FUNC_10(VAR_11, VAR_3, VAR_4, &VAR_17, &VAR_18);
  if (VAR_16)
   goto close;
  if (VAR_17) {
   VAR_16 = -1;
   VAR_7 = VAR_17;
   FUNC_4("async rconnect");
  }
 }

close:
 if (VAR_16)
  FUNC_6(VAR_11);
free:
 if (VAR_13)
  FUNC_8(VAR_13);
 else
  FUNC_1(VAR_14);
 return VAR_16;
}
