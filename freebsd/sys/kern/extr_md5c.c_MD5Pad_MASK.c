
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* count; } ;
typedef TYPE_1__ MD5_CTX ;


 int FUNC_0 (unsigned char*,int*,int) ;
 int FUNC_1 (TYPE_1__*,unsigned char*,int) ;
 unsigned char* VAR_0 ;

__attribute__((used)) static void
FUNC_2 (MD5_CTX *VAR_1)
{
 unsigned char VAR_2[8];
 unsigned int VAR_3, VAR_4;


 FUNC_0 (VAR_2, VAR_1->count, 8);


 VAR_3 = (unsigned int)((VAR_1->count[0] >> 3) & 0x3f);
 VAR_4 = (VAR_3 < 56) ? (56 - VAR_3) : (120 - VAR_3);
 FUNC_1 (VAR_1, VAR_0, VAR_4);


 FUNC_1 (VAR_1, VAR_2, 8);
}
