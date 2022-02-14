
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* (* End ) (int *,char*) ;int (* Update ) (int *,unsigned char*,unsigned int) ;int (* Init ) (int *) ;} ;
typedef int DIGEST_CTX ;
typedef TYPE_1__ Algorithm_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 unsigned int FUNC_1 (unsigned char*,int,int,int ) ;
 unsigned int FUNC_2 (unsigned char*,int,unsigned int,int ) ;
 int FUNC_3 (char*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned char*,unsigned int) ;
 char* FUNC_6 (int *,char*) ;
 char* FUNC_7 (int *,char*) ;

__attribute__((used)) static void
FUNC_8(const Algorithm_t *VAR_4, int VAR_5)
{
 DIGEST_CTX VAR_6;
 unsigned int VAR_7;
 unsigned char VAR_8[VAR_0];
 char VAR_9[VAR_1];

 VAR_4->Init(&VAR_6);
 while ((VAR_7 = FUNC_1(VAR_8, 1, VAR_0, VAR_2))) {
  if (VAR_5 && VAR_7 != FUNC_2(VAR_8, 1, VAR_7, VAR_3))
   FUNC_0(1, "stdout");
  VAR_4->Update(&VAR_6, VAR_8, VAR_7);
 }
 FUNC_3("%s\n", VAR_4->End(&VAR_6, VAR_9));
}
