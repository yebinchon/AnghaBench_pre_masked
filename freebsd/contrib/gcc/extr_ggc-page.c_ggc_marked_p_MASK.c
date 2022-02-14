
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int page; unsigned long* in_use_p; int order; } ;
typedef TYPE_1__ page_entry ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (char const*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (void const*) ;

int
FUNC_3 (const void *VAR_1)
{
  page_entry *VAR_2;
  unsigned VAR_3, VAR_4;
  unsigned long VAR_5;



  VAR_2 = FUNC_2 (VAR_1);
  FUNC_1 (VAR_2);



  VAR_3 = FUNC_0 (((const char *) VAR_1) - VAR_2->page, VAR_2->order);
  VAR_4 = VAR_3 / VAR_0;
  VAR_5 = (unsigned long) 1 << (VAR_3 % VAR_0);

  return (VAR_2->in_use_p[VAR_4] & VAR_5) != 0;
}
