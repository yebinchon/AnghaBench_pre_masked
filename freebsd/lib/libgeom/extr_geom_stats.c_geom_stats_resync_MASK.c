
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (void*,int,int ,int ,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;

void
FUNC_1(void)
{
 void *VAR_7;

 if (VAR_6 == -1)
  return;
 for (;;) {
  VAR_7 = FUNC_0(VAR_5, (VAR_3 + 1) * VAR_4,
      VAR_2, VAR_1, VAR_6, 0);
  if (VAR_7 == VAR_0)
   break;
  else
   VAR_5 = VAR_7;
  VAR_3++;
 }
}
