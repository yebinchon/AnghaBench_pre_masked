
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef int slist_entry ;
struct TYPE_4__ {int gl_size; int gl_maxdepth; int gl_depth; int gl_type; int * gl_freefunc; int * gl_allocfunc; int gl_tag; } ;
struct TYPE_5__ {TYPE_1__ nll_l; int nll_obsoletelock; } ;
typedef TYPE_2__ paged_lookaside_list ;
typedef int lookaside_free_func ;
typedef int lookaside_alloc_func ;
typedef int funcptr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(paged_lookaside_list *VAR_4,
 lookaside_alloc_func *VAR_5, lookaside_free_func *VAR_6,
 uint32_t VAR_7, size_t VAR_8, uint32_t VAR_9, uint16_t VAR_10)
{
 FUNC_1((char *)VAR_4, sizeof(paged_lookaside_list));

 if (VAR_8 < sizeof(slist_entry))
  VAR_4->nll_l.gl_size = sizeof(slist_entry);
 else
  VAR_4->nll_l.gl_size = VAR_8;
 VAR_4->nll_l.gl_tag = VAR_9;
 if (VAR_5 == ((void*)0))
  VAR_4->nll_l.gl_allocfunc =
      FUNC_2((funcptr)VAR_0);
 else
  VAR_4->nll_l.gl_allocfunc = VAR_5;

 if (VAR_6 == ((void*)0))
  VAR_4->nll_l.gl_freefunc =
      FUNC_2((funcptr)VAR_1);
 else
  VAR_4->nll_l.gl_freefunc = VAR_6;





 VAR_4->nll_l.gl_type = VAR_3;
 VAR_4->nll_l.gl_depth = VAR_10;
 VAR_4->nll_l.gl_maxdepth = VAR_2;
}
