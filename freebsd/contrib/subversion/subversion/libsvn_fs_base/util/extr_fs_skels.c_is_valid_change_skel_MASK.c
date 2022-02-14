
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* next; struct TYPE_9__* children; scalar_t__ is_atom; } ;
typedef TYPE_3__ svn_skel_t ;
typedef int svn_fs_path_change_kind_t ;
typedef int svn_boolean_t ;
struct TYPE_8__ {TYPE_1__* next; scalar_t__ is_atom; } ;
struct TYPE_7__ {TYPE_3__* next; scalar_t__ is_atom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,char*) ;

__attribute__((used)) static svn_boolean_t
FUNC_2(svn_skel_t *VAR_7, svn_fs_path_change_kind_t *VAR_8)
{
  if ((FUNC_0(VAR_7) == 6)
      && FUNC_1(VAR_7->children, "change")
      && VAR_7->children->next->is_atom
      && VAR_7->children->next->next->is_atom
      && VAR_7->children->next->next->next->is_atom
      && VAR_7->children->next->next->next->next->is_atom
      && VAR_7->children->next->next->next->next->next->is_atom)
    {
      svn_skel_t *VAR_9 = VAR_7->children->next->next->next;


      if (FUNC_1(VAR_9, "reset"))
        {
          if (VAR_8)
            *VAR_8 = VAR_6;
          return VAR_1;
        }
      if (FUNC_1(VAR_9, "add"))
        {
          if (VAR_8)
            *VAR_8 = VAR_2;
          return VAR_1;
        }
      if (FUNC_1(VAR_9, "delete"))
        {
          if (VAR_8)
            *VAR_8 = VAR_3;
          return VAR_1;
        }
      if (FUNC_1(VAR_9, "replace"))
        {
          if (VAR_8)
            *VAR_8 = VAR_5;
          return VAR_1;
        }
      if (FUNC_1(VAR_9, "modify"))
        {
          if (VAR_8)
            *VAR_8 = VAR_4;
          return VAR_1;
        }
    }
  return VAR_0;
}
