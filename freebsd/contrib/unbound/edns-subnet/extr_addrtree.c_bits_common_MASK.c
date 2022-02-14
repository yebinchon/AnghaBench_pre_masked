
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ addrlen_t ;
typedef int addrkey_t ;


 scalar_t__ FUNC_0 (int const*,int const*,scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static addrlen_t
FUNC_2(const addrkey_t *VAR_0, addrlen_t VAR_1,
 const addrkey_t *VAR_2, addrlen_t VAR_3, addrlen_t VAR_4)
{
 addrlen_t VAR_5, VAR_6;
 VAR_5 = (VAR_1 > VAR_3) ? VAR_3 : VAR_1;
 FUNC_1(VAR_4 < VAR_5);
 for (VAR_6 = VAR_4; VAR_6 < VAR_5; VAR_6++) {
  if (FUNC_0(VAR_0, VAR_2, VAR_6)) return VAR_6;
 }
 return VAR_5;
}
