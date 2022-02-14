
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union overhead {scalar_t__ ov_magic; int ov_index; scalar_t__ ov_size; void* ov_rmagic; } ;
typedef int * ptr_t ;
typedef int * memalign_t ;
typedef scalar_t__ caddr_t ;
typedef scalar_t__ U_short ;
typedef size_t U_int ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 void* VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (union overhead*,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (size_t) ;
 int FUNC_4 (int *,int *,size_t) ;
 int VAR_3 ;

memalign_t
FUNC_5(ptr_t VAR_4, size_t VAR_5)
{

    U_int VAR_6;
    union overhead *VAR_7;
    ptr_t VAR_8;
    int VAR_9;
    int VAR_10 = 0;

    if (VAR_4 == ((void*)0))
 return (FUNC_3(VAR_5));
    VAR_7 = (union overhead *) (((caddr_t) VAR_4) - FUNC_0(sizeof(union overhead)));
    if (VAR_7->ov_magic == VAR_0) {
 VAR_10++;
 VAR_9 = VAR_7->ov_index;
    }
    else
 if ((VAR_9 = FUNC_1(VAR_7, 1)) < 0 &&
     (VAR_9 = FUNC_1(VAR_7, VAR_3)) < 0)
     VAR_9 = 0;

    VAR_6 = FUNC_0(VAR_5 + FUNC_0(sizeof(union overhead)) + VAR_2);


    if (VAR_10 && (VAR_6 <= (U_int) (1 << (VAR_9 + 3))) &&
 (VAR_6 > (U_int) (1 << (VAR_9 + 2)))) {







 return ((memalign_t) VAR_4);
    }
    if ((VAR_8 = FUNC_3(VAR_5)) == ((void*)0))
 return ((memalign_t) ((void*)0));
    if (VAR_4 != VAR_8) {




 VAR_6 = (1 << (VAR_9 + 3)) - FUNC_0(sizeof(union overhead)) - VAR_2;
 (void) FUNC_4(VAR_8, VAR_4, VAR_6 < VAR_5 ? VAR_6 : VAR_5);
    }
    if (VAR_10)
 FUNC_2(VAR_4);
    return ((memalign_t) VAR_8);






}
