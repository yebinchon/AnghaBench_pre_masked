
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct fsi_priv {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_1(struct fsi_priv *VAR_1, u32 VAR_2)
{
 if (VAR_2 > VAR_0)
  return 0;

 return FUNC_0((u32)(VAR_1->base + VAR_2));
}
