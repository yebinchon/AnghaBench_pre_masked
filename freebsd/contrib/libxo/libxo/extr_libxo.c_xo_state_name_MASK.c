
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xo_state_t ;
typedef int names ;



__attribute__((used)) static const char *
FUNC_0 (xo_state_t VAR_0)
{
    static const char *VAR_1[] = {
 "init",
 "open_container",
 "close_container",
 "open_list",
 "close_list",
 "open_instance",
 "close_instance",
 "open_leaf_list",
 "close_leaf_list",
 "discarding",
 "marker",
 "emit",
 "emit_leaf_list",
 "finish",
 ((void*)0)
    };

    if (VAR_0 < (sizeof(VAR_1) / sizeof(VAR_1[0])))
 return VAR_1[VAR_0];

    return "unknown";
}
