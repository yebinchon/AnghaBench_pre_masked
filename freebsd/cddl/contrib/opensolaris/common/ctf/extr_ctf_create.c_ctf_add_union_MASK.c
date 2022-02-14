
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint_t ;
typedef int ctf_id_t ;
struct TYPE_14__ {int h_type; } ;
typedef TYPE_2__ ctf_helem_t ;
typedef int ctf_hash_t ;
struct TYPE_15__ {int ctf_unions; } ;
typedef TYPE_3__ ctf_file_t ;
struct TYPE_13__ {scalar_t__ ctt_size; int ctt_info; } ;
struct TYPE_16__ {TYPE_1__ dtd_data; } ;
typedef TYPE_4__ ctf_dtdef_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_3__*,int ,char const*,TYPE_4__**) ;
 TYPE_4__* FUNC_2 (TYPE_3__*,int ) ;
 TYPE_2__* FUNC_3 (int *,TYPE_3__*,char const*,int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (char const*) ;

ctf_id_t
FUNC_6(ctf_file_t *VAR_3, uint_t VAR_4, const char *VAR_5)
{
 ctf_hash_t *VAR_6 = &VAR_3->ctf_unions;
 ctf_helem_t *VAR_7 = ((void*)0);
 ctf_dtdef_t *VAR_8;
 ctf_id_t VAR_9;

 if (VAR_5 != ((void*)0))
  VAR_7 = FUNC_3(VAR_6, VAR_3, VAR_5, FUNC_5(VAR_5));

 if (VAR_7 != ((void*)0) && FUNC_4(VAR_3, VAR_7->h_type) == VAR_1)
  VAR_8 = FUNC_2(VAR_3, VAR_9 = VAR_7->h_type);
 else if ((VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_8)) == VAR_0)
  return (VAR_0);

 VAR_8->dtd_data.ctt_info = FUNC_0(VAR_2, VAR_4, 0);
 VAR_8->dtd_data.ctt_size = 0;

 return (VAR_9);
}
