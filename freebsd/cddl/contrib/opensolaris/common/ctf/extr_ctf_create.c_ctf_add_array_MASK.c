
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint_t ;
typedef int ctf_id_t ;
typedef int ctf_file_t ;
struct TYPE_10__ {int ctr_index; int ctr_contents; } ;
struct TYPE_8__ {TYPE_4__ dtu_arr; } ;
struct TYPE_7__ {scalar_t__ ctt_size; int ctt_info; } ;
struct TYPE_9__ {TYPE_2__ dtd_u; TYPE_1__ dtd_data; } ;
typedef TYPE_3__ ctf_dtdef_t ;
typedef TYPE_4__ ctf_arinfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int *,TYPE_3__**) ;
 int * FUNC_2 (int *,int ) ;
 int * FUNC_3 (int **,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;

ctf_id_t
FUNC_6(ctf_file_t *VAR_4, uint_t VAR_5, const ctf_arinfo_t *VAR_6)
{
 ctf_dtdef_t *VAR_7;
 ctf_id_t VAR_8;
 ctf_file_t *VAR_9;

 if (VAR_6 == ((void*)0))
  return (FUNC_5(VAR_4, VAR_3));

 VAR_9 = VAR_4;
 if (FUNC_3(&VAR_9, VAR_6->ctr_contents) == ((void*)0) &&
     FUNC_2(VAR_4, VAR_6->ctr_contents) == ((void*)0))
  return (FUNC_5(VAR_4, VAR_2));

 VAR_9 = VAR_4;
 if (FUNC_3(&VAR_9, VAR_6->ctr_index) == ((void*)0) &&
     FUNC_2(VAR_4, VAR_6->ctr_index) == ((void*)0))
  return (FUNC_5(VAR_4, VAR_2));

 if ((VAR_8 = FUNC_1(VAR_4, VAR_5, ((void*)0), &VAR_7)) == VAR_0)
  return (VAR_0);

 VAR_7->dtd_data.ctt_info = FUNC_0(VAR_1, VAR_5, 0);
 VAR_7->dtd_data.ctt_size = 0;
 VAR_7->dtd_u.dtu_arr = *VAR_6;
 FUNC_4(VAR_4, VAR_6->ctr_contents);
 FUNC_4(VAR_4, VAR_6->ctr_index);

 return (VAR_8);
}
