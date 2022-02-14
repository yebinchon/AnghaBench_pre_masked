
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sc_rtl_revision; scalar_t__ sc_io_coherent; int sc_enabled; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (TYPE_1__*,int,int) ;

__attribute__((used)) static __inline void
FUNC_1(void)
{

 if ((VAR_2 == ((void*)0)) || !VAR_2->sc_enabled)
  return;


 if (VAR_2->sc_io_coherent)
  return;







  FUNC_0(VAR_2, VAR_1, 0xffffffff);
}
