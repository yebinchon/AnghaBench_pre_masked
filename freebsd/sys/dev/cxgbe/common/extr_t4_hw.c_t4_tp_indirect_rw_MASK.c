
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adapter {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct adapter*,int,int,int*,int,int) ;
 int FUNC_1 (struct adapter*,int,int*,int,int,int,int) ;
 scalar_t__ FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct adapter*,int,int,int*,int,int) ;

__attribute__((used)) static void FUNC_4(struct adapter *VAR_4, u32 VAR_5, u32 VAR_6,
         u32 *VAR_7, u32 VAR_8, u32 VAR_9, int VAR_10,
         bool VAR_11)
{
 int VAR_12 = -VAR_0;
 int VAR_13;

 switch (VAR_5) {
 case 129:
  VAR_13 = VAR_2;
  break;
 case 128:
  VAR_13 = VAR_3;
  break;
 case 130:
  VAR_13 = VAR_1;
  break;
 default:
  goto indirect_access;
 }

 if (FUNC_2(VAR_4))
  VAR_12 = FUNC_1(VAR_4, VAR_13, VAR_7, VAR_8, VAR_9, VAR_10,
          VAR_11);

indirect_access:

 if (VAR_12) {
  if (VAR_10)
   FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
      VAR_9);
  else
   FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
       VAR_9);
 }
}
