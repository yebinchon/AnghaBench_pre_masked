
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int,void*,int,int ) ;

__attribute__((used)) static int
FUNC_2(void *VAR_2, off_t VAR_3, void **VAR_4, int VAR_5)
{
 int VAR_6;

 VAR_6 = *(int *)VAR_2;
 if ((*VAR_4 = FUNC_0(VAR_5)) == ((void*)0))
  return (VAR_1);
 if (FUNC_1(VAR_6, *VAR_4, VAR_5, VAR_3) != VAR_5)
  return (VAR_0);
 return (0);
}
