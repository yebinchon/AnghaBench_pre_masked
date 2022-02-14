
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct sockaddr_storage {int dummy; } ;
typedef int socklen_t ;
typedef int ldns_buffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct sockaddr_storage const*,int ,struct sockaddr_storage const*,int ,struct timeval) ;
 scalar_t__ FUNC_2 (int *,int,struct sockaddr_storage const*,int ) ;

__attribute__((used)) static int
FUNC_3(ldns_buffer *VAR_0,
  const struct sockaddr_storage *VAR_1, socklen_t VAR_2,
         const struct sockaddr_storage *VAR_3, socklen_t VAR_4,
  struct timeval VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

 if (VAR_6 == 0) {
  return 0;
 }

 if (FUNC_2(VAR_0, VAR_6, VAR_1, VAR_2) == 0) {
  FUNC_0(VAR_6);
  return 0;
 }

 return VAR_6;
}
