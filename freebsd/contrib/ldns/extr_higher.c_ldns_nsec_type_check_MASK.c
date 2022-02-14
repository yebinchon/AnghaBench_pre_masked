
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_rr_type ;
typedef int ldns_rr ;




 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int const*,int) ;

bool
FUNC_4(const ldns_rr *VAR_0, ldns_rr_type VAR_1)
{
 switch (FUNC_1(VAR_0)) {
 case 129 : if (FUNC_2(VAR_0) < 2) {
       return 0;
      }
      return FUNC_0(
        FUNC_3(VAR_0, 1), VAR_1);

 case 128 : if (FUNC_2(VAR_0) < 6) {
       return 0;
      }
      return FUNC_0(
        FUNC_3(VAR_0, 5), VAR_1);

 default : return 0;
 }
}
