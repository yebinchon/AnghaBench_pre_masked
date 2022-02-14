
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int transfer_flags; int cv_wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct urb *VAR_2)
{
 if (VAR_2->transfer_flags & VAR_0) {
  FUNC_0(&VAR_2->cv_wait);
 }
 VAR_2->transfer_flags &= ~VAR_1;
}
