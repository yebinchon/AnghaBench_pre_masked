
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;




 int FUNC_4 (int) ;
 int FUNC_5 (struct adapter*) ;
 int FUNC_6 (struct adapter*,int ) ;
 int FUNC_7 (struct adapter*,int,int) ;

__attribute__((used)) static int
FUNC_8(struct adapter *VAR_10, int VAR_11, uint32_t VAR_12, uint32_t VAR_13,
    uint32_t *VAR_14)
{
 uint32_t VAR_15, VAR_16, VAR_17;


 if (VAR_12 & 3 || VAR_13 & 3 || VAR_13 == 0)
  return (VAR_5);

 VAR_15 = FUNC_6(VAR_10, VAR_4);
 switch (FUNC_4(VAR_11)) {
 case 131:
  if (!(VAR_15 & VAR_6))
   return (VAR_5);
  VAR_16 = FUNC_6(VAR_10, VAR_0);
  VAR_17 = FUNC_0(VAR_16) << 20;
  break;
 case 130:
  if (!(VAR_15 & VAR_7))
   return (VAR_5);
  VAR_16 = FUNC_6(VAR_10, VAR_1);
  VAR_17 = FUNC_1(VAR_16) << 20;
  break;
 case 129:
  if (!(VAR_15 & VAR_9))
   return (VAR_5);
  VAR_16 = FUNC_6(VAR_10, VAR_3);
  VAR_17 = FUNC_3(VAR_16) << 20;
  break;
 case 128:
  if (!FUNC_5(VAR_10) || !(VAR_15 & VAR_8))
   return (VAR_5);
  VAR_16 = FUNC_6(VAR_10, VAR_2);
  VAR_17 = FUNC_2(VAR_16) << 20;
  break;
 default:
  return (VAR_5);
 }

 *VAR_14 = VAR_17 + VAR_12;
 return (FUNC_7(VAR_10, *VAR_14, VAR_13));
}
