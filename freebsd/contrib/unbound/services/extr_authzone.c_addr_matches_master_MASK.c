
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct auth_master {int host; int http; scalar_t__ allow_notify; int list; } ;
typedef scalar_t__ socklen_t ;


 int VAR_0 ;
 int FUNC_0 (struct sockaddr_storage*,int,struct sockaddr_storage*,int,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,struct sockaddr_storage*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct sockaddr_storage*,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,struct sockaddr_storage*,scalar_t__*) ;
 scalar_t__ FUNC_4 (int ,int ,struct sockaddr_storage*,scalar_t__*,int*) ;
 scalar_t__ FUNC_5 (struct sockaddr_storage*,scalar_t__,struct sockaddr_storage*,scalar_t__) ;
 int * FUNC_6 (int ,char) ;
 int * FUNC_7 (int ,char) ;

__attribute__((used)) static int
FUNC_8(struct auth_master* VAR_1, struct sockaddr_storage* VAR_2,
 socklen_t VAR_3, struct auth_master** VAR_4)
{
 struct sockaddr_storage VAR_5;
 socklen_t VAR_6 = 0;
 int VAR_7 = 0;
 if(FUNC_1(VAR_1->list, VAR_2, VAR_3)) {
  *VAR_4 = VAR_1;
  return 1;
 }



 if(FUNC_3(VAR_1->host, &VAR_5, &VAR_6) &&
  FUNC_5(VAR_2, VAR_3, &VAR_5, VAR_6)==0) {
  *VAR_4 = VAR_1;
  return 1;
 }


 if(VAR_1->allow_notify && !VAR_1->http &&
  FUNC_6(VAR_1->host, '/') != ((void*)0) &&
  FUNC_6(VAR_1->host, '/') == FUNC_7(VAR_1->host, '/') &&
  FUNC_4(VAR_1->host, VAR_0, &VAR_5, &VAR_6,
  &VAR_7) && VAR_6 == VAR_3) {
  if(FUNC_0(VAR_2, (FUNC_2(VAR_2, VAR_3)?128:32),
   &VAR_5, VAR_7, VAR_6) >= VAR_7) {
   *VAR_4 = ((void*)0);

   return 1;
  }
 }
 return 0;
}
