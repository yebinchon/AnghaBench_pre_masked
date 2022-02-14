
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {unsigned long st_size; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,struct stat*) ;
 void* FUNC_2 (int *,unsigned long,int,int ,int,int ) ;
 int FUNC_3 (char const*,int ) ;

void *FUNC_4(const char *VAR_5, unsigned long *VAR_6)
{
 struct stat VAR_7;
 void *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_5, VAR_2);
 if (VAR_9 < 0 || FUNC_1(VAR_9, &VAR_7) != 0)
  return ((void*)0);

 *VAR_6 = VAR_7.st_size;
 VAR_8 = FUNC_2(((void*)0), *VAR_6, VAR_3|VAR_4, VAR_1, VAR_9, 0);
 FUNC_0(VAR_9);

 if (VAR_8 == VAR_0)
  return ((void*)0);
 return VAR_8;
}
