
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ushort_t ;
typedef int uint_t ;
typedef scalar_t__ ctf_id_t ;
typedef int ctf_file_t ;
struct TYPE_4__ {scalar_t__ ctt_type; int ctt_info; } ;
struct TYPE_5__ {TYPE_1__ dtd_data; } ;
typedef TYPE_2__ ctf_dtdef_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int ,char const*,TYPE_2__**) ;
 int * FUNC_2 (int *,scalar_t__) ;
 int * FUNC_3 (int **,scalar_t__) ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int *,int ) ;

ctf_id_t
FUNC_6(ctf_file_t *VAR_3, uint_t VAR_4, const char *VAR_5, ctf_id_t VAR_6)
{
 ctf_dtdef_t *VAR_7;
 ctf_id_t VAR_8;
 ctf_file_t *VAR_9;

 VAR_9 = VAR_3;
 if (VAR_6 == VAR_0 || (FUNC_3(&VAR_9, VAR_6) == ((void*)0) &&
     FUNC_2(VAR_3, VAR_6) == ((void*)0)))
  return (FUNC_5(VAR_3, VAR_2));

 if ((VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_7)) == VAR_0)
  return (VAR_0);

 VAR_7->dtd_data.ctt_info = FUNC_0(VAR_1, VAR_4, 0);
 VAR_7->dtd_data.ctt_type = (ushort_t)VAR_6;
 FUNC_4(VAR_3, VAR_6);

 return (VAR_8);
}
