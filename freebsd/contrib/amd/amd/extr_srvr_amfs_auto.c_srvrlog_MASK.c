
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fs_type; int fs_host; } ;
typedef TYPE_1__ fserver ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,char*) ;

void
FUNC_1(fserver *VAR_1, char *VAR_2)
{
  FUNC_0(VAR_0, "file server %s, type %s, state %s", VAR_1->fs_host, VAR_1->fs_type, VAR_2);
}
