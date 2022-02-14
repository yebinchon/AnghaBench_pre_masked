
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct _gss_name* elements; } ;
struct _gss_name {int gn_value; int gmn_name; TYPE_2__* gmn_mech; int gn_mn; TYPE_1__ gn_type; } ;
struct _gss_mechanism_name {int gn_value; int gmn_name; TYPE_2__* gmn_mech; int gn_mn; TYPE_1__ gn_type; } ;
typedef scalar_t__ gss_name_t ;
struct TYPE_4__ {int (* gm_release_name ) (scalar_t__*,int *) ;} ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct _gss_name* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct _gss_name*) ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__*,int *) ;
 int FUNC_4 (scalar_t__*,int *) ;

OM_uint32
FUNC_5(OM_uint32 *VAR_3,
    gss_name_t *VAR_4)
{
 struct _gss_name *VAR_5 = (struct _gss_name *) *VAR_4;

 *VAR_3 = 0;
 if (VAR_5) {
  if (VAR_5->gn_type.elements)
   FUNC_2(VAR_5->gn_type.elements);
  while (FUNC_0(&VAR_5->gn_mn)) {
   struct _gss_mechanism_name *VAR_6;
   VAR_6 = FUNC_0(&VAR_5->gn_mn);
   FUNC_1(&VAR_5->gn_mn, VAR_2);
   VAR_6->gmn_mech->gm_release_name(VAR_3,
       &VAR_6->gmn_name);
   FUNC_2(VAR_6);
  }
  FUNC_3(VAR_3, &VAR_5->gn_value);
  FUNC_2(VAR_5);
  *VAR_4 = VAR_0;
 }
 return (VAR_1);
}
