
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int len; TYPE_2__* path; } ;
typedef TYPE_3__ authz_rule_t ;
struct TYPE_6__ {char* data; } ;
struct TYPE_7__ {int kind; TYPE_1__ pattern; } ;


 int FUNC_0 (char const* const,char const* const) ;

int
FUNC_1(const authz_rule_t *VAR_0, const authz_rule_t *VAR_1)
{
  const int VAR_2 = (VAR_0->len > VAR_1->len ? VAR_1->len : VAR_0->len);
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3)
    {
      int VAR_4 = VAR_0->path[VAR_3].kind - VAR_1->path[VAR_3].kind;
      if (0 == VAR_4)
        {
          const char *const VAR_5 = VAR_0->path[VAR_3].pattern.data;
          const char *const VAR_6 = VAR_1->path[VAR_3].pattern.data;


          if (VAR_5 != VAR_6)
            VAR_4 = FUNC_0(VAR_5, VAR_6);
          else
            VAR_4 = 0;
        }
      if (0 != VAR_4)
        return VAR_4;
    }


  if (VAR_0->len != VAR_1->len)
    return VAR_0->len - VAR_1->len;

  return 0;
}
