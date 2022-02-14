
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm86frame {int vmf_trapno; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

int
FUNC_4(int VAR_4, struct vm86frame *VAR_5)
{
 int (*VAR_6)(struct vm86frame *);
 int VAR_7;

 if (VAR_4 < 0 || VAR_4 > 0xff)
  return (VAR_0);

 VAR_5->vmf_trapno = VAR_4;
 VAR_6 = (int (*)(struct vm86frame *))((uintptr_t)VAR_2 +
     VAR_1);
 FUNC_2(&VAR_3);
 FUNC_0();
 VAR_7 = VAR_6(VAR_5);
 FUNC_1();
 FUNC_3(&VAR_3);
 return (VAR_7);
}
