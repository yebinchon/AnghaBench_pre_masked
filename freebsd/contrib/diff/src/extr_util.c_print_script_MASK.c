
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct change {struct change* link; } ;


 int FUNC_0 (struct change*) ;
 struct change* FUNC_1 (struct change*) ;
 void FUNC_2 (struct change*) ;

void
FUNC_3 (struct change *VAR_0,
       struct change * (*VAR_1) (struct change *),
       void (*VAR_2) (struct change *))
{
  struct change *VAR_3 = VAR_0;

  while (VAR_3)
    {
      struct change *VAR_4, *VAR_5;


      VAR_4 = VAR_3;
      VAR_5 = (*VAR_1) (VAR_3);



      VAR_3 = VAR_5->link;
      VAR_5->link = 0;





      (*VAR_2) (VAR_4);


      VAR_5->link = VAR_3;
    }
}
