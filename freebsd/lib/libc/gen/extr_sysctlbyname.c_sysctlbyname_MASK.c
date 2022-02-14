
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char const*,size_t,void*,size_t*,void const*,size_t) ;
 size_t FUNC_2 (int*) ;
 size_t FUNC_3 (char const*) ;
 int FUNC_4 (int*,size_t,void*,size_t*,void const*,size_t) ;
 int FUNC_5 (char const*,int*,size_t*) ;

int
FUNC_6(const char *VAR_2, void *VAR_3, size_t *VAR_4,
    const void *VAR_5, size_t VAR_6)
{
 int VAR_7[VAR_0];
 size_t VAR_8;

 if (FUNC_0() >= VAR_1) {
  VAR_8 = FUNC_3(VAR_2);
  return (FUNC_1(VAR_2, VAR_8, VAR_3, VAR_4, VAR_5,
      VAR_6));
 }
 VAR_8 = FUNC_2(VAR_7);
 if (FUNC_5(VAR_2, VAR_7, &VAR_8) == -1)
  return (-1);
 return (FUNC_4(VAR_7, VAR_8, VAR_3, VAR_4, VAR_5, VAR_6));
}
