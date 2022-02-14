
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (char*,int *,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,char*) ;

int FUNC_5(void)
{
 int VAR_4;

 VAR_3 = FUNC_0("o2cb", ((void*)0), VAR_1);
 if (!VAR_3)
  return -VAR_0;





 VAR_4 = FUNC_4(((void*)0), &VAR_3->kobj, "o2cb");
 if (VAR_4)
  goto error;

 VAR_4 = FUNC_3(&VAR_3->kobj, &VAR_2);
 if (VAR_4)
  goto error;

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4)
  goto error;
 return 0;
error:
 FUNC_1(VAR_3);
 return VAR_4;
}
