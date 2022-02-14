
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct kvp_op_hdlr {int kvp_op_key; } ;
struct TYPE_12__ {int pool; } ;
struct TYPE_11__ {int error; TYPE_1__ kvp_hdr; } ;
struct TYPE_19__ {int key_size; int key; } ;
struct TYPE_16__ {int value; } ;
struct TYPE_17__ {int value_size; TYPE_5__ msg_value; int key_size; int key; } ;
struct TYPE_18__ {TYPE_6__ data; } ;
struct TYPE_13__ {int value; } ;
struct TYPE_14__ {int value_size; TYPE_2__ msg_value; int key_size; int key; } ;
struct TYPE_15__ {TYPE_3__ data; } ;
struct TYPE_20__ {TYPE_8__ kvp_delete; TYPE_7__ kvp_get; TYPE_4__ kvp_set; } ;
struct hv_kvp_msg {TYPE_10__ hdr; TYPE_9__ body; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ,int ,int ,int ) ;
 int FUNC_3 (int,int ,int ,int ,int ) ;
 int FUNC_4 (int,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct hv_kvp_msg *VAR_4, void *VAR_5)
{
 struct kvp_op_hdlr *VAR_6 = (struct kvp_op_hdlr *)VAR_5;
 int VAR_7 = 0;
 int VAR_8;

 FUNC_1(VAR_4 != ((void*)0));
 FUNC_1(VAR_6 != ((void*)0));

 VAR_8 = VAR_4->hdr.kvp_hdr.pool;
 VAR_4->hdr.error = VAR_2;

 switch(VAR_6->kvp_op_key) {
 case 128:
  if (VAR_8 == VAR_0) {

   VAR_7 = 1;
   FUNC_0(VAR_3, "Ilegal to write to pool %d from host\n",
       VAR_8);
  } else {
   VAR_7 = FUNC_3(VAR_8,
       VAR_4->body.kvp_set.data.key,
       VAR_4->body.kvp_set.data.key_size,
       VAR_4->body.kvp_set.data.msg_value.value,
       VAR_4->body.kvp_set.data.value_size);
  }
  break;

 case 129:
  VAR_7 = FUNC_2(VAR_8,
      VAR_4->body.kvp_get.data.key,
      VAR_4->body.kvp_get.data.key_size,
      VAR_4->body.kvp_get.data.msg_value.value,
      VAR_4->body.kvp_get.data.value_size);
  break;

 case 130:
  if (VAR_8 == VAR_0) {

   VAR_7 = 1;
   FUNC_0(VAR_3, "Ilegal to change pool %d from host\n",
       VAR_8);
  } else {
   VAR_7 = FUNC_4(VAR_8,
       VAR_4->body.kvp_delete.key,
       VAR_4->body.kvp_delete.key_size);
  }
  break;

 default:
  break;
 }

 if (VAR_7 != 0)
  VAR_4->hdr.error = VAR_1;
 return(VAR_7);
}
