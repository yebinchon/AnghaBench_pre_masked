
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * b_buf; } ;
struct TYPE_5__ {TYPE_1__ b_un; } ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;

void
FUNC_2(void)
{




 FUNC_0(VAR_0, &VAR_1);
 if (VAR_1.b_un.b_buf != ((void*)0))
  FUNC_1((char *)VAR_1.b_un.b_buf);
 VAR_1.b_un.b_buf = ((void*)0);
}
