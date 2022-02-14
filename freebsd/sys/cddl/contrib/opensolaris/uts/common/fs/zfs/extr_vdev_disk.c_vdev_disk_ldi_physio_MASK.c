
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
typedef int * ldi_handle_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_7__ {void* b_addr; } ;
struct TYPE_8__ {int b_flags; size_t b_bcount; size_t b_bufsize; scalar_t__ b_resid; int b_lblkno; TYPE_1__ b_un; } ;
typedef TYPE_2__ buf_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,TYPE_2__*) ;

int
FUNC_7(ldi_handle_t VAR_8, caddr_t VAR_9,
    size_t VAR_10, uint64_t VAR_11, int VAR_12)
{
 buf_t *VAR_13;
 int VAR_14 = 0;

 if (VAR_8 == ((void*)0))
  return (FUNC_1(VAR_5));

 FUNC_0(VAR_12 & VAR_3 || VAR_12 & VAR_4);

 VAR_13 = FUNC_4(VAR_7);
 VAR_13->b_flags = VAR_12 | VAR_0 | VAR_2 | VAR_1;
 VAR_13->b_bcount = VAR_10;
 VAR_13->b_un.b_addr = (void *)VAR_9;
 VAR_13->b_lblkno = FUNC_5(VAR_11);
 VAR_13->b_bufsize = VAR_10;

 VAR_14 = FUNC_6(VAR_8, VAR_13);
 FUNC_0(VAR_14 == 0);
 if ((VAR_14 = FUNC_2(VAR_13)) == 0 && VAR_13->b_resid != 0)
  VAR_14 = FUNC_1(VAR_6);
 FUNC_3(VAR_13);

 return (VAR_14);
}
