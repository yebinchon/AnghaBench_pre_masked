
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char* VAR_0 ;

__attribute__((used)) static __inline unsigned char
FUNC_0(unsigned char VAR_1)
{
     int VAR_2;
     for(VAR_2 = 0; VAR_2 < 64; VAR_2++)
   if(VAR_0[VAR_2] == VAR_1)
        break;
     return VAR_2;
}
