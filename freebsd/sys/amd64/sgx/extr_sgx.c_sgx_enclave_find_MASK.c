
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
typedef int vm_map_entry_t ;
typedef int uint64_t ;
struct sgx_vm_handle {struct sgx_enclave* enclave; } ;
struct sgx_softc {int dummy; } ;
struct sgx_enclave {int * object; } ;
struct TYPE_4__ {struct sgx_vm_handle* handle; } ;


 int VAR_0 ;
 int FUNC_0 (struct sgx_softc*,int ,int *,TYPE_1__**) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(struct sgx_softc *VAR_1, uint64_t VAR_2,
    struct sgx_enclave **VAR_3)
{
 struct sgx_vm_handle *VAR_4;
 struct sgx_enclave *VAR_5;
 vm_map_entry_t VAR_6;
 vm_object_t VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_1, VAR_2, &VAR_6, &VAR_7);
 if (VAR_8)
  return (VAR_8);

 VAR_4 = VAR_7->handle;
 if (VAR_4 == ((void*)0)) {
  FUNC_1(VAR_7);
  return (VAR_0);
 }

 VAR_5 = VAR_4->enclave;
 if (VAR_5 == ((void*)0) || VAR_5->object == ((void*)0)) {
  FUNC_1(VAR_7);
  return (VAR_0);
 }

 *VAR_3 = VAR_5;

 return (0);
}
