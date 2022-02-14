
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union overhead {int ov_index; void* ov_rmagic; scalar_t__ ov_size; int ov_magic; union overhead* ov_next; } ;
typedef int memalign_t ;
typedef scalar_t__ caddr_t ;
typedef scalar_t__ U_short ;
typedef void* U_int ;


 int FUNC_0 (int,int,char*) ;
 int VAR_0 ;
 size_t FUNC_1 (int) ;
 void* VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 union overhead** VAR_4 ;
 int * VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,size_t) ;

memalign_t
FUNC_7(size_t VAR_6)
{

    union overhead *VAR_7;
    int VAR_8 = 0;
    unsigned VAR_9;
    VAR_6 = FUNC_1(FUNC_1(sizeof(union overhead)) + VAR_6 + VAR_2);
    VAR_9 = (VAR_6 - 1) >> 2;


    while ((VAR_9 >>= 1) != 0)
 VAR_8++;




    if (VAR_4[VAR_8] == ((void*)0))
 FUNC_3(VAR_8);
    if ((VAR_7 = VAR_4[VAR_8]) == ((void*)0)) {
 VAR_3++;

 FUNC_4();






 return ((memalign_t) 0);
    }

    VAR_4[VAR_8] = VAR_4[VAR_8]->ov_next;
    VAR_7->ov_magic = VAR_0;
    VAR_7->ov_index = VAR_8;
    VAR_5[VAR_8]++;
    return ((memalign_t) (((caddr_t) VAR_7) + FUNC_1(sizeof(union overhead))));






}
