
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int ctf_id_t ;
struct TYPE_16__ {int ctf_flags; } ;
typedef TYPE_3__ ctf_file_t ;
struct TYPE_18__ {int ctr_index; int ctr_contents; } ;
struct TYPE_15__ {TYPE_5__ dtu_arr; } ;
struct TYPE_14__ {int ctt_info; } ;
struct TYPE_17__ {TYPE_2__ dtd_u; TYPE_1__ dtd_data; } ;
typedef TYPE_4__ ctf_dtdef_t ;
typedef TYPE_5__ ctf_arinfo_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* FUNC_1 (TYPE_3__*,int ) ;
 int * FUNC_2 (TYPE_3__**,int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*,int ) ;

int
FUNC_6(ctf_file_t *VAR_5, ctf_id_t VAR_6, const ctf_arinfo_t *VAR_7)
{
 ctf_file_t *VAR_8;
 ctf_dtdef_t *VAR_9 = FUNC_1(VAR_5, VAR_6);

 if (!(VAR_5->ctf_flags & VAR_4))
  return (FUNC_5(VAR_5, VAR_2));

 if (VAR_9 == ((void*)0) || FUNC_0(VAR_9->dtd_data.ctt_info) != VAR_0)
  return (FUNC_5(VAR_5, VAR_1));

 VAR_8 = VAR_5;
 if (FUNC_2(&VAR_8, VAR_7->ctr_contents) == ((void*)0) &&
     FUNC_1(VAR_5, VAR_7->ctr_contents) == ((void*)0))
  return (FUNC_5(VAR_5, VAR_1));

 VAR_8 = VAR_5;
 if (FUNC_2(&VAR_8, VAR_7->ctr_index) == ((void*)0) &&
     FUNC_1(VAR_5, VAR_7->ctr_index) == ((void*)0))
  return (FUNC_5(VAR_5, VAR_1));

 FUNC_3(VAR_5, VAR_9->dtd_u.dtu_arr.ctr_contents);
 FUNC_3(VAR_5, VAR_9->dtd_u.dtu_arr.ctr_index);
 VAR_5->ctf_flags |= VAR_3;
 VAR_9->dtd_u.dtu_arr = *VAR_7;
 FUNC_4(VAR_5, VAR_7->ctr_contents);
 FUNC_4(VAR_5, VAR_7->ctr_index);

 return (0);
}
