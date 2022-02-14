
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int xfs_off_t ;
typedef int xfs_buftarg_t ;
struct TYPE_9__ {int b_flags; } ;
typedef TYPE_1__ xfs_buf_t ;
typedef int xfs_buf_flags_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int,int ) ;
 int VAR_5 ;
 TYPE_1__* FUNC_4 (int *,int ,size_t,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

xfs_buf_t *
FUNC_7(
 xfs_buftarg_t *VAR_6,
 xfs_off_t VAR_7,
 size_t VAR_8,
 xfs_buf_flags_t VAR_9)
{
 xfs_buf_t *VAR_10;

 VAR_9 |= VAR_2;

 VAR_10 = FUNC_4(VAR_6, VAR_7, VAR_8, VAR_9);
 if (VAR_10) {
  FUNC_3(VAR_10, VAR_9, VAR_4);

  if (!FUNC_0(VAR_10)) {
   FUNC_1(VAR_5);
   FUNC_2(VAR_10, VAR_9);
  } else if (VAR_9 & VAR_0) {




   goto no_buffer;
  } else {

   VAR_10->b_flags &= ~VAR_2;
  }
 }

 return VAR_10;

 no_buffer:
 if (VAR_9 & (VAR_1 | VAR_3))
  FUNC_6(VAR_10);
 FUNC_5(VAR_10);
 return ((void*)0);
}
