
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct httpio {size_t bufsize; char* buf; } ;


 char* FUNC_0 (char*,size_t) ;

__attribute__((used)) static inline int
FUNC_1(struct httpio *VAR_0, size_t VAR_1)
{
 char *VAR_2;

 if (VAR_0->bufsize >= VAR_1)
  return (0);

 if ((VAR_2 = FUNC_0(VAR_0->buf, VAR_1)) == ((void*)0))
  return (-1);
 VAR_0->buf = VAR_2;
 VAR_0->bufsize = VAR_1;
 return (0);
}
