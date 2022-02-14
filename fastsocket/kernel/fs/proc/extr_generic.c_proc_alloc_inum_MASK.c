
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int *,unsigned int*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,unsigned int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(unsigned int *VAR_8)
{
 unsigned int VAR_9;
 int VAR_10;

retry:
 if (!FUNC_1(&VAR_6, VAR_3))
  return -VAR_1;

 FUNC_3(&VAR_7);
 VAR_10 = FUNC_0(&VAR_6, &VAR_9);
 FUNC_4(&VAR_7);
 if (VAR_10 == -VAR_0)
  goto retry;
 else if (VAR_10)
  return VAR_10;

 if (VAR_9 > VAR_5 - VAR_4) {
  FUNC_3(&VAR_7);
  FUNC_2(&VAR_6, VAR_9);
  FUNC_4(&VAR_7);
  return -VAR_2;
 }
 *VAR_8 = VAR_4 + VAR_9;
 return 0;
}
