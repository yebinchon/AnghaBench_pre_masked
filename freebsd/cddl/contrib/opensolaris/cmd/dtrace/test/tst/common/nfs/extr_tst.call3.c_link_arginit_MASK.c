
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_14__ {int fhandle3_val; int fhandle3_len; } ;
struct TYPE_8__ {int data_val; int data_len; } ;
struct TYPE_9__ {TYPE_1__ data; } ;
struct TYPE_10__ {char* name; TYPE_2__ dir; } ;
struct TYPE_11__ {int data_val; int data_len; } ;
struct TYPE_12__ {TYPE_4__ data; } ;
struct TYPE_13__ {TYPE_3__ link; TYPE_5__ file; } ;
typedef TYPE_6__ LINK3args ;


 TYPE_7__* VAR_0 ;

__attribute__((used)) static void
FUNC_0(void *VAR_1)
{
 LINK3args *VAR_2 = VAR_1;

 VAR_2->file.data.data_len = VAR_0->fhandle3_len;
 VAR_2->file.data.data_val = VAR_0->fhandle3_val;
 VAR_2->link.dir.data.data_len = VAR_0->fhandle3_len;
 VAR_2->link.dir.data.data_val = VAR_0->fhandle3_val;
 VAR_2->link.name = "samf";
}
