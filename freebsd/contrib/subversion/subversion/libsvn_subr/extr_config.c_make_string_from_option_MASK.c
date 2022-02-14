
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * x_pool; int read_only; } ;
typedef TYPE_1__ svn_config_t ;
typedef int cfg_section_t ;
struct TYPE_7__ {scalar_t__ state; char* value; char* x_value; } ;
typedef TYPE_2__ cfg_option_t ;
typedef int apr_pool_t ;


 char* FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *,char*,char**,int *) ;
 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (char*,char) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(const char **VAR_4, svn_config_t *VAR_5,
                        cfg_section_t *VAR_6, cfg_option_t *VAR_7,
                        apr_pool_t* VAR_8)
{

  if ( VAR_7->state == VAR_2
      || VAR_7->state == VAR_0)
    {



      *VAR_4 = "";


      VAR_7->state = VAR_0;

      return;
    }
  else if (VAR_7->state == VAR_3)
    {



      if (VAR_7->value && FUNC_3(VAR_7->value, '%'))
        {
          apr_pool_t *VAR_9;



          FUNC_1(!VAR_5->read_only);

          VAR_9 = (VAR_8 ? VAR_8 : FUNC_5(VAR_5->x_pool));



          VAR_7->state = VAR_2;
          if (FUNC_2(VAR_5, VAR_6, VAR_7->value, &VAR_7->x_value,
                                  VAR_9))
            VAR_7->state = VAR_1;
          else
            VAR_7->state = VAR_0;


          if (VAR_8 != VAR_5->x_pool)
            {


              if (VAR_7->x_value)
                VAR_7->x_value = FUNC_0(VAR_5->x_pool, VAR_7->x_value,
                                              FUNC_4(VAR_7->x_value));
              if (!VAR_8)
                FUNC_6(VAR_9);
            }
        }
      else
        {
          VAR_7->state = VAR_1;
        }
    }

  if (VAR_7->x_value)
    *VAR_4 = VAR_7->x_value;
  else
    *VAR_4 = VAR_7->value;
}
