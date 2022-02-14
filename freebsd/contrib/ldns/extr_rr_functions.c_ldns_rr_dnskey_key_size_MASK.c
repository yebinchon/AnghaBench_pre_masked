
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_rr ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 size_t FUNC_5 (unsigned char*,int ,int ) ;

size_t
FUNC_6(const ldns_rr *VAR_0)
{
 if (!VAR_0 || !FUNC_4(VAR_0)
   || !FUNC_3(VAR_0)) {
  return 0;
 }
 return FUNC_5((unsigned char*)FUNC_1(FUNC_4(VAR_0)),
                                    FUNC_2(FUNC_4(VAR_0)),
                                    FUNC_0(FUNC_3(VAR_0))
                                   );
}
