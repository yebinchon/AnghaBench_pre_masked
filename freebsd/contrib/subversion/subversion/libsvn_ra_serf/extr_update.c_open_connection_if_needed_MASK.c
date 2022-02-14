
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int num_conns; int pool; TYPE_2__** conns; int session_url; int context; } ;
typedef TYPE_1__ svn_ra_serf__session_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_status_t ;
struct TYPE_7__ {int last_status_code; int conn; TYPE_1__* session; int bkt_alloc; } ;


 int VAR_0 ;
 int * VAR_1 ;
 TYPE_2__* FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int *,int *) ;
 scalar_t__ FUNC_2 (int *,int ,int ,int ,TYPE_2__*,int ,TYPE_2__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_3 (scalar_t__,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_ra_serf__session_t *VAR_4, int VAR_5)
{


  if (VAR_4->num_conns == 1 ||
      ((VAR_5 / VAR_0) > VAR_4->num_conns))
    {
      int VAR_6 = VAR_4->num_conns;
      apr_status_t VAR_7;

      VAR_4->conns[VAR_6] = FUNC_0(VAR_4->pool, sizeof(*VAR_4->conns[VAR_6]));
      VAR_4->conns[VAR_6]->bkt_alloc = FUNC_1(VAR_4->pool,
                                                                 ((void*)0), ((void*)0));
      VAR_4->conns[VAR_6]->last_status_code = -1;
      VAR_4->conns[VAR_6]->session = VAR_4;
      VAR_7 = FUNC_2(&VAR_4->conns[VAR_6]->conn,
                                       VAR_4->context,
                                       VAR_4->session_url,
                                       VAR_3,
                                       VAR_4->conns[VAR_6],
                                       VAR_2,
                                       VAR_4->conns[VAR_6],
                                       VAR_4->pool);
      if (VAR_7)
        return FUNC_3(VAR_7, ((void*)0));

      VAR_4->num_conns++;
    }

  return VAR_1;
}
