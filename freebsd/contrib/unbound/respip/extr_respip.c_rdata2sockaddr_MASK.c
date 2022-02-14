
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int sin6_addr; int sin6_family; int sin_addr; int sin_family; } ;
struct sockaddr_in {int sin6_addr; int sin6_family; int sin_addr; int sin_family; } ;
struct packed_rrset_data {int* rr_len; scalar_t__* rr_data; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,scalar_t__,int) ;
 int FUNC_1 (struct sockaddr_in6*,int ,int) ;

__attribute__((used)) static int
FUNC_2(const struct packed_rrset_data* VAR_4, uint16_t VAR_5, size_t VAR_6,
 struct sockaddr_storage* VAR_7, socklen_t* VAR_8)
{


 if(VAR_5 == VAR_2 && VAR_4->rr_len[VAR_6] == 6) {
  struct sockaddr_in* VAR_9 = (struct sockaddr_in*)VAR_7;

  FUNC_1(VAR_9, 0, sizeof(*VAR_9));
  VAR_9->sin_family = VAR_0;
  FUNC_0(&VAR_9->sin_addr, VAR_4->rr_data[VAR_6] + 2,
   sizeof(VAR_9->sin_addr));
  *VAR_8 = sizeof(*VAR_9);
  return 1;
 } else if(VAR_5 == VAR_3 && VAR_4->rr_len[VAR_6] == 18) {
  struct sockaddr_in6* VAR_10 = (struct sockaddr_in6*)VAR_7;

  FUNC_1(VAR_10, 0, sizeof(*VAR_10));
  VAR_10->sin6_family = VAR_1;
  FUNC_0(&VAR_10->sin6_addr, VAR_4->rr_data[VAR_6] + 2,
   sizeof(VAR_10->sin6_addr));
  *VAR_8 = sizeof(*VAR_10);
  return 1;
 }
 return 0;
}
