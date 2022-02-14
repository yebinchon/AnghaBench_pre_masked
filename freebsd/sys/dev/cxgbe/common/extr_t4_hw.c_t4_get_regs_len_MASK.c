
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int flags; } ;





 int FUNC_0 (struct adapter*,char*,unsigned int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_1 (struct adapter*) ;

unsigned int FUNC_2(struct adapter *VAR_4)
{
 unsigned int VAR_5 = FUNC_1(VAR_4);

 switch (VAR_5) {
 case 130:
  if (VAR_4->flags & VAR_1)
   return VAR_0;
  return VAR_2;

 case 129:
 case 128:
  if (VAR_4->flags & VAR_1)
   return VAR_0;
  return VAR_3;
 }

 FUNC_0(VAR_4,
  "Unsupported chip version %d\n", VAR_5);
 return 0;
}
