
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int fhandle3_val; int fhandle3_len; } ;
struct TYPE_7__ {int data_val; int data_len; } ;
struct TYPE_8__ {TYPE_1__ data; } ;
struct TYPE_9__ {char* name; TYPE_2__ dir; } ;
struct TYPE_10__ {TYPE_3__ where; } ;
typedef TYPE_4__ CREATE3args ;


 int FUNC_0 (TYPE_4__*,int) ;
 TYPE_5__* VAR_0 ;

__attribute__((used)) static void
FUNC_1(void *VAR_1)
{
 CREATE3args *VAR_2 = VAR_1;

 FUNC_0(VAR_2, sizeof (*VAR_2));
 VAR_2->where.name = "pinky-blue";
 VAR_2->where.dir.data.data_len = VAR_0->fhandle3_len;
 VAR_2->where.dir.data.data_val = VAR_0->fhandle3_val;
}
