
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netid_af {int dummy; } ;
struct netconfig {int dummy; } ;
struct __rpc_sockinfo {scalar_t__ si_af; scalar_t__ si_proto; } ;
struct TYPE_2__ {scalar_t__ af; scalar_t__ protocol; char* netid; } ;


 int FUNC_0 (struct netconfig*) ;
 struct netconfig* FUNC_1 (char*) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_2 (char*,char*) ;

int
FUNC_3(struct __rpc_sockinfo *VAR_1, const char **VAR_2)
{
 int VAR_3;
 struct netconfig *VAR_4;

 VAR_4 = FUNC_1("local");

 for (VAR_3 = 0; VAR_3 < (sizeof VAR_0) / (sizeof (struct netid_af)); VAR_3++) {
  if (VAR_0[VAR_3].af == VAR_1->si_af &&
      VAR_0[VAR_3].protocol == VAR_1->si_proto) {
   if (FUNC_2(VAR_0[VAR_3].netid, "local") == 0 && VAR_4 == ((void*)0)) {
    if (VAR_2)
     *VAR_2 = "unix";
   } else {
    if (VAR_2)
     *VAR_2 = VAR_0[VAR_3].netid;
   }
   if (VAR_4 != ((void*)0))
    FUNC_0(VAR_4);
   return 1;
  }
 }
 if (VAR_4 != ((void*)0))
  FUNC_0(VAR_4);

 return 0;
}
