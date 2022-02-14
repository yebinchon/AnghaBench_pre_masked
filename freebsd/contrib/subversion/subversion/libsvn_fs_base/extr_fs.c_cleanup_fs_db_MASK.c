
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int pool; TYPE_2__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_9__ {int bdb; } ;
typedef TYPE_2__ base_fs_data_t ;
struct TYPE_10__ {int (* close ) (TYPE_3__*,int ) ;} ;
typedef TYPE_3__ DB ;


 int FUNC_0 (TYPE_1__*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int * VAR_2 ;
 char* FUNC_2 (int ,char*,char const*) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_fs_t *VAR_3, DB **VAR_4, const char *VAR_5)
{


  base_fs_data_t *VAR_6 = VAR_3->fsap_data;
  if (*VAR_4 && !FUNC_4(VAR_6->bdb))
    {
      DB *VAR_7 = *VAR_4;
      char *VAR_8 = FUNC_2(VAR_3->pool, "closing '%s' database", VAR_5);
      int VAR_9;

      *VAR_4 = 0;
      VAR_9 = VAR_7->close(VAR_7, 0);
      if (VAR_9 == VAR_1)
        {




          FUNC_5(VAR_6->bdb);
          VAR_9 = 0;
        }
      FUNC_1(FUNC_0(VAR_3, VAR_8, VAR_9));
    }

  return VAR_2;
}
