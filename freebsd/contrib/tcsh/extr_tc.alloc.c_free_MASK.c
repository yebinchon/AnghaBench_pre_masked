
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union overhead {scalar_t__ ov_magic; int ov_index; union overhead* ov_next; scalar_t__ ov_size; } ;
typedef int * ptr_t ;
typedef scalar_t__ caddr_t ;
typedef scalar_t__ U_int ;


 int FUNC_0 (int,int,char*) ;
 int FUNC_1 (int,int ,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 union overhead** VAR_7 ;
 int * VAR_8 ;

void
FUNC_3(ptr_t VAR_9)
{

    int VAR_10;
    union overhead *VAR_11;





    if (VAR_9 == ((void*)0) || VAR_4)
 return;
    FUNC_1(!VAR_6 || !VAR_5,
   FUNC_0(19, 2, "free(%p) called before any allocations."), VAR_9);
    FUNC_1(VAR_9 > (ptr_t) VAR_6,
   FUNC_0(19, 3, "free(%p) above top of memory."), VAR_9);
    FUNC_1(VAR_9 < (ptr_t) VAR_5,
   FUNC_0(19, 4, "free(%p) below bottom of memory."), VAR_9);
    VAR_11 = (union overhead *) (((caddr_t) VAR_9) - FUNC_2(sizeof(union overhead)));
    FUNC_1(VAR_11->ov_magic != VAR_0,
   FUNC_0(19, 5, "free(%p) bad block."), VAR_9);






    FUNC_1(VAR_11->ov_index >= VAR_1,
   FUNC_0(19, 7, "free(%p) bad block index."), VAR_9);
    VAR_10 = VAR_11->ov_index;
    VAR_11->ov_next = VAR_7[VAR_10];
    VAR_7[VAR_10] = VAR_11;

    VAR_8[VAR_10]--;





}
