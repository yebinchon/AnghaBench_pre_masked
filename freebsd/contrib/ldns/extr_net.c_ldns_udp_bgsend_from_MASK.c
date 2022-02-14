
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int ldns_buffer ;


 int FUNC_0 (int,struct sockaddr const*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sockaddr_storage const*,struct timeval) ;
 scalar_t__ FUNC_3 (int *,int,struct sockaddr_storage const*,int ) ;

__attribute__((used)) static int
FUNC_4(ldns_buffer *VAR_0,
  const struct sockaddr_storage *VAR_1 , socklen_t VAR_2,
  const struct sockaddr_storage *VAR_3, socklen_t VAR_4,
  struct timeval VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_2(VAR_1, VAR_5);

 if (VAR_6 == 0) {
  return 0;
 }

 if (VAR_3 && FUNC_0(VAR_6, (const struct sockaddr*)VAR_3, VAR_4) == -1){
  return 0;
 }

 if (FUNC_3(VAR_0, VAR_6, VAR_1, VAR_2) == 0) {
  FUNC_1(VAR_6);
  return 0;
 }
 return VAR_6;
}
