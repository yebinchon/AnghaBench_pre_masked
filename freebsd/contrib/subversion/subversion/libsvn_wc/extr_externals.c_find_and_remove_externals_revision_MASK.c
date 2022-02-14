
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ kind; } ;
struct TYPE_6__ {TYPE_3__ revision; } ;
typedef TYPE_1__ svn_wc_external_item2_t ;
struct TYPE_7__ {scalar_t__ member_0; scalar_t__ kind; } ;
typedef TYPE_2__ svn_opt_revision_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int *,char*,char const*) ;
 int * FUNC_2 (int ,int *,int ,int ,char const*,char const*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_2__*,char const*,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static svn_error_t *
FUNC_4(int *VAR_6,
                                   const char **VAR_7,
                                   const char **VAR_8,
                                   int VAR_9,
                                   svn_wc_external_item2_t *VAR_10,
                                   const char *VAR_11,
                                   const char *VAR_12,
                                   apr_pool_t *VAR_13)
{
  int VAR_14;

  for (VAR_14 = 0; VAR_14 < 2; ++VAR_14)
    {
      const char *VAR_15 = VAR_8[VAR_14];

      if (VAR_15[0] == '-' && VAR_15[1] == 'r')
        {
          svn_opt_revision_t VAR_16 = { VAR_5 };
          const char *VAR_17;
          int VAR_18;
          int VAR_19;

          *VAR_6 = VAR_14;

          if (VAR_15[2] == '\0')
            {


              if (VAR_9 != 4)
                goto parse_error;

              VAR_18 = 2;
              VAR_17 = VAR_8[VAR_14+1];
            }
          else
            {


              if (VAR_9 != 3)
                goto parse_error;

              VAR_18 = 1;
              VAR_17 = VAR_15+2;
            }

          if (FUNC_3(&VAR_10->revision,
                                     &VAR_16,
                                     VAR_17, VAR_13) != 0)
            goto parse_error;

          if (VAR_16.kind != VAR_5)
            goto parse_error;

          if (VAR_10->revision.kind != VAR_4
              && VAR_10->revision.kind != VAR_3)
            goto parse_error;



          for (VAR_19 = VAR_14; VAR_19 < VAR_9-VAR_18; ++VAR_19)
            VAR_8[VAR_19] = VAR_8[VAR_19+VAR_18];
          VAR_8[VAR_9-VAR_18] = ((void*)0);

          *VAR_7 = FUNC_1(VAR_13, "-r%s", VAR_17);



          return VAR_1;
        }
    }



  if (VAR_9 == 2)
    return VAR_1;

 parse_error:
  return FUNC_2
    (VAR_0, ((void*)0),
     FUNC_0("Error parsing %s property on '%s': '%s'"),
     VAR_2,
     VAR_11,
     VAR_12);
}
