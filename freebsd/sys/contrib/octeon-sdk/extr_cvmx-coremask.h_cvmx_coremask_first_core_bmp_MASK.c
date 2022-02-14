
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cvmx_coremask {int* coremask_bitmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;

__attribute__((used)) static inline int FUNC_1(struct cvmx_coremask *VAR_2)
{
     int VAR_3, VAR_4;

     VAR_3 = (int) FUNC_0();
     for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
     {
         if (VAR_2->coremask_bitmap[VAR_4])
         {
             if (VAR_3 == 0 && VAR_2->coremask_bitmap[VAR_4] & 1)
                 return 1;

             if (VAR_3 >= VAR_1)
                 return 0;

             return ((((1ull << VAR_3) - 1) & VAR_2->coremask_bitmap[VAR_4]) == 0);
         }
         else
             VAR_3 -= VAR_1;
     }

     return 0;
}
