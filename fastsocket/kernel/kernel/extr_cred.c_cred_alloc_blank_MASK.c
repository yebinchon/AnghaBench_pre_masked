
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cred {int magic; int usage; TYPE_1__* tgcred; } ;
struct TYPE_2__ {int usage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cred*) ;
 int FUNC_1 (int *,int) ;
 int VAR_2 ;
 int FUNC_2 (int ,struct cred*) ;
 struct cred* FUNC_3 (int ,int ) ;
 TYPE_1__* FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (struct cred*,int ) ;

struct cred *FUNC_6(void)
{
 struct cred *VAR_3;

 VAR_3 = FUNC_3(VAR_2, VAR_1);
 if (!VAR_3)
  return ((void*)0);
 FUNC_1(&VAR_3->usage, 1);

 if (FUNC_5(VAR_3, VAR_1) < 0)
  goto error;




 return VAR_3;

error:
 FUNC_0(VAR_3);
 return ((void*)0);
}
