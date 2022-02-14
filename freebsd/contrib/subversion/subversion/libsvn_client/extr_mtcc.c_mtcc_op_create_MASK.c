
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ svn_boolean_t ;
struct TYPE_4__ {char* name; int src_rev; int children; int kind; } ;
typedef TYPE_1__ mtcc_op_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int,int) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 char* FUNC_2 (int *,char const*) ;

__attribute__((used)) static mtcc_op_t *
FUNC_3(const char *VAR_5,
               svn_boolean_t VAR_6,
               svn_boolean_t VAR_7,
               apr_pool_t *VAR_8)
{
  mtcc_op_t *VAR_9;

  VAR_9 = FUNC_1(VAR_8, sizeof(*VAR_9));
  VAR_9->name = VAR_5 ? FUNC_2(VAR_8, VAR_5) : "";

  if (VAR_6)
    VAR_9->kind = VAR_7 ? VAR_0 : VAR_1;
  else
    VAR_9->kind = VAR_7 ? VAR_2 : VAR_3;

  if (VAR_7)
    VAR_9->children = FUNC_0(VAR_8, 4, sizeof(mtcc_op_t *));

  VAR_9->src_rev = VAR_4;

  return VAR_9;
}
