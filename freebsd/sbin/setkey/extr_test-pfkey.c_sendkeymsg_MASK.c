
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int tv ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct sadb_msg {int dummy; } ;
typedef int rbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct sadb_msg*) ;
 int FUNC_3 (int,int *,int,int ) ;
 int FUNC_4 (int,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_5 (int,int ,int ,struct timeval*,int) ;
 int FUNC_6 (int ,int ,int ) ;

int
FUNC_7()
{
 u_char VAR_7[1024 * 32];
 int VAR_8, VAR_9;

 if ((VAR_8 = FUNC_6(VAR_0, VAR_2, VAR_1)) < 0) {
  FUNC_1("socket(PF_KEY)");
  goto end;
 }
 FUNC_2((struct sadb_msg *)VAR_5);

 if ((VAR_9 = FUNC_4(VAR_8, VAR_5, VAR_6, 0)) < 0) {
  FUNC_1("send");
  goto end;
 }

 if ((VAR_9 = FUNC_3(VAR_8, VAR_7, sizeof(VAR_7), 0)) < 0) {
  FUNC_1("recv");
  goto end;
 }

 FUNC_2((struct sadb_msg *)VAR_7);

end:
 (void)FUNC_0(VAR_8);
 return(0);
}
