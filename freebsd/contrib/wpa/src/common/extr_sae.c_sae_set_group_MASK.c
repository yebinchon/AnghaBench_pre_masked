
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sae_temporary_data {scalar_t__ prime_len; scalar_t__ order_len; int * order_buf; int * order; TYPE_1__* dh; int * prime_buf; int * prime; scalar_t__ ec; } ;
struct sae_data {int group; struct sae_temporary_data* tmp; } ;
struct TYPE_2__ {scalar_t__ prime_len; scalar_t__ order_len; int order; int prime; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int ,scalar_t__) ;
 int * FUNC_1 (scalar_t__) ;
 int * FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 TYPE_1__* FUNC_6 (int) ;
 int FUNC_7 (int,int ) ;
 struct sae_temporary_data* FUNC_8 (int) ;
 int FUNC_9 (struct sae_data*) ;
 int FUNC_10 (int ,char*,int) ;

int FUNC_11(struct sae_data *VAR_2, int VAR_3)
{
 struct sae_temporary_data *VAR_4;




 if (!FUNC_7(VAR_3, 0)) {
  FUNC_10(VAR_0, "SAE: Reject unsuitable group %d", VAR_3);
  return -1;
 }


 FUNC_9(VAR_2);
 VAR_4 = VAR_2->tmp = FUNC_8(sizeof(*VAR_4));
 if (VAR_4 == ((void*)0))
  return -1;


 VAR_4->ec = FUNC_3(VAR_3);
 if (VAR_4->ec) {
  FUNC_10(VAR_0, "SAE: Selecting supported ECC group %d",
      VAR_3);
  VAR_2->group = VAR_3;
  VAR_4->prime_len = FUNC_5(VAR_4->ec);
  VAR_4->prime = FUNC_2(VAR_4->ec);
  VAR_4->order_len = FUNC_4(VAR_4->ec);
  VAR_4->order = FUNC_1(VAR_4->ec);
  return 0;
 }


 VAR_4->dh = FUNC_6(VAR_3);
 if (VAR_4->dh) {
  FUNC_10(VAR_0, "SAE: Selecting supported FFC group %d",
      VAR_3);
  VAR_2->group = VAR_3;
  VAR_4->prime_len = VAR_4->dh->prime_len;
  if (VAR_4->prime_len > VAR_1) {
   FUNC_9(VAR_2);
   return -1;
  }

  VAR_4->prime_buf = FUNC_0(VAR_4->dh->prime,
       VAR_4->prime_len);
  if (VAR_4->prime_buf == ((void*)0)) {
   FUNC_9(VAR_2);
   return -1;
  }
  VAR_4->prime = VAR_4->prime_buf;

  VAR_4->order_len = VAR_4->dh->order_len;
  VAR_4->order_buf = FUNC_0(VAR_4->dh->order,
       VAR_4->dh->order_len);
  if (VAR_4->order_buf == ((void*)0)) {
   FUNC_9(VAR_2);
   return -1;
  }
  VAR_4->order = VAR_4->order_buf;

  return 0;
 }


 FUNC_10(VAR_0,
     "SAE: Group %d not supported by the crypto library", VAR_3);
 return -1;
}
