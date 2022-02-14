
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; int * data; } ;
struct gss_upcall_msg {TYPE_1__ msg; int uid; } ;



__attribute__((used)) static void FUNC_0(struct gss_upcall_msg *VAR_0)
{
 VAR_0->msg.data = &VAR_0->uid;
 VAR_0->msg.len = sizeof(VAR_0->uid);
}
