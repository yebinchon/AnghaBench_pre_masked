
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_stream_t ;
struct TYPE_8__ {int close_revision; int close_node; int apply_textdelta; int set_fulltext; int remove_node_props; int delete_node_property; int set_node_property; int set_revision_property; int new_node_record; int new_revision_record; int uuid_record; int magic_header_record; } ;
typedef TYPE_1__ svn_repos_parse_fns3_t ;
typedef int svn_ra_session_t ;
struct TYPE_9__ {scalar_t__ apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
struct parse_baton {char const* root_url; char const* parent_dir; int * skip_revprops; void* oldest_dumpstream_rev; void* last_rev_mapped; int rev_map; int quiet; int * aux_session; int * session; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int *,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int const**,int *,int ,void*,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_2__* FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int *,int ,int const*,int *) ;
 int FUNC_6 (int *,char const**,char const*,int *) ;
 int FUNC_7 (int *,char const**,int *) ;
 int FUNC_8 (int *,char const**,int *) ;
 int FUNC_9 (int *,int *,int ,int *) ;
 TYPE_2__* FUNC_10 (int *,TYPE_1__*,struct parse_baton*,int ,int ,void*,int *) ;
 int VAR_16 ;

svn_error_t *
FUNC_11(svn_stream_t *VAR_17,
                           svn_ra_session_t *VAR_18,
                           svn_ra_session_t *VAR_19,
                           svn_boolean_t VAR_20,
                           apr_hash_t *VAR_21,
                           svn_cancel_func_t VAR_22,
                           void *VAR_23,
                           apr_pool_t *VAR_24)
{
  svn_repos_parse_fns3_t *VAR_25;
  struct parse_baton *VAR_26;
  const svn_string_t *VAR_27;
  svn_boolean_t VAR_28;
  svn_error_t *VAR_29;
  const char *VAR_30, *VAR_31, *VAR_32;

  FUNC_0(FUNC_9(VAR_18, &VAR_28,
                                VAR_4,
                                VAR_24));
  FUNC_0(FUNC_3(&VAR_27, VAR_18, VAR_22, VAR_23, VAR_24));
  FUNC_0(FUNC_7(VAR_18, &VAR_31, VAR_24));
  FUNC_0(FUNC_8(VAR_18, &VAR_30, VAR_24));
  FUNC_0(FUNC_6(VAR_18, &VAR_32,
                                           VAR_30, VAR_24));

  VAR_25 = FUNC_2(VAR_24, sizeof(*VAR_25));
  VAR_25->magic_header_record = VAR_9;
  VAR_25->uuid_record = VAR_16;
  VAR_25->new_revision_record = VAR_11;
  VAR_25->new_node_record = VAR_10;
  VAR_25->set_revision_property = VAR_15;
  VAR_25->set_node_property = VAR_14;
  VAR_25->delete_node_property = VAR_8;
  VAR_25->remove_node_props = VAR_12;
  VAR_25->set_fulltext = VAR_13;
  VAR_25->apply_textdelta = VAR_5;
  VAR_25->close_node = VAR_6;
  VAR_25->close_revision = VAR_7;

  VAR_26 = FUNC_2(VAR_24, sizeof(*VAR_26));
  VAR_26->session = VAR_18;
  VAR_26->aux_session = VAR_19;
  VAR_26->quiet = VAR_20;
  VAR_26->root_url = VAR_31;
  VAR_26->parent_dir = VAR_32;
  VAR_26->rev_map = FUNC_1(VAR_24);
  VAR_26->last_rev_mapped = VAR_3;
  VAR_26->oldest_dumpstream_rev = VAR_3;
  VAR_26->skip_revprops = VAR_21;

  VAR_29 = FUNC_10(VAR_17, VAR_25, VAR_26, VAR_0,
                                    VAR_22, VAR_23, VAR_24);



  if ((! VAR_29) || (VAR_29 && (VAR_29->apr_err == VAR_2)))
    VAR_29 = FUNC_4(
              FUNC_5(VAR_18, VAR_1,
                                               VAR_27, VAR_24),
              VAR_29);
  return VAR_29;
}
