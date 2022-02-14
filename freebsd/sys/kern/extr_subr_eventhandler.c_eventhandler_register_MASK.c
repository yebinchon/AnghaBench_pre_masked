
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eventhandler_list {int dummy; } ;
struct TYPE_2__ {int ee_priority; void* ee_arg; } ;
struct eventhandler_entry_generic {TYPE_1__ ee; void* func; } ;
typedef int eventhandler_tag ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct eventhandler_list*,char const*,TYPE_1__*) ;
 struct eventhandler_entry_generic* FUNC_1 (int,int ,int) ;

eventhandler_tag
FUNC_2(struct eventhandler_list *VAR_3, const char *VAR_4,
        void *VAR_5, void *VAR_6, int VAR_7)
{
    struct eventhandler_entry_generic *VAR_8;


    VAR_8 = FUNC_1(sizeof(struct eventhandler_entry_generic), VAR_0,
 VAR_1 | VAR_2);
    VAR_8->func = VAR_5;
    VAR_8->ee.ee_arg = VAR_6;
    VAR_8->ee.ee_priority = VAR_7;

    return (FUNC_0(VAR_3, VAR_4, &VAR_8->ee));
}
