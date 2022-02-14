
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef uintptr_t uint64_t ;
struct trapframe {scalar_t__ tf_isp; } ;
struct i386_frame {int f_retaddr; struct i386_frame* f_frame; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 long FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ VAR_1 ;

uint64_t
FUNC_4(int VAR_2, int VAR_3)
{
 struct trapframe *VAR_4;
 struct i386_frame *VAR_5 = (struct i386_frame *)FUNC_3();
 uintptr_t *VAR_6, VAR_7;
 int VAR_8;

 for (VAR_8 = 1; VAR_8 <= VAR_3; VAR_8++) {
  VAR_5 = VAR_5->f_frame;

  if (FUNC_2(VAR_5->f_retaddr, 4) ==
      (long)VAR_1) {
   VAR_4 = (struct trapframe *)(((uintptr_t **)&VAR_5[1])[0]);




   VAR_6 = (uintptr_t *)VAR_4->tf_isp + 4;
   goto load;
  }

 }
 VAR_2++;

 VAR_6 = (uintptr_t *)VAR_5 + 2;

load:
 FUNC_1(VAR_0);
 VAR_7 = VAR_6[VAR_2];
 FUNC_0(VAR_0);

 return (VAR_7);
}
