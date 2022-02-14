
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xo_string_node_t ;
typedef int xo_string_list_t ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_4 (xo_string_list_t *VAR_1)
{
    xo_string_node_t *VAR_2;

    FUNC_3(VAR_1);

    for (;;) {
 VAR_2 = FUNC_0(VAR_1);
        if (VAR_2 == ((void*)0))
            break;
        FUNC_1(VAR_1, VAR_2, VAR_0);
 FUNC_2(VAR_2);
    }
}
