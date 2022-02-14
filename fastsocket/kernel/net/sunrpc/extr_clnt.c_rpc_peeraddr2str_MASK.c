
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {char const** address_strings; } ;
struct rpc_clnt {struct rpc_xprt* cl_xprt; } ;
typedef enum rpc_display_format_t { ____Placeholder_rpc_display_format_t } rpc_display_format_t ;



const char *FUNC_0(struct rpc_clnt *VAR_0,
        enum rpc_display_format_t VAR_1)
{
 struct rpc_xprt *VAR_2 = VAR_0->cl_xprt;

 if (VAR_2->address_strings[VAR_1] != ((void*)0))
  return VAR_2->address_strings[VAR_1];
 else
  return "unprintable";
}
