
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sae_data {TYPE_1__* tmp; } ;
struct TYPE_2__ {scalar_t__ dh; } ;


 int FUNC_0 (struct sae_data*,int const**,int const*) ;
 int FUNC_1 (struct sae_data*,int const**,int const*) ;

__attribute__((used)) static u16 FUNC_2(struct sae_data *VAR_0, const u8 **VAR_1,
        const u8 *VAR_2)
{
 if (VAR_0->tmp->dh)
  return FUNC_1(VAR_0, VAR_1, VAR_2);
 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
