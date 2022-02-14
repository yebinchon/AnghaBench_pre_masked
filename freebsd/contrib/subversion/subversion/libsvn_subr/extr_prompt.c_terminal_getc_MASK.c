
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct termios {char* c_cc; } ;
struct TYPE_7__ {int infd; int outfd; struct termios attr; scalar_t__ restore_state; int noecho; } ;
typedef TYPE_2__ terminal_handle_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
struct TYPE_6__ {int f; } ;
struct TYPE_8__ {int reqevents; int rtnevents; int * p; TYPE_1__ desc; int desc_type; } ;
typedef TYPE_3__ apr_pollfd_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (char) ;
 scalar_t__ FUNC_6 (char*,int ) ;
 int FUNC_7 (char,int ) ;
 int FUNC_8 (char) ;
 scalar_t__ FUNC_9 (TYPE_3__*,int,int*,int) ;
 int FUNC_10 (char,int ) ;
 int FUNC_11 (int ,int ) ;
 int * FUNC_12 (int ,int *,int *) ;
 int * FUNC_13 (scalar_t__,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_14(int *VAR_16, terminal_handle_t *VAR_17,
              svn_boolean_t VAR_18, apr_pool_t *VAR_19)
{
  const svn_boolean_t VAR_20 = !VAR_17->noecho;
  apr_status_t VAR_21 = VAR_2;
  char VAR_22;
  {
    apr_pollfd_t VAR_23;
    int VAR_24;

    VAR_23.desc_type = VAR_1;
    VAR_23.desc.f = VAR_17->infd;
    VAR_23.p = VAR_19;
    VAR_23.reqevents = VAR_0;

    VAR_21 = FUNC_9(&VAR_23, 1, &VAR_24, -1);

    if (VAR_24 == 1 && VAR_23.rtnevents & VAR_0)
      VAR_21 = VAR_2;
  }


  if (!VAR_21)
    VAR_21 = FUNC_6(&VAR_22, VAR_17->infd);
  if (FUNC_0(VAR_21))
    {
      *VAR_16 = VAR_9;
      return VAR_5;
    }
  else if (FUNC_1(VAR_21))
    {
      *VAR_16 = VAR_7;
      return VAR_5;
    }
  else if (VAR_21)
    return FUNC_13(VAR_21, FUNC_2("Can't read from terminal"));

  *VAR_16 = (int)(unsigned char)VAR_22;
  return VAR_5;
}
