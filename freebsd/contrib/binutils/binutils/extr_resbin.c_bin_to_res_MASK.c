
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int windres_bfd ;
typedef int rc_uint_type ;
typedef int rc_res_resource ;
struct TYPE_4__ {int id; } ;
struct TYPE_5__ {TYPE_1__ u; scalar_t__ named; } ;
typedef TYPE_2__ rc_res_id ;
typedef int bfd_byte ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int *,int const*,int ) ;
 int * FUNC_1 (int *,int const*,int ) ;
 int * FUNC_2 (int *,int const*,int ) ;
 int * FUNC_3 (int *,int const*,int ) ;
 int * FUNC_4 (int *,int ,int const*,int ) ;
 int * FUNC_5 (int *,int const*,int ) ;
 int * FUNC_6 (int *,int const*,int ) ;
 int * FUNC_7 (int *,int const*,int ) ;
 int * FUNC_8 (int *,int const*,int ,int ) ;
 int * FUNC_9 (int *,int const*,int ) ;
 int * FUNC_10 (int *,int const*,int ) ;
 int * FUNC_11 (int *,int const*,int ) ;
 int * FUNC_12 (int *,int const*,int ) ;

rc_res_resource *
FUNC_13 (windres_bfd *VAR_5, rc_res_id VAR_6, const bfd_byte *VAR_7,
     rc_uint_type VAR_8)
{
  if (VAR_6.named)
    return FUNC_11 (VAR_5, VAR_7, VAR_8);
  else
    {
      switch (VAR_6.u.id)
 {
 default:
   return FUNC_11 (VAR_5, VAR_7, VAR_8);
 case 140:
   return FUNC_1 (VAR_5, VAR_7, VAR_8);
 case 141:
   return FUNC_4 (VAR_5, VAR_0, VAR_7, VAR_8);
 case 134:
   return FUNC_4 (VAR_5, VAR_2, VAR_7, VAR_8);
 case 133:
   return FUNC_7 (VAR_5, VAR_7, VAR_8);
 case 139:
   return FUNC_2 (VAR_5, VAR_7, VAR_8);
 case 130:
   return FUNC_9 (VAR_5, VAR_7, VAR_8);
 case 137:
   return FUNC_3 (VAR_5, VAR_7, VAR_8);
 case 138:
   return FUNC_4 (VAR_5, VAR_1, VAR_7, VAR_8);
 case 142:
   return FUNC_0 (VAR_5, VAR_7, VAR_8);
 case 131:
   return FUNC_8 (VAR_5, VAR_7, VAR_8, VAR_4);
 case 132:
   return FUNC_4 (VAR_5, VAR_3, VAR_7, VAR_8);
 case 136:
   return FUNC_5 (VAR_5, VAR_7, VAR_8);
 case 135:
   return FUNC_6 (VAR_5, VAR_7, VAR_8);
 case 128:
   return FUNC_12 (VAR_5, VAR_7, VAR_8);
 case 129:
   return FUNC_10 (VAR_5, VAR_7, VAR_8);

 }
    }
}
