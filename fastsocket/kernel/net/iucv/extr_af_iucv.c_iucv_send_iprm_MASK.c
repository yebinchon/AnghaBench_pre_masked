
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct iucv_path {int dummy; } ;
struct iucv_message {int dummy; } ;
struct TYPE_2__ {int (* message_send ) (struct iucv_path*,struct iucv_message*,int ,int ,void*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,void*,scalar_t__) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct iucv_path*,struct iucv_message*,int ,int ,void*,int) ;

__attribute__((used)) static int FUNC_2(struct iucv_path *VAR_2, struct iucv_message *VAR_3,
     struct sk_buff *VAR_4)
{
 u8 VAR_5[8];

 FUNC_0(VAR_5, (void *) VAR_4->data, VAR_4->len);
 VAR_5[7] = 0xff - (u8) VAR_4->len;
 return VAR_1->message_send(VAR_2, VAR_3, VAR_0, 0,
     (void *) VAR_5, 8);
}
