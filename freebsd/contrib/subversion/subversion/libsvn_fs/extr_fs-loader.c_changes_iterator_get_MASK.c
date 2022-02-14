
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_5__* fsap_data; } ;
typedef TYPE_2__ svn_fs_path_change_iterator_t ;
struct TYPE_9__ {char const* data; int len; } ;
struct TYPE_11__ {int copyfrom_path; int copyfrom_rev; int copyfrom_known; int mergeinfo_mod; int prop_mod; int text_mod; int node_kind; int change_kind; TYPE_1__ path; } ;
typedef TYPE_3__ svn_fs_path_change3_t ;
struct TYPE_12__ {int copyfrom_path; int copyfrom_rev; int copyfrom_known; int mergeinfo_mod; int prop_mod; int text_mod; int node_kind; int change_kind; } ;
typedef TYPE_4__ svn_fs_path_change2_t ;
typedef int svn_error_t ;
struct TYPE_13__ {scalar_t__ hi; TYPE_3__ change; } ;
typedef TYPE_5__ fsap_iterator_data_t ;


 int * VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 TYPE_4__* FUNC_3 (scalar_t__) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_fs_path_change3_t **VAR_1,
                     svn_fs_path_change_iterator_t *VAR_2)
{
  fsap_iterator_data_t *VAR_3 = VAR_2->fsap_data;

  if (VAR_3->hi)
    {
      const char *VAR_4 = FUNC_1(VAR_3->hi);
      svn_fs_path_change2_t *VAR_5 = FUNC_3(VAR_3->hi);

      VAR_3->change.path.data = VAR_4;
      VAR_3->change.path.len = FUNC_2(VAR_3->hi);
      VAR_3->change.change_kind = VAR_5->change_kind;
      VAR_3->change.node_kind = VAR_5->node_kind;
      VAR_3->change.text_mod = VAR_5->text_mod;
      VAR_3->change.prop_mod = VAR_5->prop_mod;
      VAR_3->change.mergeinfo_mod = VAR_5->mergeinfo_mod;
      VAR_3->change.copyfrom_known = VAR_5->copyfrom_known;
      VAR_3->change.copyfrom_rev = VAR_5->copyfrom_rev;
      VAR_3->change.copyfrom_path = VAR_5->copyfrom_path;

      *VAR_1 = &VAR_3->change;
      VAR_3->hi = FUNC_0(VAR_3->hi);
    }
  else
    {
      *VAR_1 = ((void*)0);
    }

  return VAR_0;
}
