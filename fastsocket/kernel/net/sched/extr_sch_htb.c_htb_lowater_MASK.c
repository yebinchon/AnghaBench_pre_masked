
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct htb_class {scalar_t__ cmode; long cbuffer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline long FUNC_0(const struct htb_class *VAR_2)
{
 if (VAR_1)
  return VAR_2->cmode != VAR_0 ? -VAR_2->cbuffer : 0;
 else
  return 0;
}
