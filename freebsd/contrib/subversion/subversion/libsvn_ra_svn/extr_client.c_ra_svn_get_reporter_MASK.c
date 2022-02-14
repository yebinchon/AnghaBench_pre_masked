
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int conn; } ;
typedef TYPE_1__ svn_ra_svn__session_baton_t ;
typedef int svn_ra_reporter3_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_delta_editor_t ;
struct TYPE_6__ {void* edit_baton; int const* editor; int * pool; int conn; TYPE_1__* sess_baton; } ;
typedef TYPE_2__ ra_svn_reporter_baton_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (int *,int) ;
 int VAR_2 ;
 int FUNC_2 (int const**,void**,int const*,void*,int ,int,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_ra_svn__session_baton_t *VAR_5,
                    apr_pool_t *VAR_6,
                    const svn_delta_editor_t *VAR_7,
                    void *VAR_8,
                    const char *VAR_9,
                    svn_depth_t VAR_10,
                    const svn_ra_reporter3_t **VAR_11,
                    void **VAR_12)
{
  ra_svn_reporter_baton_t *VAR_13;
  const svn_delta_editor_t *VAR_14;
  void *VAR_15;




  if ((VAR_10 != VAR_3) && (VAR_10 != VAR_4)
      && ! FUNC_3(VAR_5->conn, VAR_1))
    {
      FUNC_0(FUNC_2(&VAR_14,
                                            &VAR_15,
                                            VAR_7, VAR_8, VAR_10,
                                            *VAR_9 != '\0',
                                            VAR_6));
      VAR_7 = VAR_14;
      VAR_8 = VAR_15;
    }

  VAR_13 = FUNC_1(VAR_6, sizeof(*VAR_13));
  VAR_13->sess_baton = VAR_5;
  VAR_13->conn = VAR_5->conn;
  VAR_13->pool = VAR_6;
  VAR_13->editor = VAR_7;
  VAR_13->edit_baton = VAR_8;

  *VAR_11 = &VAR_2;
  *VAR_12 = VAR_13;

  return VAR_0;
}
