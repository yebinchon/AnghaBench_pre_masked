
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint_t ;
typedef int ctf_id_t ;
struct TYPE_16__ {int h_type; } ;
typedef TYPE_3__ ctf_helem_t ;
typedef int ctf_hash_t ;
struct TYPE_17__ {TYPE_2__* ctf_dmodel; int ctf_enums; } ;
typedef TYPE_4__ ctf_file_t ;
struct TYPE_14__ {int ctt_size; int ctt_info; } ;
struct TYPE_18__ {TYPE_1__ dtd_data; } ;
typedef TYPE_5__ ctf_dtdef_t ;
struct TYPE_15__ {int ctd_int; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_4__*,int ,char const*,TYPE_5__**) ;
 TYPE_5__* FUNC_2 (TYPE_4__*,int ) ;
 TYPE_3__* FUNC_3 (int *,TYPE_4__*,char const*,int ) ;
 scalar_t__ FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (char const*) ;

ctf_id_t
FUNC_6(ctf_file_t *VAR_3, uint_t VAR_4, const char *VAR_5)
{
 ctf_hash_t *VAR_6 = &VAR_3->ctf_enums;
 ctf_helem_t *VAR_7 = ((void*)0);
 ctf_dtdef_t *VAR_8;
 ctf_id_t VAR_9;

 if (VAR_5 != ((void*)0))
  VAR_7 = FUNC_3(VAR_6, VAR_3, VAR_5, FUNC_5(VAR_5));

 if (VAR_7 != ((void*)0) && FUNC_4(VAR_3, VAR_7->h_type) == VAR_2)
  VAR_8 = FUNC_2(VAR_3, VAR_9 = VAR_7->h_type);
 else if ((VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_8)) == VAR_0)
  return (VAR_0);

 VAR_8->dtd_data.ctt_info = FUNC_0(VAR_1, VAR_4, 0);
 VAR_8->dtd_data.ctt_size = VAR_3->ctf_dmodel->ctd_int;

 return (VAR_9);
}
