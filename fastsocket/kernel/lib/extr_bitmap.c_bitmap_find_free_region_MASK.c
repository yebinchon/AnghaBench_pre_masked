
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long*,int,int,int ) ;

int FUNC_1(unsigned long *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;

 for (VAR_6 = 0 ; (VAR_7 = VAR_6 + (1 << VAR_5)) <= VAR_4; VAR_6 = VAR_7) {
  if (!FUNC_0(VAR_3, VAR_6, VAR_5, VAR_2))
   continue;
  FUNC_0(VAR_3, VAR_6, VAR_5, VAR_1);
  return VAR_6;
 }
 return -VAR_0;
}
