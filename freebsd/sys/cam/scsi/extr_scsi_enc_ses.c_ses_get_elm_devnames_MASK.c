
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sbuf {int dummy; } ;
struct TYPE_8__ {int elm_names_size; size_t elm_idx; scalar_t__ elm_names_len; int elm_devnames; } ;
typedef TYPE_2__ encioc_elm_devnames_t ;
struct TYPE_7__ {int * elm_map; } ;
struct TYPE_9__ {int periph; TYPE_1__ enc_cache; } ;
typedef TYPE_3__ enc_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (struct sbuf*) ;
 int FUNC_4 (struct sbuf*) ;
 int FUNC_5 (struct sbuf*) ;
 scalar_t__ FUNC_6 (struct sbuf*) ;
 int FUNC_7 (struct sbuf*,int *,int,int ) ;
 int VAR_3 ;
 int FUNC_8 (TYPE_3__*,int *,int ,struct sbuf*) ;

__attribute__((used)) static int
FUNC_9(enc_softc_t *VAR_4, encioc_elm_devnames_t *VAR_5)
{
 struct sbuf VAR_6;
 int VAR_7;

 VAR_7 = VAR_5->elm_names_size;
 if (VAR_7 < 0)
  return (VAR_0);

 FUNC_1(VAR_4->periph);
 FUNC_7(&VAR_6, ((void*)0), VAR_7, VAR_2);
 FUNC_8(VAR_4, &VAR_4->enc_cache.elm_map[VAR_5->elm_idx],
     VAR_3, &VAR_6);
 FUNC_5(&VAR_6);
 VAR_5->elm_names_len = FUNC_6(&VAR_6);
 FUNC_2(FUNC_3(&VAR_6), VAR_5->elm_devnames, VAR_5->elm_names_len + 1);
 FUNC_4(&VAR_6);
 FUNC_0(VAR_4->periph);
 return (VAR_5->elm_names_len > 0 ? 0 : VAR_1);
}
