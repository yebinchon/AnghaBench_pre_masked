
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int poly1305_state_internal_t ;
typedef int crypto_onetimeauth_poly1305_state ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned char const*) ;

__attribute__((used)) static int
FUNC_2(crypto_onetimeauth_poly1305_state *VAR_0,
                                       const unsigned char *VAR_1)
{
    FUNC_0(sizeof(crypto_onetimeauth_poly1305_state) >=
        sizeof(poly1305_state_internal_t));
    FUNC_1((poly1305_state_internal_t *) (void *) VAR_0, VAR_1);

    return 0;
}
