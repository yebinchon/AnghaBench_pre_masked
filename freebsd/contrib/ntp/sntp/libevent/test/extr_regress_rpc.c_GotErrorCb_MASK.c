
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg {int dummy; } ;
struct kill {int dummy; } ;
struct evrpc_status {scalar_t__ error; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct kill*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct evrpc_status *VAR_2,
    struct msg *VAR_3, struct kill *VAR_4, void *VAR_5)
{
 if (VAR_2->error != VAR_0)
  goto done;


 if (FUNC_1(VAR_4) == 0)
  goto done;

 VAR_1 += 1;

done:
 FUNC_0(((void*)0));
}
