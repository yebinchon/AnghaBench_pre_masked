
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vm {int dummy; } ;
typedef enum exc_class { ____Placeholder_exc_class } exc_class ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct vm*,int,char*,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct vm*,int ) ;

__attribute__((used)) static int
FUNC_4(struct vm *VAR_9, int VAR_10, uint64_t VAR_11, uint64_t VAR_12,
    uint64_t *VAR_13)
{
 enum exc_class VAR_14, VAR_15;
 int VAR_16, VAR_17;

 FUNC_0(VAR_11 & VAR_7, ("info1 %#lx is not valid", VAR_11));
 FUNC_0(VAR_12 & VAR_7, ("info2 %#lx is not valid", VAR_12));





 VAR_16 = VAR_11 & VAR_6;
 VAR_17 = VAR_11 & 0xff;
 if (VAR_16 == VAR_5 && VAR_17 == VAR_3) {
  FUNC_1(VAR_9, VAR_10, "triple fault: info1(%#lx), info2(%#lx)",
      VAR_11, VAR_12);
  FUNC_3(VAR_9, VAR_8);
  *VAR_13 = 0;
  return (0);
 }




 VAR_14 = FUNC_2(VAR_11);
 VAR_15 = FUNC_2(VAR_12);
 if ((VAR_14 == VAR_1 && VAR_15 == VAR_1) ||
     (VAR_14 == VAR_2 && VAR_15 != VAR_0)) {

  *VAR_13 = VAR_3;
  *VAR_13 |= VAR_7 | VAR_5;
  *VAR_13 |= VAR_4;
 } else {

  *VAR_13 = VAR_12;
 }
 return (1);
}
