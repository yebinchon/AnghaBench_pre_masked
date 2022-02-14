
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_timeout_t ;
typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct urb {int timeout; int transfer_flags; int status; scalar_t__ actual_length; int cv_wait; int * complete; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (struct urb*,int ) ;

__attribute__((used)) static int
FUNC_5(struct urb *VAR_4, usb_timeout_t VAR_5, uint16_t *VAR_6)
{
 int VAR_7;
 uint8_t VAR_8;


 if (VAR_5 == 0) {
  VAR_5 = 1;
 }
 VAR_4->complete = &VAR_3;
 VAR_4->timeout = VAR_5;
 VAR_4->transfer_flags |= VAR_2;
 VAR_4->transfer_flags &= ~VAR_1;

 VAR_8 = FUNC_2(&VAR_0) ? 0 : 1;
 if (VAR_8)
  FUNC_1(&VAR_0);
 VAR_7 = FUNC_4(VAR_4, 0);
 if (VAR_7)
  goto done;





 while (VAR_4->transfer_flags & VAR_2) {
  VAR_4->transfer_flags |= VAR_1;
  FUNC_0(&VAR_4->cv_wait, &VAR_0);
  VAR_4->transfer_flags &= ~VAR_1;
 }

 VAR_7 = VAR_4->status;

done:
 if (VAR_8)
  FUNC_3(&VAR_0);
 if (VAR_6 != ((void*)0)) {
  if (VAR_7)
   *VAR_6 = 0;
  else
   *VAR_6 = VAR_4->actual_length;
 }
 return (VAR_7);
}
