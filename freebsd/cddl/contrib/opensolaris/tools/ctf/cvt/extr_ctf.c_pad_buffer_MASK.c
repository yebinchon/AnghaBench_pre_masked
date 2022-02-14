
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_t ;
typedef int ssize_t ;
typedef int ctf_buf_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char const*,int) ;

__attribute__((used)) static void
FUNC_2(ctf_buf_t *VAR_0, int VAR_1)
{
 uint_t VAR_2 = FUNC_0(VAR_0);
 ssize_t VAR_3 = (VAR_1 - (VAR_2 % VAR_1)) % VAR_1;
 static const char VAR_4[8] = { 0 };

 while (VAR_3 > 0) {
  FUNC_1(VAR_0, VAR_4, (VAR_3 > 8 ? 8 : VAR_3));
  VAR_3 -= 8;
 }
}
