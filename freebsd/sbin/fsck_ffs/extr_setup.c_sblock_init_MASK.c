
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * b_buf; } ;
struct TYPE_6__ {TYPE_1__ b_un; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ VAR_8 ;
 TYPE_2__ VAR_9 ;
 int VAR_10 ;

void
FUNC_3(void)
{

 VAR_7 = -1;
 VAR_6 = 0;
 VAR_8 = 0;
 FUNC_2(&VAR_9, VAR_0);
 FUNC_2(&VAR_4, VAR_0);
 VAR_9.b_un.b_buf = FUNC_0(VAR_3);
 VAR_4.b_un.b_buf = FUNC_0(VAR_3);
 if (VAR_9.b_un.b_buf == ((void*)0) || VAR_4.b_un.b_buf == ((void*)0))
  FUNC_1(VAR_2, "cannot allocate space for superblock");
 VAR_5 = VAR_10 = VAR_1;
}
