
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct glue {int niobs; TYPE_4__* iobs; struct glue* next; } ;
typedef int mbstate_t ;
struct TYPE_8__ {scalar_t__ _size; int * _base; } ;
struct TYPE_7__ {scalar_t__ _size; int * _base; } ;
struct TYPE_6__ {scalar_t__ _size; int * _base; } ;
struct TYPE_9__ {int _flags; int _file; scalar_t__ _flags2; int _mbstate; scalar_t__ _orientation; TYPE_3__ _lb; TYPE_2__ _ub; scalar_t__ _lbfsize; TYPE_1__ _bf; scalar_t__ _r; scalar_t__ _w; int * _p; } ;
typedef TYPE_4__ FILE ;


 int VAR_0 ;
 int FUNC_0 (struct glue*,struct glue*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_1 ;
 struct glue VAR_2 ;
 int FUNC_3 () ;
 struct glue* VAR_3 ;
 int FUNC_4 (int *,int ,int) ;
 struct glue* FUNC_5 (int ) ;

FILE *
FUNC_6(void)
{
 FILE *VAR_4;
 int VAR_5;
 struct glue *VAR_6;

 if (!VAR_1)
  FUNC_3();



 FUNC_1();
 for (VAR_6 = &VAR_2; VAR_6 != ((void*)0); VAR_6 = VAR_6->next) {
  for (VAR_4 = VAR_6->iobs, VAR_5 = VAR_6->niobs; --VAR_5 >= 0; VAR_4++)
   if (VAR_4->_flags == 0)
    goto found;
 }
 FUNC_2();
 if ((VAR_6 = FUNC_5(VAR_0)) == ((void*)0))
  return (((void*)0));
 FUNC_1();
 FUNC_0(VAR_3->next, VAR_6);
 VAR_3 = VAR_6;
 VAR_4 = VAR_6->iobs;
found:
 VAR_4->_flags = 1;
 FUNC_2();
 VAR_4->_p = ((void*)0);
 VAR_4->_w = 0;
 VAR_4->_r = 0;
 VAR_4->_bf._base = ((void*)0);
 VAR_4->_bf._size = 0;
 VAR_4->_lbfsize = 0;
 VAR_4->_file = -1;

 VAR_4->_ub._base = ((void*)0);
 VAR_4->_ub._size = 0;
 VAR_4->_lb._base = ((void*)0);
 VAR_4->_lb._size = 0;

 VAR_4->_orientation = 0;
 FUNC_4(&VAR_4->_mbstate, 0, sizeof(mbstate_t));
 VAR_4->_flags2 = 0;
 return (VAR_4);
}
