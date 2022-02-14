
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int apr_err; } ;
typedef TYPE_2__ svn_error_t ;
struct rep_write_baton {int scratch_pool; int lockcookie; TYPE_1__* noderev; int fs; int file; int rep_offset; } ;
typedef int apr_status_t ;
struct TYPE_7__ {int id; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 TYPE_2__* FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;

__attribute__((used)) static apr_status_t
FUNC_6(void *VAR_1)
{
  struct rep_write_baton *VAR_2 = VAR_1;
  svn_error_t *VAR_3;


  VAR_3 = FUNC_4(VAR_2->file, VAR_2->rep_offset, VAR_2->scratch_pool);
  VAR_3 = FUNC_1(VAR_3, FUNC_3(VAR_2->file,
                                                        VAR_2->scratch_pool));





  VAR_3 = FUNC_1(VAR_3,
                                 FUNC_5(VAR_2->fs,
                                     FUNC_2(VAR_2->noderev->id),
                                     VAR_2->lockcookie, VAR_2->scratch_pool));
  if (VAR_3)
    {
      apr_status_t VAR_4 = VAR_3->apr_err;
      FUNC_0(VAR_3);
      return VAR_4;
    }

  return VAR_0;
}
