
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_options {int dummy; } ;
struct get_options {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct get_options*,char*,int,char**) ;
 int FUNC_1 (int ,char*) ;

int
FUNC_2(struct list_options *VAR_1, int VAR_2, char **VAR_3)
{
    if(sizeof(struct get_options) != sizeof(struct list_options)) {
 FUNC_1(VAR_0, "programmer error: sizeof(struct get_options) != sizeof(struct list_options)");
 return 0;
    }
    return FUNC_0((struct get_options*)VAR_1, "list", VAR_2, VAR_3);
}
