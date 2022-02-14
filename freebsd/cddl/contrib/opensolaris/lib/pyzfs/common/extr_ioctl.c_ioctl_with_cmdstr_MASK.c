
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ zc_history; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef scalar_t__ uint64_t ;


 char* VAR_0 ;
 int FUNC_0 (int ,int,TYPE_1__*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(int VAR_2, zfs_cmd_t *VAR_3)
{
 int VAR_4;

 if (VAR_0[0])
  VAR_3->zc_history = (uint64_t)(uintptr_t)VAR_0;
 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 VAR_0[0] = '\0';
 return (VAR_4);
}
