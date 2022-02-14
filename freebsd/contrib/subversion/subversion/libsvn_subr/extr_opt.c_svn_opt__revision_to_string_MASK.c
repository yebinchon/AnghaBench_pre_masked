
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int date; int number; } ;
struct TYPE_5__ {int kind; TYPE_1__ value; } ;
typedef TYPE_2__ svn_opt_revision_t ;
typedef int apr_pool_t ;


 char const* FUNC_0 (int *,char*,int ) ;
 char const* FUNC_1 (int ,int *) ;

const char *
FUNC_2(const svn_opt_revision_t *VAR_0,
                            apr_pool_t *VAR_1)
{
  switch (VAR_0->kind)
    {
      case 129:
        return "unspecified";
      case 131:
        return FUNC_0(VAR_1, "%ld", VAR_0->value.number);
      case 133:

        return FUNC_1(VAR_0->value.date, VAR_1);
      case 134:
        return "committed";
      case 130:
        return "previous";
      case 135:
        return "base";
      case 128:
        return "working";
      case 132:
        return "head";
      default:
        return ((void*)0);
    }
}
