
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int print_mode ;
typedef int bfd_vma ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5 (bfd_vma VAR_1, print_mode VAR_2)
{



    {
      switch (VAR_2)
 {
 case 132:
   return FUNC_3 ("0x%8.8lx", (unsigned long) VAR_1);

 case 130:
   return FUNC_3 ("%8.8lx", (unsigned long) VAR_1);

 case 133:
   if (VAR_1 <= 99999)
     return FUNC_3 ("%5ld", (long) VAR_1);


 case 129:
   return FUNC_3 ("0x%lx", (unsigned long) VAR_1);

 case 131:
   return FUNC_3 ("%lx", (unsigned long) VAR_1);

 case 134:
   return FUNC_3 ("%ld", (unsigned long) VAR_1);

 case 128:
   return FUNC_3 ("%lu", (unsigned long) VAR_1);
 }
    }
  return 0;
}
