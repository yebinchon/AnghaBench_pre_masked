
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* _n_offset; scalar_t__ _n_zeroes; } ;
struct TYPE_8__ {int _n_name; TYPE_1__ _n_n; } ;
struct internal_syment {void* n_numaux; void* n_sclass; void* n_type; void* n_scnum; void* n_value; TYPE_3__ _n; } ;
typedef int bfd ;
struct TYPE_7__ {int e_offset; } ;
struct TYPE_9__ {scalar_t__* e_name; TYPE_2__ e; } ;
struct TYPE_10__ {int e_numaux; int e_sclass; int e_type; int e_scnum; int e_value; TYPE_4__ e; } ;
typedef TYPE_5__ SYMENT ;


 int FUNC_0 (int *,void*,void*) ;
 void* FUNC_1 (int *,int ) ;
 void* FUNC_2 (int *,int ) ;
 void* FUNC_3 (int *,int ) ;
 int VAR_0 ;
 int FUNC_4 (int ,scalar_t__*,int ) ;

__attribute__((used)) static void
FUNC_5 (bfd * VAR_1, void * VAR_2, void * VAR_3)
{
  SYMENT *VAR_4 = (SYMENT *) VAR_2;
  struct internal_syment *VAR_5 = (struct internal_syment *) VAR_3;

  if (VAR_4->e.e_name[0] == 0)
    {
      VAR_5->_n._n_n._n_zeroes = 0;
      VAR_5->_n._n_n._n_offset = FUNC_2 (VAR_1, VAR_4->e.e.e_offset);
    }
  else
    {



      FUNC_4 (VAR_5->_n._n_name, VAR_4->e.e_name, VAR_0);

    }

  VAR_5->n_value = FUNC_2 (VAR_1, VAR_4->e_value);
  VAR_5->n_scnum = FUNC_1 (VAR_1, VAR_4->e_scnum);
  if (sizeof (VAR_4->e_type) == 2)
    VAR_5->n_type = FUNC_1 (VAR_1, VAR_4->e_type);
  else
    VAR_5->n_type = FUNC_2 (VAR_1, VAR_4->e_type);
  VAR_5->n_sclass = FUNC_3 (VAR_1, VAR_4->e_sclass);
  VAR_5->n_numaux = FUNC_3 (VAR_1, VAR_4->e_numaux);



}
