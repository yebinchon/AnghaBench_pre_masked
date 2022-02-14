
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (size_t,char const*,int) ;
 int FUNC_1 (void*,size_t) ;

void *
FUNC_2(size_t VAR_0, size_t VAR_1, const char *VAR_2, int VAR_3)
{
 size_t VAR_4;
 void *VAR_5;

 VAR_4 = VAR_0 * VAR_1;
 if ((VAR_5 = FUNC_0(VAR_4, VAR_2, VAR_3)) != ((void*)0))
  FUNC_1(VAR_5, VAR_4);

 return (VAR_5);
}
