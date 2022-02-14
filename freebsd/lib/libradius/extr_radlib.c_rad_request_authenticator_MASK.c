
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rad_handle {scalar_t__ out; } ;
typedef int ssize_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,scalar_t__,size_t) ;

ssize_t
FUNC_1(struct rad_handle *VAR_2, char *VAR_3, size_t VAR_4)
{
 if (VAR_4 < VAR_0)
  return (-1);
 FUNC_0(VAR_3, VAR_2->out + VAR_1, VAR_0);
 if (VAR_4 > VAR_0)
  VAR_3[VAR_0] = '\0';
 return (VAR_0);
}
