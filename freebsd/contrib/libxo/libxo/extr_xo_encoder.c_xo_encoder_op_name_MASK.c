
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xo_encoder_op_t ;
typedef int names ;



const char *
FUNC_0 (xo_encoder_op_t VAR_0)
{
    static const char *VAR_1[] = {
          "unknown",
          "create",
          "open_container",
          "close_container",
          "open_list",
          "close_list",
          "open_leaf_list",
          "close_leaf_list",
          "open_instance",
          "close_instance",
          "string",
          "content",
          "finish",
          "flush",
          "destroy",
          "attr",
          "version",
          "options",
    };

    if (VAR_0 > sizeof(VAR_1) / sizeof(VAR_1[0]))
 return "unknown";

    return VAR_1[VAR_0];
}
