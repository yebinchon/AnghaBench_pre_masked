
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef uintptr_t uint64_t ;
struct trapframe {scalar_t__ tf_rsp; int tf_r9; int tf_r8; int tf_rcx; int tf_rdx; int tf_rsi; int tf_rdi; } ;
struct amd64_frame {int f_retaddr; struct amd64_frame* f_frame; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 long FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ VAR_2 ;

uint64_t
FUNC_4(int VAR_3, int VAR_4)
{
 uintptr_t VAR_5;
 struct amd64_frame *VAR_6 = (struct amd64_frame *)FUNC_3();
 uintptr_t *VAR_7;
 int VAR_8;





 int VAR_9 = 5;

 for (VAR_8 = 1; VAR_8 <= VAR_4; VAR_8++) {
  VAR_6 = VAR_6->f_frame;

  if (FUNC_2(VAR_6->f_retaddr, 16) ==
      (long)VAR_2) {
   struct trapframe *VAR_10 = (struct trapframe *)&VAR_6[1];

   if (VAR_3 <= VAR_9) {
    switch (VAR_3) {
    case 0:
     VAR_7 = (uintptr_t *)&VAR_10->tf_rdi;
     break;
    case 1:
     VAR_7 = (uintptr_t *)&VAR_10->tf_rsi;
     break;
    case 2:
     VAR_7 = (uintptr_t *)&VAR_10->tf_rdx;
     break;
    case 3:
     VAR_7 = (uintptr_t *)&VAR_10->tf_rcx;
     break;
    case 4:
     VAR_7 = (uintptr_t *)&VAR_10->tf_r8;
     break;
    case 5:
     VAR_7 = (uintptr_t *)&VAR_10->tf_r9;
     break;
    }
    VAR_3 = 0;
   } else {
    VAR_7 = (uintptr_t *)(VAR_10->tf_rsp);
    VAR_3 -= VAR_9;
   }
   goto load;
  }

 }
 VAR_3++;

 if (VAR_3 <= VAR_9) {





  FUNC_1(VAR_0);
  return (0);
 }

 VAR_3 -= (VAR_9 + 1);
 VAR_7 = (uintptr_t *)&VAR_6[1];

load:
 FUNC_1(VAR_1);
 VAR_5 = VAR_7[VAR_3];
 FUNC_0(VAR_1);

 return (VAR_5);
}
