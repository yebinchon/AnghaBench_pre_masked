
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int abd_flags; scalar_t__ abd_size; } ;
typedef TYPE_1__ abd_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_5(abd_t *VAR_4)
{
 FUNC_2(FUNC_3(VAR_4));
 FUNC_2(VAR_4->abd_flags & VAR_1);
 FUNC_4(VAR_4);

 VAR_4->abd_flags &= ~VAR_1;

 VAR_4->abd_flags &= ~VAR_0;

 FUNC_0(VAR_2);
 FUNC_1(VAR_3, -(int)VAR_4->abd_size);
}
