
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* xs_data; } ;
typedef TYPE_1__ xo_string_node_t ;
typedef int xo_string_list_t ;


 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int FUNC_1 (char*,char const*,size_t) ;
 size_t FUNC_2 (char const*) ;
 TYPE_1__* FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

__attribute__((used)) static inline xo_string_node_t *
FUNC_5 (xo_string_list_t *VAR_1, const char *VAR_2)
{
    if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 return ((void*)0);

    FUNC_4(VAR_1);
    size_t VAR_3 = FUNC_2(VAR_2);
    xo_string_node_t *VAR_4;

    VAR_4 = FUNC_3(((void*)0), sizeof(*VAR_4) + VAR_3 + 1);
    if (VAR_4) {
 FUNC_1(VAR_4->xs_data, VAR_2, VAR_3);
 VAR_4->xs_data[VAR_3] = '\0';
 FUNC_0(VAR_1, VAR_4, VAR_0);
    }

    return VAR_4;
}
