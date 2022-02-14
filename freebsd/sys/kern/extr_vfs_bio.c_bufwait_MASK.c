
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {scalar_t__ b_iocmd; int b_flags; int b_ioflags; int b_error; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct buf*,int ,char*) ;

int
FUNC_1(struct buf *VAR_6)
{
 if (VAR_6->b_iocmd == VAR_1)
  FUNC_0(VAR_6, VAR_5, "biord");
 else
  FUNC_0(VAR_6, VAR_5, "biowr");
 if (VAR_6->b_flags & VAR_2) {
  VAR_6->b_flags &= ~VAR_2;
  return (VAR_3);
 }
 if (VAR_6->b_ioflags & VAR_0) {
  return (VAR_6->b_error ? VAR_6->b_error : VAR_4);
 } else {
  return (0);
 }
}
