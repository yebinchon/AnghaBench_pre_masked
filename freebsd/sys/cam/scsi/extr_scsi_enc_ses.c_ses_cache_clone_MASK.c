
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ses_element_t ;
typedef int ses_cache_t ;
typedef int enc_softc_t ;
struct TYPE_8__ {struct TYPE_8__* elm_private; } ;
typedef TYPE_1__ enc_element_t ;
struct TYPE_9__ {int nelms; TYPE_1__* elm_map; int * private; } ;
typedef TYPE_2__ enc_cache_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int,int ,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_2 (int *,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3(enc_softc_t *VAR_2, enc_cache_t *VAR_3, enc_cache_t *VAR_4)
{
 ses_cache_t *VAR_5;
 ses_cache_t *VAR_6;
 enc_element_t *VAR_7;
 enc_element_t *VAR_8;
 enc_element_t *VAR_9;

 FUNC_2(VAR_2, VAR_4);
 VAR_6 = VAR_3->private;
 VAR_5 = VAR_4->private;





 *VAR_4 = *VAR_3;
 *VAR_5 = *VAR_6;





 VAR_4->private = VAR_5;





 VAR_4->elm_map = FUNC_0(VAR_4->nelms * sizeof(enc_element_t),
     VAR_0, VAR_1);
 FUNC_1(VAR_4->elm_map, VAR_3->elm_map, VAR_4->nelms * sizeof(enc_element_t));
 for (VAR_8 = VAR_4->elm_map, VAR_7 = VAR_3->elm_map,
      VAR_9 = &VAR_3->elm_map[VAR_3->nelms];
      VAR_7 != VAR_9; VAR_7++, VAR_8++) {

  VAR_8->elm_private = FUNC_0(sizeof(ses_element_t),
      VAR_0, VAR_1);
  FUNC_1(VAR_8->elm_private, VAR_7->elm_private,
         sizeof(ses_element_t));
 }
}
