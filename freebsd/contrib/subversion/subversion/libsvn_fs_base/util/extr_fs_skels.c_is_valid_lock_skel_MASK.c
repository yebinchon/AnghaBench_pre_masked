
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_19__ {TYPE_9__* children; } ;
typedef TYPE_8__ svn_skel_t ;
typedef int svn_boolean_t ;
struct TYPE_20__ {TYPE_7__* next; } ;
struct TYPE_18__ {TYPE_6__* next; scalar_t__ is_atom; } ;
struct TYPE_17__ {TYPE_5__* next; scalar_t__ is_atom; } ;
struct TYPE_16__ {TYPE_4__* next; scalar_t__ is_atom; } ;
struct TYPE_15__ {TYPE_3__* next; scalar_t__ is_atom; } ;
struct TYPE_14__ {TYPE_2__* next; scalar_t__ is_atom; } ;
struct TYPE_13__ {TYPE_1__* next; scalar_t__ is_atom; } ;
struct TYPE_12__ {scalar_t__ is_atom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_8__*) ;
 scalar_t__ FUNC_1 (TYPE_9__*,char*) ;

__attribute__((used)) static svn_boolean_t
FUNC_2(svn_skel_t *VAR_2)
{
  if ((FUNC_0(VAR_2) == 8)
      && FUNC_1(VAR_2->children, "lock")
      && VAR_2->children->next->is_atom
      && VAR_2->children->next->next->is_atom
      && VAR_2->children->next->next->next->is_atom
      && VAR_2->children->next->next->next->next->is_atom
      && VAR_2->children->next->next->next->next->next->is_atom
      && VAR_2->children->next->next->next->next->next->next->is_atom
      && VAR_2->children->next->next->next->next->next->next->next->is_atom)
    return VAR_1;

  return VAR_0;
}
