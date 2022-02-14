
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fd; int proc; } ;
typedef TYPE_1__ gdb_event ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static gdb_event *
FUNC_1 (int VAR_1)
{
  gdb_event *VAR_2;

  VAR_2 = (gdb_event *) FUNC_0 (sizeof (gdb_event));
  VAR_2->proc = VAR_0;
  VAR_2->fd = VAR_1;
  return (VAR_2);
}
