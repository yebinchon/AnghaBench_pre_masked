
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct timeval {int dummy; } ;
struct sockaddr_storage {int dummy; } ;
typedef int socklen_t ;
typedef int ldns_status ;
typedef int ldns_buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,struct timeval,int ) ;
 int FUNC_3 (int *,struct sockaddr_storage const*,int ,struct sockaddr_storage const*,int ,struct timeval) ;
 int * FUNC_4 (int,size_t*,int *,int *) ;

__attribute__((used)) static ldns_status
FUNC_5(uint8_t **VAR_3, ldns_buffer *VAR_4,
  const struct sockaddr_storage *VAR_5 , socklen_t VAR_6,
  const struct sockaddr_storage *VAR_7, socklen_t VAR_8,
  struct timeval VAR_9, size_t *VAR_10)
{
 int VAR_11;
 uint8_t *VAR_12;

 VAR_11 = FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);

 if (VAR_11 == 0) {
  return VAR_2;
 }


 if(!FUNC_2(VAR_11, VAR_9, 0)) {
  FUNC_0(VAR_11);
  return VAR_0;
 }




        FUNC_1(VAR_11);

 VAR_12 = FUNC_4(VAR_11, VAR_10, ((void*)0), ((void*)0));
 FUNC_0(VAR_11);

 if (*VAR_10 == 0) {

  return VAR_0;
 }

 *VAR_3 = VAR_12;
 return VAR_1;
}
