
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int count; int val_sha1; int val_md5; } ;
typedef TYPE_1__ br_md5sha1_context ;


 int FUNC_0 (unsigned char*,int ,int) ;
 int FUNC_1 (unsigned char*,int ,int) ;

uint64_t
FUNC_2(const br_md5sha1_context *VAR_0, void *VAR_1)
{
 unsigned char *VAR_2;

 VAR_2 = VAR_1;
 FUNC_1(VAR_2, VAR_0->val_md5, 4);
 FUNC_0(VAR_2 + 16, VAR_0->val_sha1, 5);
 return VAR_0->count;
}
