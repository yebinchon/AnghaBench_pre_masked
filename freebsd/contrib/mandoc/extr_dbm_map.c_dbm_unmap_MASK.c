
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int st_size; } ;


 int FUNC_0 (int ) ;
 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (char*) ;

void
FUNC_3(void)
{
 if (FUNC_1(VAR_0, VAR_2.st_size) == -1)
  FUNC_2("dbm_unmap: munmap");
 if (FUNC_0(VAR_1) == -1)
  FUNC_2("dbm_unmap: close");
 VAR_0 = (char *)-1;
}
