
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibuf {size_t max; } ;


 struct ibuf* FUNC_0 (size_t) ;

struct ibuf *
FUNC_1(size_t VAR_0, size_t VAR_1)
{
 struct ibuf *VAR_2;

 if (VAR_1 < VAR_0)
  return (((void*)0));

 if ((VAR_2 = FUNC_0(VAR_0)) == ((void*)0))
  return (((void*)0));

 if (VAR_1 > 0)
  VAR_2->max = VAR_1;

 return (VAR_2);
}
