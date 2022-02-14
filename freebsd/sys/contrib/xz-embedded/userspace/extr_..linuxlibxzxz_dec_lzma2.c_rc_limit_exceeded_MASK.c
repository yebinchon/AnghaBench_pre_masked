
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dec {scalar_t__ in_pos; scalar_t__ in_limit; } ;



__attribute__((used)) static inline bool FUNC_0(const struct rc_dec *VAR_0)
{
 return VAR_0->in_pos > VAR_0->in_limit;
}
