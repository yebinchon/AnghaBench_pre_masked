
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int fhandle3_val; int fhandle3_len; } ;
struct TYPE_5__ {int data_val; int data_len; } ;
struct TYPE_6__ {TYPE_1__ data; } ;
struct TYPE_7__ {TYPE_2__ fsroot; } ;
typedef TYPE_3__ FSINFO3args ;


 TYPE_4__* VAR_0 ;

__attribute__((used)) static void
FUNC_0(void *VAR_1)
{
 FSINFO3args *VAR_2 = VAR_1;

 VAR_2->fsroot.data.data_len = VAR_0->fhandle3_len;
 VAR_2->fsroot.data.data_val = VAR_0->fhandle3_val;
}
