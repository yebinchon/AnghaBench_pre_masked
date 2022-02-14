
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_boolean_t ;
struct TYPE_7__ {char const* valid; int offset; int action; } ;
typedef TYPE_1__ rule ;
typedef int ms ;
struct TYPE_9__ {int tm_gmtoff; } ;
struct TYPE_8__ {int offhours; int offminutes; TYPE_3__ base; } ;
typedef TYPE_2__ match_state ;
typedef TYPE_3__ apr_time_exp_t ;
typedef int apr_int32_t ;




 int VAR_0 ;




 int VAR_1 ;

 TYPE_1__* FUNC_0 (char const) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 char* FUNC_2 (char const*,char) ;

__attribute__((used)) static svn_boolean_t
FUNC_3(apr_time_exp_t *VAR_2, svn_boolean_t *VAR_3,
               const char *VAR_4, const char *VAR_5)
{
  int VAR_6 = 100000;
  int VAR_7 = 0;
  match_state VAR_8;
  char *VAR_9 = (char *)&VAR_8;

  FUNC_1(&VAR_8, 0, sizeof(VAR_8));

  for (;;)
    {
      const rule *VAR_10 = FUNC_0(*VAR_4++);
      char VAR_11 = *VAR_5++;
      apr_int32_t *VAR_12;

      if (!VAR_10 || (VAR_10->valid
                     && (!VAR_11 || !FUNC_2(VAR_10->valid, VAR_11))))
        return VAR_0;





      VAR_12 = (apr_int32_t *)(VAR_9 + VAR_10->offset);
      switch (VAR_10->action)
        {
        case 133:
          *VAR_12 = *VAR_12 * 10 + VAR_11 - '0';
          continue;
        case 132:
          *VAR_12 += (VAR_11 - '0') * VAR_6;
          VAR_6 /= 10;
          continue;
        case 128:
          VAR_7 = VAR_11;
          continue;
        case 130:
          VAR_5--;
          continue;
        case 131:
          continue;
        case 129:
          if (!VAR_11)
            break;
          VAR_10 = FUNC_0(*VAR_4);
          if (!FUNC_2(VAR_10->valid, VAR_11))
            VAR_4 = FUNC_2(VAR_4, ']') + 1;
          VAR_5--;
          continue;
        case 134:
          if (VAR_11)
            return VAR_0;
          break;
        }

      break;
    }


  if (VAR_8.offhours > 23 || VAR_8.offminutes > 59)
    return VAR_0;



  switch (VAR_7)
    {
    case '+':
      VAR_8.base.tm_gmtoff = VAR_8.offhours * 3600 + VAR_8.offminutes * 60;
      break;
    case '-':
      VAR_8.base.tm_gmtoff = -(VAR_8.offhours * 3600 + VAR_8.offminutes * 60);
      break;
    }

  *VAR_2 = VAR_8.base;
  *VAR_3 = (VAR_7 == 0);
  return VAR_1;
}
