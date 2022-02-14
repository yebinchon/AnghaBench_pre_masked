
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ file_external; scalar_t__ switched; } ;
typedef TYPE_1__ svn_client_status_t ;



__attribute__((used)) static char
FUNC_0(const svn_client_status_t *VAR_0)
{
  if (VAR_0->switched)
    return 'S';
  else if (VAR_0->file_external)
    return 'X';
  else
    return ' ';
}
