
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t num_free_objects; unsigned long* in_use_p; } ;
typedef TYPE_1__ page_entry ;


 int FUNC_0 (size_t) ;
 unsigned int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;
 unsigned long* FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5 (page_entry *VAR_0)
{
  unsigned int VAR_1;
  size_t VAR_2;



  VAR_2 = FUNC_2 (VAR_0) + 1;


  VAR_0->num_free_objects = VAR_2;


  for (VAR_1 = 0;
       VAR_1 < FUNC_1 (FUNC_0 (VAR_2),
   sizeof (*VAR_0->in_use_p));
       ++VAR_1)
    {
      unsigned long VAR_3;



      VAR_0->in_use_p[VAR_1] |= FUNC_4 (VAR_0)[VAR_1];


      for (VAR_3 = VAR_0->in_use_p[VAR_1]; VAR_3; VAR_3 >>= 1)
 VAR_0->num_free_objects -= (VAR_3 & 1);
    }

  FUNC_3 (VAR_0->num_free_objects < VAR_2);
}
