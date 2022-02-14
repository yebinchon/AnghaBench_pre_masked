
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct sae_data {TYPE_1__* tmp; int peer_commit_scalar; } ;
struct TYPE_2__ {int peer_commit_element_ecc; int own_commit_element_ecc; scalar_t__ ec; int peer_commit_element_ffc; int own_commit_element_ffc; scalar_t__ dh; int own_commit_scalar; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_3 (struct sae_data*,int*,int ) ;
 scalar_t__ FUNC_4 (struct sae_data*,int const**,int const*) ;
 scalar_t__ FUNC_5 (struct sae_data*,int const**,int const*) ;
 int FUNC_6 (struct sae_data*,int const**,int const*,int const**,size_t*) ;
 scalar_t__ FUNC_7 (struct sae_data*,int const*,int const*) ;

u16 FUNC_8(struct sae_data *VAR_3, const u8 *VAR_4, size_t VAR_5,
       const u8 **VAR_6, size_t *VAR_7, int *VAR_8)
{
 const u8 *VAR_9 = VAR_4, *VAR_10 = VAR_4 + VAR_5;
 u16 VAR_11;


 if (VAR_10 - VAR_9 < 2)
  return VAR_2;
 VAR_11 = FUNC_3(VAR_3, VAR_8, FUNC_0(VAR_9));
 if (VAR_11 != VAR_1)
  return VAR_11;
 VAR_9 += 2;


 FUNC_6(VAR_3, &VAR_9, VAR_10, VAR_6, VAR_7);


 VAR_11 = FUNC_5(VAR_3, &VAR_9, VAR_10);
 if (VAR_11 != VAR_1)
  return VAR_11;


 VAR_11 = FUNC_4(VAR_3, &VAR_9, VAR_10);
 if (VAR_11 != VAR_1)
  return VAR_11;


 VAR_11 = FUNC_7(VAR_3, VAR_9, VAR_10);
 if (VAR_11 != VAR_1)
  return VAR_11;





 if (!VAR_3->tmp->own_commit_scalar ||
     FUNC_1(VAR_3->tmp->own_commit_scalar,
         VAR_3->peer_commit_scalar) != 0 ||
     (VAR_3->tmp->dh &&
      (!VAR_3->tmp->own_commit_element_ffc ||
       FUNC_1(VAR_3->tmp->own_commit_element_ffc,
    VAR_3->tmp->peer_commit_element_ffc) != 0)) ||
     (VAR_3->tmp->ec &&
      (!VAR_3->tmp->own_commit_element_ecc ||
       FUNC_2(VAR_3->tmp->ec,
      VAR_3->tmp->own_commit_element_ecc,
      VAR_3->tmp->peer_commit_element_ecc) != 0)))
  return VAR_1;






 return VAR_0;
}
