
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_10__ {char* value; } ;
struct hv_kvp_exchg_msg_value {char* key; int key_size; int value_size; void* value_type; TYPE_5__ msg_value; } ;
struct TYPE_8__ {struct hv_kvp_exchg_msg_value data; } ;
struct TYPE_7__ {struct hv_kvp_exchg_msg_value data; } ;
struct TYPE_9__ {TYPE_3__ kvp_get; TYPE_2__ kvp_enum_data; } ;
struct TYPE_6__ {int operation; } ;
struct hv_kvp_msg {TYPE_4__ body; TYPE_1__ kvp_hdr; } ;
struct hv_kvp_ip_msg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 void* VAR_3 ;
 int FUNC_0 (struct hv_kvp_msg*,struct hv_kvp_ip_msg*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int,char*,int ,int,int*) ;

__attribute__((used)) static int
FUNC_3(struct hv_kvp_msg *VAR_4, struct hv_kvp_msg *VAR_5)
{
 int VAR_6 = 0, VAR_7 = 0, VAR_8 = 0;
 struct hv_kvp_exchg_msg_value *VAR_9;
 char *VAR_10, *VAR_11;

 struct hv_kvp_ip_msg *VAR_12 = (struct hv_kvp_ip_msg *)VAR_5;

 switch (VAR_5->kvp_hdr.operation) {
 case 130:
  return (FUNC_0(VAR_4, VAR_12));

 case 128:
 case 129:
 case 133:
  return (0);

 case 132:
  VAR_9 = &VAR_5->body.kvp_enum_data.data;
  VAR_10 = VAR_4->body.kvp_enum_data.data.key;
  VAR_6 = FUNC_2((uint16_t *)VAR_9->key,
    ((VAR_1 / 2) - 2),
    VAR_10, FUNC_1(VAR_10),
    1, &VAR_8);

  VAR_9->key_size = 2 * (VAR_6 + 1);
  VAR_11 = VAR_4->body.kvp_enum_data.data.msg_value.value;
  VAR_7 = FUNC_2(
    (uint16_t *)VAR_9->msg_value.value,
    ((VAR_2 / 2) - 2),
    VAR_11, FUNC_1(VAR_11),
    1, &VAR_8);
  VAR_9->value_size = 2 * (VAR_7 + 1);
  VAR_9->value_type = VAR_3;

  if ((VAR_6 < 0) || (VAR_7 < 0))
   return (VAR_0);

  return (0);

 case 131:
  VAR_9 = &VAR_5->body.kvp_get.data;
  VAR_11 = VAR_4->body.kvp_get.data.msg_value.value;
  VAR_7 = FUNC_2(
    (uint16_t *)VAR_9->msg_value.value,
    ((VAR_2 / 2) - 2),
    VAR_11, FUNC_1(VAR_11),
    1, &VAR_8);

  VAR_9->value_size = 2 * (VAR_7 + 1);

  VAR_9->value_type = VAR_3;

  if (VAR_7 < 0)
   return (VAR_0);

  return (0);

 default:
  return (VAR_0);
 }
}
