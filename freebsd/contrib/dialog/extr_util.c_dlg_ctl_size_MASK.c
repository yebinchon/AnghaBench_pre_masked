
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ use_shadow; } ;
struct TYPE_3__ {scalar_t__ size_err; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_0 (char*,int,int,int,int) ;

void
FUNC_1(int VAR_6, int VAR_7)
{
    if (VAR_5.size_err) {
 if ((VAR_7 > VAR_0) || (VAR_6 > VAR_1)) {
     FUNC_0("Window too big. (height, width) = (%d, %d). Max allowed (%d, %d).",
   VAR_6, VAR_7, VAR_1, VAR_0);
 }
    }
}
