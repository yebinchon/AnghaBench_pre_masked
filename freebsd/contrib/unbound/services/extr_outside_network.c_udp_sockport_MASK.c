
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ub_randstate {int dummy; } ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {scalar_t__ sin6_scope_id; scalar_t__ sin6_flowinfo; void* sin6_port; } ;
struct sockaddr_in {void* sin_port; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef void* in_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sockaddr_storage*,int ) ;
 int FUNC_1 (int ,int ,struct sockaddr*,int ,int,int*,int*,int ,int ,int ,int *,int ,int,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sockaddr_in6*,int,struct ub_randstate*) ;

__attribute__((used)) static int
FUNC_4(struct sockaddr_storage* VAR_3, socklen_t VAR_4, int VAR_5,
 int VAR_6, int* VAR_7, struct ub_randstate* VAR_8)
{
 int VAR_9, VAR_10;
 if(FUNC_0(VAR_3, VAR_4)) {
  int VAR_11 = 0;
  struct sockaddr_in6 VAR_12 = *(struct sockaddr_in6*)VAR_3;
  VAR_12.sin6_port = (in_port_t)FUNC_2((uint16_t)VAR_6);
  VAR_12.sin6_flowinfo = 0;
  VAR_12.sin6_scope_id = 0;
  if(VAR_5 != 0) {
   VAR_11 = 1;
   FUNC_3(&VAR_12, VAR_5, VAR_8);
  }
  VAR_9 = FUNC_1(VAR_1, VAR_2,
   (struct sockaddr*)&VAR_12, VAR_4, 1, VAR_7, &VAR_10,
   0, 0, 0, ((void*)0), 0, VAR_11, 0);
 } else {
  struct sockaddr_in* VAR_13 = (struct sockaddr_in*)VAR_3;
  VAR_13->sin_port = (in_port_t)FUNC_2((uint16_t)VAR_6);
  VAR_9 = FUNC_1(VAR_0, VAR_2,
   (struct sockaddr*)VAR_3, VAR_4, 1, VAR_7, &VAR_10,
   0, 0, 0, ((void*)0), 0, 0, 0);
 }
 return VAR_9;
}
