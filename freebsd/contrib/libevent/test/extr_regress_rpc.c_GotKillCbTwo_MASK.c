
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg {int dummy; } ;
struct kill {int dummy; } ;
struct evrpc_status {scalar_t__ error; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct kill*,char*,char**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(struct evrpc_status *VAR_3,
    struct msg *VAR_4, struct kill *VAR_5, void *VAR_6)
{
 char *VAR_7;
 char *VAR_8;

 if (VAR_3->error != VAR_0)
  goto done;

 if (FUNC_0(VAR_5, VAR_7, &VAR_7) == -1) {
  FUNC_2(VAR_1, "get weapon\n");
  goto done;
 }
 if (FUNC_0(VAR_5, VAR_8, &VAR_8) == -1) {
  FUNC_2(VAR_1, "get action\n");
  goto done;
 }

 if (FUNC_3(VAR_7, "dagger"))
  goto done;

 if (FUNC_3(VAR_8, "wave around like an idiot"))
  goto done;

 VAR_2 += 1;

done:
 if (VAR_2 == 2)
  FUNC_1(((void*)0));
}
