
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int count; int val_sha1; int val_md5; } ;
typedef TYPE_1__ br_md5sha1_context ;


 int FUNC_0 (int ,int,unsigned char const*) ;
 int FUNC_1 (int ,int,unsigned char const*) ;

void
FUNC_2(br_md5sha1_context *VAR_0, const void *VAR_1, uint64_t VAR_2)
{
 const unsigned char *VAR_3;

 VAR_3 = VAR_1;
 FUNC_1(VAR_0->val_md5, 4, VAR_3);
 FUNC_0(VAR_0->val_sha1, 5, VAR_3 + 16);
 VAR_0->count = VAR_2;
}
