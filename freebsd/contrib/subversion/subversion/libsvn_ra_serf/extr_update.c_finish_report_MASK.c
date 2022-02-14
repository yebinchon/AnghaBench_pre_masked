
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int len; int data; } ;
typedef TYPE_2__ svn_stringbuf_t ;
typedef int svn_ra_serf__xml_context_t ;
typedef int svn_ra_serf__session_t ;
struct TYPE_13__ {char* method; char const* path; char* body_type; TYPE_4__* header_delegate_baton; int header_delegate; int custom_accept_encoding; int body_delegate_baton; int body_delegate; } ;
typedef TYPE_3__ svn_ra_serf__handler_t ;
typedef int svn_error_t ;
struct TYPE_14__ {int editor_baton; TYPE_1__* editor; int body; int body_template; int * sess; } ;
typedef TYPE_4__ report_context_t ;
typedef int apr_pool_t ;
struct TYPE_11__ {int * (* abort_edit ) (int ,int *) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (TYPE_4__*,TYPE_3__*,int *) ;
 int VAR_1 ;
 int * FUNC_2 (int ,int *) ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_3__* FUNC_7 (int *,int *,int *,int *) ;
 int FUNC_8 (char const**,int *,int *) ;
 int FUNC_9 (int *,int *,int ) ;
 int FUNC_10 (TYPE_3__*) ;
 int * FUNC_11 (int ,int ,int ,int ,TYPE_4__*,int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ,int *) ;
 int FUNC_14 (TYPE_2__**,int *,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static svn_error_t *
FUNC_15(void *VAR_6,
              apr_pool_t *VAR_7)
{
  report_context_t *VAR_8 = VAR_6;
  svn_ra_serf__session_t *VAR_9 = VAR_8->sess;
  svn_ra_serf__handler_t *VAR_10;
  svn_ra_serf__xml_context_t *VAR_11;
  const char *VAR_12;
  svn_stringbuf_t *VAR_13 = ((void*)0);
  apr_pool_t *VAR_14 = FUNC_5(VAR_7);
  svn_error_t *VAR_15;

  FUNC_14(&VAR_13, VAR_14, "S:update-report");
  FUNC_0(FUNC_13(VAR_8->body_template, VAR_13->data, &VAR_13->len));
  FUNC_0(FUNC_12(VAR_8->body_template));

  FUNC_0(FUNC_8(&VAR_12, VAR_9, VAR_14));

  VAR_11 = FUNC_11(VAR_5,
                                           VAR_4, VAR_3,
                                           VAR_2,
                                           VAR_8,
                                           VAR_14);
  VAR_10 = FUNC_7(VAR_9, VAR_11, ((void*)0),
                                              VAR_14);

  FUNC_9(&VAR_10->body_delegate,
                                         &VAR_10->body_delegate_baton,
                                         VAR_8->body);
  VAR_10->method = "REPORT";
  VAR_10->path = VAR_12;
  VAR_10->body_type = "text/xml";
  VAR_10->custom_accept_encoding = VAR_0;
  VAR_10->header_delegate = VAR_1;
  VAR_10->header_delegate_baton = VAR_8;

  FUNC_10(VAR_10);

  VAR_15 = FUNC_1(VAR_8, VAR_10, VAR_14);

  if (VAR_15)
    {
      VAR_15 = FUNC_4(VAR_15);
      VAR_15 = FUNC_3(
                VAR_15,
                FUNC_4(
                    VAR_8->editor->abort_edit(VAR_8->editor_baton,
                                               VAR_14)));
    }

  FUNC_6(VAR_14);

  return FUNC_4(VAR_15);
}
