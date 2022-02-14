
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
typedef scalar_t__ ssize_t ;
struct TYPE_5__ {int ctt_info; } ;
typedef TYPE_1__ ctf_type_t ;
typedef int ctf_id_t ;
typedef int ctf_file_t ;
struct TYPE_6__ {int cte_value; int cte_name; } ;
typedef TYPE_2__ ctf_enum_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,TYPE_1__ const*,int *,scalar_t__*) ;
 TYPE_1__* FUNC_3 (int **,int ) ;
 int FUNC_4 (int *,int ) ;
 char const* FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;

const char *
FUNC_7(ctf_file_t *VAR_4, ctf_id_t VAR_5, int VAR_6)
{
 ctf_file_t *VAR_7 = VAR_4;
 const ctf_type_t *VAR_8;
 const ctf_enum_t *VAR_9;
 ssize_t VAR_10;
 uint_t VAR_11;

 if ((VAR_5 = FUNC_6(VAR_4, VAR_5)) == VAR_0)
  return (((void*)0));

 if ((VAR_8 = FUNC_3(&VAR_4, VAR_5)) == ((void*)0))
  return (((void*)0));

 if (FUNC_0(VAR_4, VAR_8->ctt_info) != VAR_1) {
  (void) FUNC_4(VAR_7, VAR_3);
  return (((void*)0));
 }

 (void) FUNC_2(VAR_4, VAR_8, ((void*)0), &VAR_10);

 VAR_9 = (const ctf_enum_t *)((uintptr_t)VAR_8 + VAR_10);

 for (VAR_11 = FUNC_1(VAR_4, VAR_8->ctt_info); VAR_11 != 0; VAR_11--, VAR_9++) {
  if (VAR_9->cte_value == VAR_6)
   return (FUNC_5(VAR_4, VAR_9->cte_name));
 }

 (void) FUNC_4(VAR_7, VAR_2);
 return (((void*)0));
}
