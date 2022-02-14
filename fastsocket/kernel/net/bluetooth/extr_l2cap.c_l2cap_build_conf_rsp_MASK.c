
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sock {int dummy; } ;
struct l2cap_conf_rsp {void* flags; void* result; void* scid; void* data; } ;
struct TYPE_2__ {int dcid; } ;


 int FUNC_0 (char*,struct sock*) ;
 void* FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (struct sock*) ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_0, void *VAR_1, u16 VAR_2, u16 VAR_3)
{
 struct l2cap_conf_rsp *VAR_4 = VAR_1;
 void *VAR_5 = VAR_4->data;

 FUNC_0("sk %p", VAR_0);

 VAR_4->scid = FUNC_1(FUNC_2(VAR_0)->dcid);
 VAR_4->result = FUNC_1(VAR_2);
 VAR_4->flags = FUNC_1(VAR_3);

 return VAR_5 - VAR_1;
}
