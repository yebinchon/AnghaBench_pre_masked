
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char const* data; size_t len; } ;
struct TYPE_7__ {int copyfrom_path; int copyfrom_rev; int copyfrom_known; int mergeinfo_mod; int prop_mod; int text_mod; int node_kind; int change_kind; TYPE_1__ path; } ;
typedef TYPE_2__ svn_fs_path_change3_t ;
struct TYPE_8__ {int copyfrom_path; int copyfrom_rev; int copyfrom_known; int mergeinfo_mod; int prop_mod; int text_mod; int node_kind; int change_kind; } ;
typedef TYPE_3__ svn_fs_path_change2_t ;



__attribute__((used)) static void
FUNC_0(svn_fs_path_change3_t *VAR_0,
                    const char *VAR_1,
                    size_t VAR_2,
                    svn_fs_path_change2_t *VAR_3)
{
  VAR_0->path.data = VAR_1;
  VAR_0->path.len = VAR_2;
  VAR_0->change_kind = VAR_3->change_kind;
  VAR_0->node_kind = VAR_3->node_kind;
  VAR_0->text_mod = VAR_3->text_mod;
  VAR_0->prop_mod = VAR_3->prop_mod;
  VAR_0->mergeinfo_mod = VAR_3->mergeinfo_mod;
  VAR_0->copyfrom_known = VAR_3->copyfrom_known;
  VAR_0->copyfrom_rev = VAR_3->copyfrom_rev;
  VAR_0->copyfrom_path = VAR_3->copyfrom_path;
}
