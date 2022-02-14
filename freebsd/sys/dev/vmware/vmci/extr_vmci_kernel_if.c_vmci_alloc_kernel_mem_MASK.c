
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (size_t,int ,int ,int ,int,int,int) ;

void *
FUNC_1(size_t VAR_4, int VAR_5)
{
 void *VAR_6;

 if ((VAR_5 & VAR_3) != 0)
  VAR_6 = FUNC_0(VAR_4, VAR_0, VAR_1, 0, 0xFFFFFFFF,
      8, 1024 * 1024);
 else
  VAR_6 = FUNC_0(VAR_4, VAR_0, VAR_2, 0, 0xFFFFFFFF,
      8, 1024 * 1024);

 return (VAR_6);
}
