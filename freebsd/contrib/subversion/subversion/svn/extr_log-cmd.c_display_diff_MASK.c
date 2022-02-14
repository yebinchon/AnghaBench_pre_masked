
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int svn_stream_t ;
struct TYPE_9__ {scalar_t__ number; } ;
struct TYPE_10__ {TYPE_1__ value; void* kind; } ;
typedef TYPE_2__ svn_opt_revision_t ;
struct TYPE_11__ {scalar_t__ revision; } ;
typedef TYPE_3__ svn_log_entry_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_client_ctx_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int *,char const*,TYPE_2__ const*,TYPE_2__*,TYPE_2__*,int *,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int *,int *,int *,int *,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char const*,char*,int ,int *) ;
 void* VAR_3 ;
 int FUNC_5 (int *,char*) ;

__attribute__((used)) static svn_error_t *
FUNC_6(const svn_log_entry_t *VAR_4,
             const char *VAR_5,
             const svn_opt_revision_t *VAR_6,
             svn_depth_t VAR_7,
             const char *VAR_8,
             svn_stream_t *VAR_9,
             svn_stream_t *VAR_10,
             svn_client_ctx_t *VAR_11,
             apr_pool_t *VAR_12)
{
  apr_array_header_t *VAR_13;
  svn_opt_revision_t VAR_14;
  svn_opt_revision_t VAR_15;


  if (VAR_8)
    VAR_13 = FUNC_4(VAR_8, " \t\n\r",
                                     VAR_2, VAR_12);
  else
    VAR_13 = ((void*)0);

  VAR_14.kind = VAR_3;
  VAR_14.value.number = VAR_4->revision - 1;
  VAR_15.kind = VAR_3;
  VAR_15.value.number = VAR_4->revision;

  FUNC_0(FUNC_5(VAR_9, "\n"));
  FUNC_0(FUNC_2(VAR_13,
                               VAR_5,
                               VAR_6,
                               &VAR_14, &VAR_15,
                               ((void*)0),
                               VAR_7,
                               VAR_0 ,
                               VAR_0 ,
                               VAR_2 ,
                               VAR_0 ,
                               VAR_0 ,
                               VAR_0 ,
                               VAR_0 ,
                               VAR_0 ,
                               FUNC_3(VAR_12),
                               VAR_9,
                               VAR_10,
                               ((void*)0),
                               VAR_11, VAR_12));
  FUNC_0(FUNC_5(VAR_9, FUNC_1("\n")));
  return VAR_1;
}
