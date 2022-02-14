
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

int FUNC_4(void)
{
 int VAR_3;

 VAR_3 = FUNC_2(&VAR_1, 0);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_0, &VAR_2);
 if (VAR_3 < 0)
  goto error;

 return 0;

error:
 FUNC_0("Can't register CMTP socket");
 FUNC_3(&VAR_1);
 return VAR_3;
}
