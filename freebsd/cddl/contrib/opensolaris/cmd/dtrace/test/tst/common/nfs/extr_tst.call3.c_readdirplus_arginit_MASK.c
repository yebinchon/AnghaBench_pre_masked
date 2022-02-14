
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int fhandle3_val; int fhandle3_len; } ;
struct TYPE_6__ {int data_val; int data_len; } ;
struct TYPE_7__ {TYPE_1__ data; } ;
struct TYPE_8__ {int dircount; int maxcount; TYPE_2__ dir; } ;
typedef TYPE_3__ READDIRPLUS3args ;


 int FUNC_0 (TYPE_3__*,int) ;
 TYPE_4__* VAR_0 ;

__attribute__((used)) static void
FUNC_1(void *VAR_1)
{
 READDIRPLUS3args *VAR_2 = VAR_1;

 FUNC_0(VAR_2, sizeof (*VAR_2));
 VAR_2->dir.data.data_len = VAR_0->fhandle3_len;
 VAR_2->dir.data.data_val = VAR_0->fhandle3_val;
 VAR_2->dircount = 1024;
 VAR_2->maxcount = 1024;
}
