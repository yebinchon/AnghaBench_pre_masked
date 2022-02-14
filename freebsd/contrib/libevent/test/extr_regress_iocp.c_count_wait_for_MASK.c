
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,struct timeval*) ;
 scalar_t__ FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_4(int VAR_3, int VAR_4)
{
 struct timeval VAR_5;
 DWORD VAR_6;
 int VAR_7 = -1;

 FUNC_0(VAR_2, 0);
 while (VAR_4 > 0 && VAR_0 != VAR_3) {
  VAR_5.tv_sec = 0;
  VAR_5.tv_usec = VAR_4 * 1000;
  VAR_6 = FUNC_3();
  FUNC_2(VAR_1, VAR_2, &VAR_5);
  VAR_6 = FUNC_3() - VAR_6;
  VAR_4 -= VAR_6;
 }
 if (VAR_0 == VAR_3)
  VAR_7 = 0;
 FUNC_1(VAR_2, 0);

 return VAR_7;
}
