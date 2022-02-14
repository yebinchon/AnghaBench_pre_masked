
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
typedef int AUTH_CREATE_GIDLIST_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int ,int,int *) ;
 int FUNC_3 () ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,char*,int ) ;

int
FUNC_5(void)
{
  AUTH_CREATE_GIDLIST_TYPE VAR_6 = 0;
  if (VAR_3.flags & VAR_0) {
    FUNC_4(VAR_2, "Using NFS auth for FQHN \"%s\"", VAR_4);
    VAR_5 = FUNC_2(VAR_4, 0, 0, 1, &VAR_6);
  } else {
    VAR_5 = FUNC_3();
  }


  if (!VAR_5)
    return VAR_1;

  return 0;
}
