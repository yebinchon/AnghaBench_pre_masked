
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uni_addr {scalar_t__ type; scalar_t__ plan; scalar_t__ len; int addr; } ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static __inline int
FUNC_1(const struct uni_addr *VAR_0, const struct uni_addr *VAR_1)
{
 return (VAR_0->type == VAR_1->type && VAR_0->plan == VAR_1->plan &&
     VAR_0->len == VAR_1->len && FUNC_0(VAR_0->addr, VAR_1->addr, VAR_0->len) == 0);
}
