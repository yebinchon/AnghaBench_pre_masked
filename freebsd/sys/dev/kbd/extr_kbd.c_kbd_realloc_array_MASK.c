
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int keyboard_t ;
typedef int keyboard_switch_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int **,int **,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int **,int ) ;
 int ** VAR_6 ;
 int ** VAR_7 ;
 int VAR_8 ;
 int ** FUNC_2 (int,int ,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(void)
{
 keyboard_t **VAR_9;
 keyboard_switch_t **VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_12 = FUNC_5();
 VAR_11 = FUNC_4(VAR_8 + VAR_0, VAR_0);
 VAR_9 = FUNC_2(sizeof(*VAR_9)*VAR_11, VAR_2, VAR_3|VAR_4);
 if (VAR_9 == ((void*)0)) {
  FUNC_6(VAR_12);
  return (VAR_1);
 }
 VAR_10 = FUNC_2(sizeof(*VAR_10)*VAR_11, VAR_2,
       VAR_3|VAR_4);
 if (VAR_10 == ((void*)0)) {
  FUNC_1(VAR_9, VAR_2);
  FUNC_6(VAR_12);
  return (VAR_1);
 }
 FUNC_0(VAR_7, VAR_9, sizeof(*VAR_7)*VAR_8);
 FUNC_0(VAR_6, VAR_10, sizeof(*VAR_6)*VAR_8);
 if (VAR_8 > 1) {
  FUNC_1(VAR_7, VAR_2);
  FUNC_1(VAR_6, VAR_2);
 }
 VAR_7 = VAR_9;
 VAR_6 = VAR_10;
 VAR_8 = VAR_11;
 FUNC_6(VAR_12);

 if (VAR_5)
  FUNC_3("kbd: new array size %d\n", VAR_8);

 return (0);
}
