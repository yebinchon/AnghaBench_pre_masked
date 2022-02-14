
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int personality; } ;
struct ecore_hwfn {int num_funcs_on_engine; int port_id; int enabled_func_idx; TYPE_1__ hw_info; TYPE_2__* p_dev; } ;
typedef enum ecore_resources { ____Placeholder_ecore_resources } ecore_resources ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_4__ {int num_ports_in_engine; } ;





 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;



 int VAR_1 ;
 int VAR_2 ;






 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static
enum _ecore_status_t FUNC_1(struct ecore_hwfn *VAR_20,
         enum ecore_resources VAR_21,
         u32 *VAR_22, u32 *VAR_23)
{
 u8 VAR_24 = VAR_20->num_funcs_on_engine;
 bool VAR_25 = FUNC_0(VAR_20->p_dev);

 switch (VAR_21) {
 case 138:
  *VAR_22 = (VAR_25 ? VAR_8 :
          VAR_7) / VAR_24;
  break;
 case 128:
  *VAR_22 = (VAR_25 ? VAR_11 :
          VAR_10) / VAR_24;
  break;
 case 131:
  *VAR_22 = (VAR_25 ? VAR_6 :
          VAR_5) / VAR_24;
  break;
 case 135:
  *VAR_22 = (VAR_25 ? VAR_14 :
          VAR_13) / VAR_24;
  *VAR_22 &= ~0x7;
  break;
 case 132:
  *VAR_22 = VAR_12 / VAR_24;
  break;
 case 136:
 case 129:

  *VAR_22 = VAR_4 / VAR_24;
  break;
 case 139:
  *VAR_22 = (VAR_25 ? VAR_17 :
          VAR_16) / VAR_24;
  break;
 case 137:
  *VAR_22 = VAR_9 / VAR_24;
  break;
 case 134:
 case 140:

  *VAR_22 = VAR_15 / VAR_24;
  break;
 case 133:
  *VAR_22 = (VAR_25 ? VAR_19 :
          VAR_18) /
         VAR_24;
  break;
 case 141:
  if (VAR_20->hw_info.personality != VAR_2 &&
      VAR_20->hw_info.personality != VAR_1)
   *VAR_22 = 0;
  else
   *VAR_22 = 1;
  break;
 case 130:



  *VAR_22 = 0;
  break;
 default:
  return VAR_0;
 }

 switch (VAR_21) {
 case 141:
  if (!*VAR_22)
   *VAR_23 = 0;
  else if (VAR_20->p_dev->num_ports_in_engine == 4)
   *VAR_23 = VAR_20->port_id;
  else if (VAR_20->hw_info.personality == VAR_2)
   *VAR_23 = VAR_20->port_id;
  else if (VAR_20->hw_info.personality == VAR_1)
   *VAR_23 = VAR_20->port_id + 2;
  break;
 default:
  *VAR_23 = *VAR_22 * VAR_20->enabled_func_idx;
  break;
 }

 return VAR_3;
}
