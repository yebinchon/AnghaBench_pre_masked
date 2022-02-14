
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int apply_textdelta; int delete_node_property; int close_revision; int close_node; int set_fulltext; int remove_node_props; int set_node_property; int set_revision_property; int new_node_record; int new_revision_record; int uuid_record; } ;
typedef TYPE_1__ svn_repos_parser_fns2_t ;
struct TYPE_7__ {int apply_textdelta; int delete_node_property; int close_revision; int close_node; int set_fulltext; int remove_node_props; int set_node_property; int set_revision_property; int new_node_record; int new_revision_record; int uuid_record; int * magic_header_record; } ;
typedef TYPE_2__ svn_repos_parse_fns3_t ;
typedef int apr_pool_t ;


 TYPE_2__* FUNC_0 (int *,int) ;

__attribute__((used)) static svn_repos_parse_fns3_t *
FUNC_1(const svn_repos_parser_fns2_t *VAR_0,
               apr_pool_t *VAR_1)
{
  svn_repos_parse_fns3_t *VAR_2;

  VAR_2 = FUNC_0(VAR_1, sizeof(*VAR_2));
  VAR_2->magic_header_record = ((void*)0);
  VAR_2->uuid_record = VAR_0->uuid_record;
  VAR_2->new_revision_record = VAR_0->new_revision_record;
  VAR_2->new_node_record = VAR_0->new_node_record;
  VAR_2->set_revision_property = VAR_0->set_revision_property;
  VAR_2->set_node_property = VAR_0->set_node_property;
  VAR_2->remove_node_props = VAR_0->remove_node_props;
  VAR_2->set_fulltext = VAR_0->set_fulltext;
  VAR_2->close_node = VAR_0->close_node;
  VAR_2->close_revision = VAR_0->close_revision;
  VAR_2->delete_node_property = VAR_0->delete_node_property;
  VAR_2->apply_textdelta = VAR_0->apply_textdelta;
  return VAR_2;
}
