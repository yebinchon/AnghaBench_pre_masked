
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {size_t uio_offset; scalar_t__ uio_resid; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,size_t,struct uio*) ;

int
FUNC_1(void *VAR_2, int VAR_3, struct uio *VAR_4)
{
 size_t VAR_5, VAR_6;

 if (VAR_4->uio_offset < 0 || VAR_4->uio_resid < 0 ||
     (VAR_5 = VAR_4->uio_offset) != VAR_4->uio_offset)
  return (VAR_0);
 if (VAR_3 <= 0 || VAR_5 >= VAR_3)
  return (0);
 if ((VAR_6 = VAR_3 - VAR_5) > VAR_1)
  return (VAR_0);
 return (FUNC_0((char *)VAR_2 + VAR_5, VAR_6, VAR_4));
}
