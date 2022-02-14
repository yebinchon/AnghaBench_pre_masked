
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ port_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int,int) ;
 scalar_t__* VAR_1 ;

int FUNC_1 (port_t *VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3=0, VAR_4=0; VAR_1[VAR_3] && VAR_4<VAR_0; VAR_3++)
  if (FUNC_0 (VAR_1[VAR_3], -1, -1))
   VAR_2[VAR_4++] = VAR_1[VAR_3];
 return VAR_4;
}
