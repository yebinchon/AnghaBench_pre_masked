
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {TYPE_6__* children; } ;
typedef TYPE_5__ svn_skel_t ;
typedef int svn_boolean_t ;
struct TYPE_14__ {TYPE_4__* next; } ;
struct TYPE_12__ {TYPE_3__* next; scalar_t__ is_atom; } ;
struct TYPE_11__ {TYPE_2__* next; scalar_t__ is_atom; } ;
struct TYPE_10__ {TYPE_1__* next; scalar_t__ is_atom; } ;
struct TYPE_9__ {scalar_t__ is_atom; } ;


 int FUNC_0 (TYPE_5__ const*) ;
 scalar_t__ FUNC_1 (TYPE_6__*,char*) ;

__attribute__((used)) static svn_boolean_t
FUNC_2(const svn_skel_t *VAR_0)
{
  return (FUNC_0(VAR_0) == 5
          && FUNC_1(VAR_0->children, "version")
          && VAR_0->children->next->is_atom
          && VAR_0->children->next->next->is_atom
          && VAR_0->children->next->next->next->is_atom
          && VAR_0->children->next->next->next->next->is_atom);
}
