
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cstring {size_t size; int * buf; } ;


 int * FUNC_0 (int) ;

__attribute__((used)) static bool
FUNC_1(struct cstring *VAR_0, size_t VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 <= 1)
  return (0);

 if ((VAR_0->buf = FUNC_0(sizeof(char) * VAR_1)) == ((void*)0))
  return (0);

 VAR_0->size = VAR_1 - 1;

 return (1);
}
