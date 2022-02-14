
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fd; int flags; } ;
struct audit_context {int type; TYPE_1__ mmap; } ;
struct TYPE_4__ {struct audit_context* audit_context; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;

void FUNC_0(int VAR_2, int VAR_3)
{
 struct audit_context *VAR_4 = VAR_1->audit_context;
 VAR_4->mmap.fd = VAR_2;
 VAR_4->mmap.flags = VAR_3;
 VAR_4->type = VAR_0;
}
