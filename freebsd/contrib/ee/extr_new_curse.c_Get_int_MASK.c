
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

int
FUNC_0()
{
 int VAR_2;
 int VAR_3;
 int VAR_4;

 VAR_3 = *((unsigned char *) VAR_1++);
 VAR_2 = *((unsigned char *) VAR_1++);
 if (VAR_0)
 {
  VAR_4 = VAR_3;
  VAR_3 = VAR_2;
  VAR_2 = VAR_4;
 }
 if ((VAR_2 == 255) && (VAR_3 == 255))
  return (-1);
 else
  return(VAR_3 + (VAR_2 * 256));
}
