
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rpc_task {int dummy; } ;
typedef scalar_t__ rpc_authflavor_t ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,scalar_t__) ;

__attribute__((used)) static __be32 *
FUNC_2(struct rpc_task *VAR_1, __be32 *VAR_2)
{
 rpc_authflavor_t VAR_3;
 u32 VAR_4;

 VAR_3 = FUNC_0(*VAR_2++);
 if (VAR_3 != VAR_0) {
  FUNC_1("RPC: bad verf flavor: %u\n", VAR_3);
  return ((void*)0);
 }

 VAR_4 = FUNC_0(*VAR_2++);
 if (VAR_4 != 0) {
  FUNC_1("RPC: bad verf size: %u\n", VAR_4);
  return ((void*)0);
 }

 return VAR_2;
}
