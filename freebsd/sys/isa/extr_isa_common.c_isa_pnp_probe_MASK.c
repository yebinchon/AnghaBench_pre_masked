
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isa_pnp_id {scalar_t__ ip_id; scalar_t__ ip_desc; } ;
struct isa_device {scalar_t__ id_logicalid; scalar_t__ id_compatid; int id_vendorid; } ;
typedef int device_t ;


 struct isa_device* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2, device_t VAR_3, struct isa_pnp_id *VAR_4)
{
 struct isa_device* VAR_5 = FUNC_0(VAR_3);

 if (!VAR_5->id_vendorid)
  return (VAR_0);

 while (VAR_4 && VAR_4->ip_id) {



  if (VAR_5->id_logicalid == VAR_4->ip_id
      || VAR_5->id_compatid == VAR_4->ip_id) {
   if (VAR_4->ip_desc)
    FUNC_1(VAR_3, VAR_4->ip_desc);
   return (0);
  }
  VAR_4++;
 }

 return (VAR_1);
}
