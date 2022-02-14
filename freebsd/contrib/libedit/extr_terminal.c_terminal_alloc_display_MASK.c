
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * el_vdisplay; int * el_display; } ;
typedef TYPE_1__ EditLine ;


 void* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(EditLine *VAR_0)
{
 VAR_0->el_display = FUNC_0(VAR_0);
 if (VAR_0->el_display == ((void*)0))
  goto done;
 VAR_0->el_vdisplay = FUNC_0(VAR_0);
 if (VAR_0->el_vdisplay == ((void*)0))
  goto done;
 return 0;
done:
 FUNC_1(VAR_0);
 return -1;
}
