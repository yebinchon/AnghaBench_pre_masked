
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned char const* VAR_1 ;

int FUNC_0(const unsigned char *VAR_2)
{
 int VAR_3;

 for (VAR_3=0; VAR_3<VAR_0; VAR_3++)
  {
  if (VAR_2[VAR_3] != VAR_1[VAR_2[VAR_3]])
   return(0);
  }
 return(1);
}
