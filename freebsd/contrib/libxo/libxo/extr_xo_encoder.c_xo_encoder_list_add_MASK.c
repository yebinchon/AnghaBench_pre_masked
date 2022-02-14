
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * xe_name; } ;
typedef TYPE_1__ xo_encoder_node_t ;
typedef int ssize_t ;


 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int FUNC_1 (int *,char const*,int) ;
 int FUNC_2 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 void* FUNC_4 (int *,int) ;

__attribute__((used)) static xo_encoder_node_t *
FUNC_5 (const char *VAR_2)
{
    if (VAR_2 == ((void*)0))
 return ((void*)0);

    xo_encoder_node_t *VAR_3 = FUNC_4(((void*)0), sizeof(*VAR_3));
    if (VAR_3) {
 ssize_t VAR_4 = FUNC_2(VAR_2) + 1;
 VAR_3->xe_name = FUNC_4(((void*)0), VAR_4);
 if (VAR_3->xe_name == ((void*)0)) {
     FUNC_3(VAR_3);
     return ((void*)0);
 }

 FUNC_1(VAR_3->xe_name, VAR_2, VAR_4);

 FUNC_0(&VAR_1, VAR_3, VAR_0);
    }

    return VAR_3;
}
