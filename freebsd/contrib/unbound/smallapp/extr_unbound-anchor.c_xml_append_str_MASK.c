
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;


 scalar_t__ FUNC_0 (int *,char const*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_4(BIO* VAR_1, const char* VAR_2)
{
 if(FUNC_0(VAR_1, VAR_2, (int)FUNC_3(VAR_2)) < 0) {
  if(VAR_0) FUNC_2("out of memory in BIO_write\n");
  FUNC_1(0);
 }
}
