
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ _n_zeroes; scalar_t__ _n_offset; } ;
struct TYPE_4__ {TYPE_1__ _n_n; int _n_name; } ;
struct internal_syment {TYPE_2__ _n; } ;
typedef int bfd ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,size_t) ;
 char* FUNC_3 (int *) ;

const char *
FUNC_4 (bfd *VAR_2,
    const struct internal_syment *VAR_3,
    char *VAR_4)
{


  if (VAR_3->_n._n_n._n_zeroes != 0
      || VAR_3->_n._n_n._n_offset == 0)
    {
      FUNC_2 (VAR_4, VAR_3->_n._n_name, VAR_1);
      VAR_4[VAR_1] = '\0';
      return VAR_4;
    }
  else
    {
      const char *VAR_5;

      FUNC_0 (VAR_3->_n._n_n._n_offset >= VAR_0);
      VAR_5 = FUNC_3 (VAR_2);
      if (VAR_5 == ((void*)0))
 {
   VAR_5 = FUNC_1 (VAR_2);
   if (VAR_5 == ((void*)0))
     return ((void*)0);
 }
      return VAR_5 + VAR_3->_n._n_n._n_offset;
    }
}
