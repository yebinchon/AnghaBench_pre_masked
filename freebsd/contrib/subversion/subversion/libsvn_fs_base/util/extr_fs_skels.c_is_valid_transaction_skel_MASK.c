
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


typedef int transaction_kind_t ;
struct TYPE_13__ {TYPE_6__* children; } ;
typedef TYPE_5__ svn_skel_t ;
typedef int svn_boolean_t ;
struct TYPE_14__ {TYPE_4__* next; } ;
struct TYPE_12__ {TYPE_3__* next; scalar_t__ is_atom; } ;
struct TYPE_11__ {TYPE_2__* next; scalar_t__ is_atom; } ;
struct TYPE_10__ {TYPE_1__* next; int is_atom; } ;
struct TYPE_9__ {int is_atom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*) ;
 scalar_t__ FUNC_1 (TYPE_6__*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static svn_boolean_t
FUNC_2(svn_skel_t *VAR_5, transaction_kind_t *VAR_6)
{
  int VAR_7 = FUNC_0(VAR_5);

  if (VAR_7 != 5)
    return VAR_0;


  if (FUNC_1(VAR_5->children, "transaction"))
    *VAR_6 = VAR_4;
  else if (FUNC_1(VAR_5->children, "committed"))
    *VAR_6 = VAR_2;
  else if (FUNC_1(VAR_5->children, "dead"))
    *VAR_6 = VAR_3;
  else
    return VAR_0;

  if (VAR_5->children->next->is_atom
      && VAR_5->children->next->next->is_atom
      && (! VAR_5->children->next->next->next->is_atom)
      && (! VAR_5->children->next->next->next->next->is_atom))
    return VAR_1;

  return VAR_0;
}
