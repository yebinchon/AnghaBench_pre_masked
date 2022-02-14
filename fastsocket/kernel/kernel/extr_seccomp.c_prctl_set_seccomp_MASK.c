
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long mode; } ;
struct TYPE_4__ {TYPE_1__ seccomp; } ;


 long VAR_0 ;
 long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (unsigned long) ;

long FUNC_3(unsigned long VAR_5)
{
 long VAR_6;


 VAR_6 = -VAR_1;
 if (FUNC_2(VAR_4->seccomp.mode))
  goto out;

 VAR_6 = -VAR_0;
 if (VAR_5 && VAR_5 <= VAR_2) {
  VAR_4->seccomp.mode = VAR_5;
  FUNC_1(VAR_3);



  VAR_6 = 0;
 }

 out:
 return VAR_6;
}
