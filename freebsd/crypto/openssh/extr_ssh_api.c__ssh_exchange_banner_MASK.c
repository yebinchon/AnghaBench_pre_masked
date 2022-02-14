
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssh {struct kex* kex; } ;
struct kex {int * client_version_string; int * server_version_string; scalar_t__ server; } ;


 int FUNC_0 (struct ssh*) ;
 int FUNC_1 (struct ssh*,int **) ;
 int FUNC_2 (struct ssh*,int **) ;
 int FUNC_3 (struct ssh*) ;

int
FUNC_4(struct ssh *VAR_0)
{
 struct kex *VAR_1 = VAR_0->kex;
 int VAR_2;






 VAR_2 = 0;
 if (VAR_1->server) {
  if (VAR_1->server_version_string == ((void*)0))
   VAR_2 = FUNC_2(VAR_0, &VAR_1->server_version_string);
  if (VAR_2 == 0 &&
      VAR_1->server_version_string != ((void*)0) &&
      VAR_1->client_version_string == ((void*)0))
   VAR_2 = FUNC_1(VAR_0, &VAR_1->client_version_string);
 } else {
  if (VAR_1->server_version_string == ((void*)0))
   VAR_2 = FUNC_1(VAR_0, &VAR_1->server_version_string);
  if (VAR_2 == 0 &&
      VAR_1->server_version_string != ((void*)0) &&
      VAR_1->client_version_string == ((void*)0))
   VAR_2 = FUNC_2(VAR_0, &VAR_1->client_version_string);
 }
 if (VAR_2 != 0)
  return VAR_2;

 if (VAR_1->server_version_string != ((void*)0) &&
     VAR_1->client_version_string != ((void*)0)) {
  if ((VAR_2 = FUNC_0(VAR_0)) != 0 ||
      (VAR_2 = FUNC_3(VAR_0)) != 0)
   return VAR_2;
 }
 return 0;
}
