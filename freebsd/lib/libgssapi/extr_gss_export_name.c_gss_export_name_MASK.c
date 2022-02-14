
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct _gss_name {int gn_mn; } ;
struct _gss_mechanism_name {int gmn_name; TYPE_1__* gmn_mech; } ;
typedef scalar_t__ gss_name_t ;
typedef int gss_buffer_t ;
struct TYPE_2__ {scalar_t__ (* gm_export_name ) (scalar_t__*,int ,int ) ;} ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 struct _gss_mechanism_name* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__*,int ,int ) ;

OM_uint32
FUNC_3(OM_uint32 *VAR_1,
    const gss_name_t VAR_2,
    gss_buffer_t VAR_3)
{
 struct _gss_name *VAR_4 = (struct _gss_name *) VAR_2;
 struct _gss_mechanism_name *VAR_5;

 FUNC_1(VAR_3);






 VAR_5 = FUNC_0(&VAR_4->gn_mn);
 if (!VAR_5) {
  *VAR_1 = 0;
  return (VAR_0);
 }

 return VAR_5->gmn_mech->gm_export_name(VAR_1,
     VAR_5->gmn_name, VAR_3);
}
