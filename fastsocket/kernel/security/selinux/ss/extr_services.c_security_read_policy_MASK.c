
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct policy_file {unsigned long len; void* data; } ;
typedef unsigned long ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct policy_file*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 unsigned long FUNC_3 () ;
 int VAR_4 ;
 void* FUNC_4 (unsigned long) ;

int FUNC_5(void **VAR_5, ssize_t *VAR_6)
{
 int VAR_7;
 struct policy_file VAR_8;

 if (!VAR_4)
  return -VAR_0;

 *VAR_6 = FUNC_3();

 *VAR_5 = FUNC_4(*VAR_6);
 if (!*VAR_5)
  return -VAR_1;

 VAR_8.data = *VAR_5;
 VAR_8.len = *VAR_6;

 FUNC_1(&VAR_2);
 VAR_7 = FUNC_0(&VAR_3, &VAR_8);
 FUNC_2(&VAR_2);

 if (VAR_7)
  return VAR_7;

 *VAR_6 = (unsigned long)VAR_8.data - (unsigned long)*VAR_5;
 return 0;

}
