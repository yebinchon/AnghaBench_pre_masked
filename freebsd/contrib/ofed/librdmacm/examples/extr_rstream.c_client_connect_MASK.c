
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rdma_addrinfo {int ai_dst_len; int ai_dst_addr; int ai_route_len; scalar_t__ ai_route; int ai_src_len; int ai_src_addr; int ai_family; } ;
struct pollfd {int events; void* fd; } ;
struct addrinfo {int ai_addrlen; int ai_addr; int ai_family; } ;
typedef int socklen_t ;
struct TYPE_6__ {int ai_flags; } ;
struct TYPE_5__ {int ai_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_3__ VAR_9 ;
 int FUNC_0 (struct pollfd*,int ) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct addrinfo*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,int ,TYPE_3__*,struct addrinfo**) ;
 int FUNC_4 (char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (char*,char*) ;
 TYPE_1__ VAR_14 ;
 int FUNC_6 (struct rdma_addrinfo*) ;
 int FUNC_7 (scalar_t__,int ,TYPE_1__*,struct rdma_addrinfo**) ;
 void* VAR_15 ;
 int FUNC_8 (void*,int ,int ) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (void*,int ,int ) ;
 int FUNC_11 (void*,int ,int ,int*,int*) ;
 int FUNC_12 (void*,int ,int ,scalar_t__,int ) ;
 void* FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (void*) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;

__attribute__((used)) static int FUNC_15(void)
{
 struct rdma_addrinfo *VAR_18 = ((void*)0), *VAR_19 = ((void*)0);
 struct addrinfo *VAR_20, *VAR_21;
 struct pollfd VAR_22;
 int VAR_23, VAR_24;
 socklen_t VAR_25;

 VAR_23 = VAR_17 ? FUNC_7(VAR_10, VAR_13, &VAR_14, &VAR_18) :
    FUNC_3(VAR_10, VAR_13, &VAR_9, &VAR_20);

 if (VAR_23) {
  FUNC_5("getaddrinfo: %s\n", FUNC_2(VAR_23));
  return VAR_23;
 }

 if (VAR_16) {
  if (VAR_17) {
   VAR_14.ai_flags |= VAR_3;
   VAR_23 = FUNC_7(VAR_16, VAR_13, &VAR_14, &VAR_19);
  } else {
   VAR_9.ai_flags |= VAR_0;
   VAR_23 = FUNC_3(VAR_16, VAR_13, &VAR_9, &VAR_21);
  }
  if (VAR_23) {
   FUNC_5("getaddrinfo src_addr: %s\n", FUNC_2(VAR_23));
   return VAR_23;
  }
 }

 VAR_15 = VAR_18 ? FUNC_13(VAR_18->ai_family, VAR_5, 0) :
     FUNC_13(VAR_20->ai_family, VAR_5, 0);
 if (VAR_15 < 0) {
  FUNC_4("rsocket");
  VAR_23 = VAR_15;
  goto free;
 }

 FUNC_14(VAR_15);

 if (VAR_16) {
  VAR_23 = VAR_18 ? FUNC_8(VAR_15, VAR_19->ai_src_addr, VAR_19->ai_src_len) :
       FUNC_8(VAR_15, VAR_21->ai_addr, VAR_21->ai_addrlen);
  if (VAR_23) {
   FUNC_4("rbind");
   goto close;
  }
 }

 if (VAR_18 && VAR_18->ai_route) {
  VAR_23 = FUNC_12(VAR_15, VAR_6, VAR_4, VAR_18->ai_route,
        VAR_18->ai_route_len);
  if (VAR_23) {
   FUNC_4("rsetsockopt RDMA_ROUTE");
   goto close;
  }
 }

 VAR_23 = VAR_18 ? FUNC_10(VAR_15, VAR_18->ai_dst_addr, VAR_18->ai_dst_len) :
      FUNC_10(VAR_15, VAR_20->ai_addr, VAR_20->ai_addrlen);
 if (VAR_23 && (VAR_11 != VAR_1)) {
  FUNC_4("rconnect");
  goto close;
 }

 if (VAR_23 && (VAR_11 == VAR_1)) {
  VAR_22.fd = VAR_15;
  VAR_22.events = VAR_2;
  VAR_23 = FUNC_0(&VAR_22, VAR_12);
  if (VAR_23) {
   FUNC_4("rpoll");
   goto close;
  }

  VAR_25 = sizeof VAR_24;
  VAR_23 = FUNC_11(VAR_15, VAR_7, VAR_8, &VAR_24, &VAR_25);
  if (VAR_23)
   goto close;
  if (VAR_24) {
   VAR_23 = -1;
   VAR_11 = VAR_24;
   FUNC_4("async rconnect");
  }
 }

close:
 if (VAR_23)
  FUNC_9(VAR_15);
free:
 if (VAR_18)
  FUNC_6(VAR_18);
 else
  FUNC_1(VAR_20);
 return VAR_23;
}
