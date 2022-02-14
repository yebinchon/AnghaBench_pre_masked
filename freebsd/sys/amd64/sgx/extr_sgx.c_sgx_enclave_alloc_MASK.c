
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sgx_softc {int dummy; } ;
struct sgx_enclave {int size; int base; } ;
struct secs {int size; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sgx_enclave* FUNC_0 (int,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct sgx_softc *VAR_3, struct secs *VAR_4,
    struct sgx_enclave **VAR_5)
{
 struct sgx_enclave *VAR_6;

 VAR_6 = FUNC_0(sizeof(struct sgx_enclave),
     VAR_0, VAR_1 | VAR_2);

 VAR_6->base = VAR_4->base;
 VAR_6->size = VAR_4->size;

 *VAR_5 = VAR_6;

 return (0);
}
