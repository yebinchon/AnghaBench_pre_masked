
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list_entry {uintptr_t start; uintptr_t count; } ;
struct resource_list {int dummy; } ;
struct isa_device {uintptr_t id_vendorid; uintptr_t id_serial; uintptr_t id_logicalid; uintptr_t id_compatid; uintptr_t id_config_attr; uintptr_t id_pnp_csn; uintptr_t id_pnp_ldn; uintptr_t id_pnpbios_handle; struct resource_list id_resources; } ;
typedef int device_t ;


 struct isa_device* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct resource_list_entry* FUNC_1 (struct resource_list*,int ,int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_5, device_t VAR_6, int VAR_7, uintptr_t * VAR_8)
{
 struct isa_device* VAR_9 = FUNC_0(VAR_6);
 struct resource_list *VAR_10 = &VAR_9->id_resources;
 struct resource_list_entry *VAR_11;

 switch (VAR_7) {
 case 131:
  VAR_11 = FUNC_1(VAR_10, VAR_2, 0);
  if (VAR_11)
   *VAR_8 = VAR_11->start;
  else
   *VAR_8 = -1;
  break;

 case 130:
  VAR_11 = FUNC_1(VAR_10, VAR_2, 1);
  if (VAR_11)
   *VAR_8 = VAR_11->start;
  else
   *VAR_8 = -1;
  break;

 case 133:
  VAR_11 = FUNC_1(VAR_10, VAR_2, 0);
  if (VAR_11)
   *VAR_8 = VAR_11->count;
  else
   *VAR_8 = 0;
  break;

 case 132:
  VAR_11 = FUNC_1(VAR_10, VAR_2, 1);
  if (VAR_11)
   *VAR_8 = VAR_11->count;
  else
   *VAR_8 = 0;
  break;

 case 140:
  VAR_11 = FUNC_1(VAR_10, VAR_4, 0);
  if (VAR_11)
   *VAR_8 = VAR_11->start;
  else
   *VAR_8 = -1;
  break;

 case 139:
  VAR_11 = FUNC_1(VAR_10, VAR_4, 1);
  if (VAR_11)
   *VAR_8 = VAR_11->start;
  else
   *VAR_8 = -1;
  break;

 case 138:
  VAR_11 = FUNC_1(VAR_10, VAR_4, 0);
  if (VAR_11)
   *VAR_8 = VAR_11->count;
  else
   *VAR_8 = 0;
  break;

 case 137:
  VAR_11 = FUNC_1(VAR_10, VAR_4, 1);
  if (VAR_11)
   *VAR_8 = VAR_11->count;
  else
   *VAR_8 = 0;
  break;

 case 143:
  VAR_11 = FUNC_1(VAR_10, VAR_3, 0);
  if (VAR_11)
   *VAR_8 = VAR_11->start;
  else
   *VAR_8 = -1;
  break;

 case 142:
  VAR_11 = FUNC_1(VAR_10, VAR_3, 1);
  if (VAR_11)
   *VAR_8 = VAR_11->start;
  else
   *VAR_8 = -1;
  break;

 case 145:
  VAR_11 = FUNC_1(VAR_10, VAR_1, 0);
  if (VAR_11)
   *VAR_8 = VAR_11->start;
  else
   *VAR_8 = -1;
  break;

 case 144:
  VAR_11 = FUNC_1(VAR_10, VAR_1, 1);
  if (VAR_11)
   *VAR_8 = VAR_11->start;
  else
   *VAR_8 = -1;
  break;

 case 128:
  *VAR_8 = VAR_9->id_vendorid;
  break;

 case 129:
  *VAR_8 = VAR_9->id_serial;
  break;

 case 141:
  *VAR_8 = VAR_9->id_logicalid;
  break;

 case 147:
  *VAR_8 = VAR_9->id_compatid;
  break;

 case 146:
  *VAR_8 = VAR_9->id_config_attr;
  break;

 case 135:
  *VAR_8 = VAR_9->id_pnp_csn;
  break;

 case 134:
  *VAR_8 = VAR_9->id_pnp_ldn;
  break;

 case 136:
  *VAR_8 = VAR_9->id_pnpbios_handle;
  break;

 default:
  return (VAR_0);
 }

 return (0);
}
