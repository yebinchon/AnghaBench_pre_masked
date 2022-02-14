
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;


 int FUNC_0 (struct sock*) ;
 unsigned short VAR_0 ;
 struct sock* FUNC_1 (unsigned char,unsigned char) ;

__attribute__((used)) static unsigned short FUNC_2(void)
{
 unsigned short VAR_1 = VAR_0;
 unsigned char VAR_2, VAR_3;
 struct sock *VAR_4;

 for (;;) {
  VAR_2 = VAR_1 / 256;
  VAR_3 = VAR_1 % 256;

  if (VAR_2 != 0 && VAR_3 != 0) {
   if ((VAR_4=FUNC_1(VAR_2, VAR_3)) == ((void*)0))
    break;
   FUNC_0(VAR_4);
  }

  VAR_1++;
 }

 return VAR_1;
}
