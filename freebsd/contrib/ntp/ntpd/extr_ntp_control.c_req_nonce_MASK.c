
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct recvbuf {int dummy; } ;
typedef int buf ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (struct recvbuf*,char*,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(
 struct recvbuf * VAR_0,
 int VAR_1
 )
{
 char VAR_2[64];

 FUNC_2(VAR_0, VAR_2, sizeof(VAR_2));
 FUNC_1("nonce", VAR_2, FUNC_3(VAR_2));
 FUNC_0(0);
}
