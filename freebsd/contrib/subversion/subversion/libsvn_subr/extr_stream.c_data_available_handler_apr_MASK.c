
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct baton_apr {int file; int pool; } ;
typedef scalar_t__ apr_status_t ;
struct TYPE_4__ {int f; } ;
struct TYPE_5__ {int reqevents; int p; TYPE_1__ desc; int desc_type; } ;
typedef TYPE_2__ apr_pollfd_t ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,int *,int ,int *,scalar_t__*,int *) ;
 int VAR_4 ;
 int * VAR_5 ;
 int * FUNC_3 (char*) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int,int*,int ) ;
 int * FUNC_7 (int ,int *,int *) ;
 int * FUNC_8 (scalar_t__,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(void *VAR_6, svn_boolean_t *VAR_7)
{
  struct baton_apr *VAR_8 = VAR_6;
  apr_status_t VAR_9;

  apr_pollfd_t VAR_10;
  int VAR_11;

  VAR_10.desc_type = VAR_1;
  VAR_10.desc.f = VAR_8->file;
  VAR_10.p = VAR_8->pool;

  VAR_10.reqevents = VAR_0;

  VAR_9 = FUNC_6(&VAR_10, 1, &VAR_11, 0);

  if (VAR_9 == VAR_2)
    {
      *VAR_7 = (VAR_11 > 0);
      return VAR_5;
    }
  else if (FUNC_0(VAR_9) || FUNC_1(VAR_9))
    {
      *VAR_7 = VAR_3;
      return VAR_5;
    }
  else
    {
      return FUNC_7(VAR_4,
                              FUNC_8(
                                  VAR_9,
                                  FUNC_3("Polling for available data on filestream "
                                    "failed")),
                              ((void*)0));
    }
}
