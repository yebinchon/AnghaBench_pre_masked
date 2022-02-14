
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int windres_bfd ;
typedef scalar_t__ rc_uint_type ;
typedef int rc_res_resource ;
typedef int rc_res_res_info ;
typedef int rc_res_id ;


 scalar_t__ FUNC_0 (int *,scalar_t__,int const*) ;
 scalar_t__ FUNC_1 (int *,scalar_t__,scalar_t__,int const*,int const*,int const*) ;

__attribute__((used)) static rc_uint_type
FUNC_2 (windres_bfd *VAR_0, rc_uint_type VAR_1, const rc_res_resource *VAR_2,
        const rc_res_id *VAR_3, const rc_res_id *VAR_4,
        const rc_res_res_info *VAR_5)
{
  rc_uint_type VAR_6;
  rc_uint_type VAR_7 = 0;

  VAR_6 = FUNC_0 ((windres_bfd *) ((void*)0), VAR_1, VAR_2);
  VAR_7 = VAR_6 - VAR_1;

  VAR_1 = FUNC_1 (VAR_0, VAR_1, VAR_7, VAR_3, VAR_4, VAR_5);
  return FUNC_0 (VAR_0, VAR_1, VAR_2);
}
