
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {TYPE_5__* next; struct TYPE_15__* children; scalar_t__ is_atom; } ;
typedef TYPE_6__ svn_skel_t ;
typedef int svn_boolean_t ;
struct TYPE_14__ {char* data; scalar_t__ is_atom; TYPE_4__* next; } ;
struct TYPE_13__ {int is_atom; TYPE_3__* next; } ;
struct TYPE_12__ {int is_atom; TYPE_2__* next; } ;
struct TYPE_11__ {TYPE_1__* next; scalar_t__ is_atom; } ;
struct TYPE_10__ {scalar_t__ is_atom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_6__*) ;

__attribute__((used)) static svn_boolean_t
FUNC_1(svn_skel_t *VAR_2, svn_skel_t **VAR_3)
{
  int VAR_4 = FUNC_0(VAR_2);

  if (VAR_4 < 2)
    return VAR_0;


  *VAR_3 = VAR_2->children;


  if (! ((VAR_4 == 2) || (VAR_4 == 3) || (VAR_4 == 4) || (VAR_4 == 6)))
    return VAR_0;


  if ((VAR_4 > 4)
      && (! (VAR_2->children->next->next->next->next->is_atom
             && VAR_2->children->next->next->next->next->next->is_atom)))
    return VAR_0;


  if ((VAR_4 > 3)
      && (! VAR_2->children->next->next->next->is_atom))
    return VAR_0;


  if ((VAR_4 > 2)
      && (! VAR_2->children->next->next->is_atom))
    return VAR_0;


  if (! (VAR_2->children->is_atom
         && VAR_2->children->next->is_atom
         && (VAR_2->children->next->data[0] == '/')))
    return VAR_0;

  return VAR_1;
}
