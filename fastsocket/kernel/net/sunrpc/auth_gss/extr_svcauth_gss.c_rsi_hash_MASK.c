
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int len; int data; } ;
struct TYPE_3__ {int len; int data; } ;
struct rsi {TYPE_2__ in_token; TYPE_1__ in_handle; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static inline int FUNC_1(struct rsi *VAR_1)
{
 return FUNC_0(VAR_1->in_handle.data, VAR_1->in_handle.len, VAR_0)
      ^ FUNC_0(VAR_1->in_token.data, VAR_1->in_token.len, VAR_0);
}
