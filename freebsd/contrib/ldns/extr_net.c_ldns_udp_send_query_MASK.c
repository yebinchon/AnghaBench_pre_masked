
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int ssize_t ;
typedef int socklen_t ;
typedef int ldns_buffer ;


 scalar_t__ FUNC_0 (int *) ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (int,void*,size_t,int ,struct sockaddr*,int ) ;

ssize_t
FUNC_3(ldns_buffer *VAR_0, int VAR_1, const struct sockaddr_storage *VAR_2,
  socklen_t VAR_3)
{
 ssize_t VAR_4;

 VAR_4 = FUNC_2(VAR_1, (void*)FUNC_0(VAR_0),
   FUNC_1(VAR_0), 0, (struct sockaddr *)VAR_2, VAR_3);

 if (VAR_4 == -1 || (size_t)VAR_4 != FUNC_1(VAR_0)) {
  return 0;
 }
 if ((size_t) VAR_4 != FUNC_1(VAR_0)) {
  return 0;
 }
 return VAR_4;
}
