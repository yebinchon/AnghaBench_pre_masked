
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varent {int v_flags; int ** vec; int v_name; } ;
typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 struct varent* FUNC_2 (int *,int) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int,int ) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_5(Char *VAR_5, int VAR_6, Char *VAR_7)
{
    struct varent *VAR_8 = FUNC_2(VAR_5, VAR_6);
    Char *VAR_9;

    if (VAR_8->v_flags & VAR_3)
 FUNC_4(VAR_1|VAR_0, VAR_8->v_name);
    VAR_9 = VAR_8->vec[VAR_6 - 1];
    FUNC_0(VAR_9, VAR_4);
    VAR_8->vec[VAR_6 - 1] = FUNC_3(VAR_7, VAR_2);
    FUNC_1(VAR_9);
}
