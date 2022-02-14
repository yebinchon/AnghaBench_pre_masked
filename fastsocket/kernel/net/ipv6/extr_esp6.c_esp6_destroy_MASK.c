
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_state {struct esp_data* data; } ;
struct esp_data {int aead; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct esp_data*) ;

__attribute__((used)) static void FUNC_2(struct xfrm_state *VAR_0)
{
 struct esp_data *VAR_1 = VAR_0->data;

 if (!VAR_1)
  return;

 FUNC_0(VAR_1->aead);
 FUNC_1(VAR_1);
}
