
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ count; int val_sha1; int val_md5; int * vtable; } ;
typedef TYPE_1__ br_md5sha1_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;

void
FUNC_1(br_md5sha1_context *VAR_3)
{
 VAR_3->vtable = &VAR_1;
 FUNC_0(VAR_3->val_md5, VAR_0, sizeof VAR_3->val_md5);
 FUNC_0(VAR_3->val_sha1, VAR_2, sizeof VAR_3->val_sha1);
 VAR_3->count = 0;
}
