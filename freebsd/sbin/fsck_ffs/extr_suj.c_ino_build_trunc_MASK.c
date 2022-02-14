
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct suj_ino {struct jtrncrec* si_trunc; } ;
struct jtrncrec {int jt_op; scalar_t__ jt_size; scalar_t__ jt_ino; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct suj_ino* FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (char*,int,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct jtrncrec *VAR_2)
{
 struct suj_ino *VAR_3;

 if (VAR_1)
  FUNC_1("ino_build_trunc: op %d ino %ju, size %jd\n",
      VAR_2->jt_op, (uintmax_t)VAR_2->jt_ino,
      (uintmax_t)VAR_2->jt_size);
 VAR_3 = FUNC_0(VAR_2->jt_ino, 1);
 if (VAR_2->jt_op == VAR_0) {
  VAR_3->si_trunc = ((void*)0);
  return;
 }
 if (VAR_3->si_trunc == ((void*)0) || VAR_3->si_trunc->jt_size > VAR_2->jt_size)
  VAR_3->si_trunc = VAR_2;
}
