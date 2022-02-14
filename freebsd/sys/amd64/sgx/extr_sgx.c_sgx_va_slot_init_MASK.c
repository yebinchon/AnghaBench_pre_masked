
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_pindex_t ;
typedef int vm_object_t ;
typedef int uint64_t ;
struct sgx_softc {int dummy; } ;
struct sgx_enclave {int object; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sgx_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct sgx_softc *VAR_2,
    struct sgx_enclave *VAR_3,
    uint64_t VAR_4)
{
 vm_pindex_t VAR_5;
 uint64_t VAR_6;
 uint64_t VAR_7;
 vm_object_t VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_8 = VAR_3->object;

 FUNC_1(VAR_8);

 VAR_5 = FUNC_0(VAR_4);

 VAR_9 = VAR_5 % VAR_1;
 VAR_6 = VAR_5 / VAR_1;
 VAR_7 = - VAR_0 - VAR_6;

 VAR_10 = FUNC_2(VAR_2, VAR_8, VAR_7);

 return (VAR_10);
}
