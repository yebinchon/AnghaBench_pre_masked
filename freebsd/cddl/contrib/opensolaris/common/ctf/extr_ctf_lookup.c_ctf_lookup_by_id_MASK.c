
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ctf_type_t ;
typedef scalar_t__ ctf_id_t ;
struct TYPE_5__ {int ctf_flags; scalar_t__ ctf_typemax; struct TYPE_5__* ctf_parent; } ;
typedef TYPE_1__ ctf_file_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int const* FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int ) ;

const ctf_type_t *
FUNC_4(ctf_file_t **VAR_3, ctf_id_t VAR_4)
{
 ctf_file_t *VAR_5 = *VAR_3;

 if ((VAR_5->ctf_flags & VAR_2) && FUNC_0(VAR_4) &&
     (VAR_5 = VAR_5->ctf_parent) == ((void*)0)) {
  (void) FUNC_3(*VAR_3, VAR_1);
  return (((void*)0));
 }

 VAR_4 = FUNC_1(VAR_4);
 if (VAR_4 > 0 && VAR_4 <= VAR_5->ctf_typemax) {
  *VAR_3 = VAR_5;
  return (FUNC_2(VAR_5, VAR_4));
 }

 (void) FUNC_3(VAR_5, VAR_0);
 return (((void*)0));
}
