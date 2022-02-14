
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int page; unsigned long* in_use_p; int num_free_objects; int order; } ;
typedef TYPE_1__ page_entry ;
struct TYPE_6__ {int debug_file; } ;


 TYPE_4__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (char const*,int ) ;
 int FUNC_1 (int ,char*,void const*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (void const*) ;

int
FUNC_4 (const void *VAR_3)
{
  page_entry *VAR_4;
  unsigned VAR_5, VAR_6;
  unsigned long VAR_7;



  VAR_4 = FUNC_3 (VAR_3);
  FUNC_2 (VAR_4);



  VAR_5 = FUNC_0 (((const char *) VAR_3) - VAR_4->page, VAR_4->order);
  VAR_6 = VAR_5 / VAR_2;
  VAR_7 = (unsigned long) 1 << (VAR_5 % VAR_2);


  if (VAR_4->in_use_p[VAR_6] & VAR_7)
    return 1;


  VAR_4->in_use_p[VAR_6] |= VAR_7;
  VAR_4->num_free_objects -= 1;

  if (VAR_1 >= 4)
    FUNC_1 (VAR_0.debug_file, "Marking %p\n", VAR_3);

  return 0;
}
