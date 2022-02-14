
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int number; } ;
struct TYPE_5__ {int kind; TYPE_1__ value; } ;
typedef TYPE_2__ svn_opt_revision_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int *,int ) ;
 char* FUNC_2 (int *,char*,int) ;
 int * FUNC_3 (int ,int *,int ,int,char const*) ;



__attribute__((used)) static svn_error_t *
FUNC_4(const char **VAR_2,
                       const char *VAR_3,
                       const svn_opt_revision_t *VAR_4,
                       apr_pool_t *VAR_5)
{
  switch (VAR_4->kind)
    {
    case 129:
      *VAR_2 = FUNC_2(VAR_5, "HEAD", 4);
      break;
    case 128:
      *VAR_2 = FUNC_1(VAR_5, VAR_4->value.number);
      break;
    default:
      return FUNC_3
        (VAR_0, ((void*)0),
         FUNC_0("Illegal file external revision kind %d for path '%s'"),
         VAR_4->kind, VAR_3);
      break;
    }

  return VAR_1;
}
