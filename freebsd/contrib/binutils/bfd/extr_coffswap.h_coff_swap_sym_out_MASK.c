
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int _n_offset; } ;
struct TYPE_9__ {scalar_t__* _n_name; TYPE_1__ _n_n; } ;
struct internal_syment {int n_numaux; int n_sclass; int n_type; int n_scnum; int n_value; TYPE_4__ _n; } ;
typedef int bfd ;
struct TYPE_7__ {int e_offset; int e_zeroes; } ;
struct TYPE_8__ {int e_name; TYPE_2__ e; } ;
struct TYPE_10__ {int e_numaux; int e_sclass; int e_type; int e_scnum; int e_value; TYPE_3__ e; } ;
typedef TYPE_5__ SYMENT ;


 int FUNC_0 (int *,void*,void*) ;
 int FUNC_1 (int *,void*,void*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int ,scalar_t__*,int ) ;

__attribute__((used)) static unsigned int
FUNC_6 (bfd * VAR_2, void * VAR_3, void * VAR_4)
{
  struct internal_syment *VAR_5 = (struct internal_syment *) VAR_3;
  SYMENT *VAR_6 =(SYMENT *) VAR_4;





  if (VAR_5->_n._n_name[0] == 0)
    {
      FUNC_3 (VAR_2, 0, VAR_6->e.e.e_zeroes);
      FUNC_3 (VAR_2, VAR_5->_n._n_n._n_offset, VAR_6->e.e.e_offset);
    }
  else
    {



      FUNC_5 (VAR_6->e.e_name, VAR_5->_n._n_name, VAR_1);

    }

  FUNC_3 (VAR_2, VAR_5->n_value, VAR_6->e_value);
  FUNC_2 (VAR_2, VAR_5->n_scnum, VAR_6->e_scnum);

  if (sizeof (VAR_6->e_type) == 2)
    FUNC_2 (VAR_2, VAR_5->n_type, VAR_6->e_type);
  else
    FUNC_3 (VAR_2, VAR_5->n_type, VAR_6->e_type);

  FUNC_4 (VAR_2, VAR_5->n_sclass, VAR_6->e_sclass);
  FUNC_4 (VAR_2, VAR_5->n_numaux, VAR_6->e_numaux);





  return VAR_0;
}
