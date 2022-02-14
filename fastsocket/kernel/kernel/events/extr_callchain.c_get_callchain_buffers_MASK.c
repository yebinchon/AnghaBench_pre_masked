
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;

int FUNC_5(void)
{
 int VAR_5 = 0;
 int VAR_6;

 FUNC_3(&VAR_3);

 VAR_6 = FUNC_2(&VAR_4);
 if (FUNC_0(VAR_6 < 1)) {
  VAR_5 = -VAR_0;
  goto exit;
 }

 if (VAR_6 > 1) {

  if (!VAR_2)
   VAR_5 = -VAR_1;
  goto exit;
 }

 VAR_5 = FUNC_1();
exit:
 FUNC_4(&VAR_3);

 return VAR_5;
}
