
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varent {int const* v_name; int v_flags; int** vec; struct varent* v_parent; scalar_t__ v_right; scalar_t__ v_left; scalar_t__ v_bal; struct varent** v_link; } ;
typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*,int const*) ;
 int const* FUNC_1 (int const*) ;
 int VAR_2 ;
 int FUNC_2 (struct varent*,int,int ) ;
 int FUNC_3 (int**) ;
 int FUNC_4 (int,int const*) ;
 int FUNC_5 (int**) ;
 struct varent* FUNC_6 (int) ;

void
FUNC_7(const Char *VAR_3, Char **VAR_4, struct varent *VAR_5, int VAR_6)
{
    struct varent *VAR_7;
    int VAR_8;

    VAR_8 = 0;
    while ((VAR_7 = VAR_5->v_link[VAR_8]) != 0) {
 if ((VAR_8 = *VAR_3 - *VAR_7->v_name) == 0 &&
     (VAR_8 = FUNC_0(VAR_3, VAR_7->v_name)) == 0) {
     if (VAR_7->v_flags & VAR_2)
  FUNC_4(VAR_1|VAR_0, VAR_7->v_name);
     FUNC_3(VAR_7->vec);
     VAR_7->v_flags = VAR_6;
     FUNC_5(VAR_7->vec = VAR_4);
     return;
 }
 VAR_5 = VAR_7;
 VAR_8 = VAR_8 > 0;
    }
    VAR_5->v_link[VAR_8] = VAR_7 = FUNC_6(sizeof(struct varent));
    VAR_7->v_name = FUNC_1(VAR_3);
    VAR_7->v_flags = VAR_6;
    VAR_7->v_bal = 0;
    VAR_7->v_left = VAR_7->v_right = 0;
    VAR_7->v_parent = VAR_5;
    FUNC_2(VAR_5, VAR_8, 0);
    FUNC_5(VAR_7->vec = VAR_4);
}
