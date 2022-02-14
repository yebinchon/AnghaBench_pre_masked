
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {char* iov_base; int iov_len; } ;


 int FUNC_0 (char const*,char*) ;
 int VAR_0 ;
 int * FUNC_1 () ;
 int FUNC_2 (int ,struct iovec*,int) ;
 char* FUNC_3 (int ) ;
 void* FUNC_4 (char*) ;

void
FUNC_5(const char *VAR_1) {
 struct iovec VAR_2[4], *VAR_3 = VAR_2;
 char *VAR_4;

 if (VAR_1 != ((void*)0) && *VAR_1 != '\0') {
  FUNC_0(VAR_1, VAR_4);
  VAR_3->iov_base = VAR_4;
  VAR_3->iov_len = FUNC_4(VAR_4);
  VAR_3++;
  FUNC_0(": ", VAR_4);
  VAR_3->iov_base = VAR_4;
  VAR_3->iov_len = 2;
  VAR_3++;
 }
 FUNC_0(FUNC_3(*FUNC_1()), VAR_4);
 VAR_3->iov_base = VAR_4;
 VAR_3->iov_len = FUNC_4(VAR_3->iov_base);
 VAR_3++;
 FUNC_0("\n", VAR_4);
 VAR_3->iov_base = VAR_4;
 VAR_3->iov_len = 1;
 FUNC_2(VAR_0, VAR_2, (VAR_3 - VAR_2) + 1);
}
