
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_opt_hdr {scalar_t__ nd_opt_type; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct nd_opt_hdr *VAR_1)
{
 return (VAR_1->nd_opt_type == VAR_0);
}
