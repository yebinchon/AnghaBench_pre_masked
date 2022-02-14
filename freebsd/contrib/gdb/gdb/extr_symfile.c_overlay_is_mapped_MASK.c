
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obj_section {int ovly_mapped; int the_bfd_section; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;



 int FUNC_1 (int ) ;
 int FUNC_2 (struct obj_section*) ;
 int FUNC_3 (struct obj_section*) ;

__attribute__((used)) static int
FUNC_4 (struct obj_section *VAR_2)
{
  if (VAR_2 == 0 || !FUNC_1 (VAR_2->the_bfd_section))
    return 0;

  switch (VAR_1)
    {
    default:
    case 129:
      return 0;
    case 130:


      if (&FUNC_3)
 {
   if (VAR_0)
     {
       FUNC_0 ();
       VAR_0 = 0;
     }
   if (VAR_2->ovly_mapped == -1)
     FUNC_3) (VAR_2);
 }

    case 128:
      return VAR_2->ovly_mapped == 1;
    }
}
