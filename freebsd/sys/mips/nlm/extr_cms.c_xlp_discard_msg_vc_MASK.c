
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int u_int ;
struct nlm_fmn_msg {int dummy; } ;


 scalar_t__ FUNC_0 (int,int*,int*,int*,struct nlm_fmn_msg*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(u_int VAR_0)
{
 struct nlm_fmn_msg VAR_1;
 int VAR_2 = 0, VAR_3 = 0, VAR_4 = 0, VAR_5;
 uint32_t VAR_6, VAR_7;

 for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
  for (;;) {
   VAR_6 = FUNC_2();
   VAR_7 = FUNC_0(VAR_5, &VAR_2,
       &VAR_3, &VAR_4, &VAR_1);
   FUNC_1(VAR_6);


   if (VAR_7 != 0)
    break;
  }
 }
}
