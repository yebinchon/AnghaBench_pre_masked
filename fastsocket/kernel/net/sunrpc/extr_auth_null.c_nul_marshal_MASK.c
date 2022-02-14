
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;

__attribute__((used)) static __be32 *
FUNC_1(struct rpc_task *VAR_1, __be32 *VAR_2)
{
 *VAR_2++ = FUNC_0(VAR_0);
 *VAR_2++ = 0;
 *VAR_2++ = FUNC_0(VAR_0);
 *VAR_2++ = 0;

 return VAR_2;
}
