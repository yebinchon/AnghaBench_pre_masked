
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sae_data {TYPE_1__* tmp; } ;
struct TYPE_2__ {scalar_t__ dh; scalar_t__ ec; } ;


 scalar_t__ FUNC_0 (struct sae_data*) ;
 scalar_t__ FUNC_1 (struct sae_data*,int const*,int const*,int const*,size_t,char const*) ;
 scalar_t__ FUNC_2 (struct sae_data*,int const*,int const*,int const*,size_t,char const*) ;

int FUNC_3(const u8 *VAR_0, const u8 *VAR_1,
         const u8 *VAR_2, size_t VAR_3,
         const char *VAR_4, struct sae_data *VAR_5)
{
 if (VAR_5->tmp == ((void*)0) ||
     (VAR_5->tmp->ec && FUNC_1(VAR_5, VAR_0, VAR_1, VAR_2,
      VAR_3,
      VAR_4) < 0) ||
     (VAR_5->tmp->dh && FUNC_2(VAR_5, VAR_0, VAR_1, VAR_2,
      VAR_3,
      VAR_4) < 0) ||
     FUNC_0(VAR_5) < 0)
  return -1;
 return 0;
}
