
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ descr_len; int * descr; } ;
typedef TYPE_3__ ses_element_t ;
struct TYPE_11__ {scalar_t__ elm_desc_len; int elm_desc_str; scalar_t__ elm_idx; } ;
typedef TYPE_4__ encioc_elm_desc_t ;
struct TYPE_9__ {TYPE_1__* elm_map; } ;
struct TYPE_12__ {TYPE_2__ enc_cache; } ;
typedef TYPE_5__ enc_softc_t ;
struct TYPE_8__ {TYPE_3__* elm_private; } ;


 int FUNC_0 (int *,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(enc_softc_t *VAR_0, encioc_elm_desc_t *VAR_1)
{
 int VAR_2 = (int)VAR_1->elm_idx;
 ses_element_t *VAR_3;


 VAR_3 = VAR_0->enc_cache.elm_map[VAR_2].elm_private;

 if (VAR_3 == ((void*)0) || VAR_3->descr == ((void*)0)) {
  VAR_1->elm_desc_len = 0;
  return (0);
 }
 if (VAR_1->elm_desc_len > VAR_3->descr_len)
  VAR_1->elm_desc_len = VAR_3->descr_len;
 FUNC_0(VAR_3->descr, VAR_1->elm_desc_str, VAR_1->elm_desc_len);
 return (0);
}
