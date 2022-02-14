
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int heim_oid ;
typedef int PBE_string2key_func ;
typedef int EVP_MD ;
typedef int EVP_CIPHER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int const* VAR_5 ;
 int const* VAR_6 ;
 int const* VAR_7 ;
 int * FUNC_0 () ;
 int * FUNC_1 () ;
 int * FUNC_2 () ;
 int * FUNC_3 () ;
 int * FUNC_4 () ;
 int * FUNC_5 () ;
 int VAR_8 ;
 int const VAR_9 ;
 scalar_t__ FUNC_6 (int const*,int ) ;

__attribute__((used)) static const heim_oid *
FUNC_7(const heim_oid *VAR_10,
  const EVP_CIPHER **VAR_11,
  const EVP_MD **VAR_12,
  PBE_string2key_func *VAR_13)
{
    if (FUNC_6(VAR_10, VAR_3) == 0) {
 *VAR_11 = FUNC_1();
 *VAR_12 = FUNC_5();
 *VAR_13 = VAR_8;
 return &VAR_9;
    } else if (FUNC_6(VAR_10, VAR_0) == 0) {
 *VAR_11 = FUNC_2();
 *VAR_12 = FUNC_5();
 *VAR_13 = VAR_8;
 return VAR_6;
    } else if (FUNC_6(VAR_10, VAR_2) == 0) {
 *VAR_11 = FUNC_0();
 *VAR_12 = FUNC_5();
 *VAR_13 = VAR_8;
 return VAR_5;
    }

    return ((void*)0);
}
