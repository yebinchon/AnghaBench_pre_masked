
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int dummy; } ;
struct TYPE_2__ {int sin_addr; } ;
struct nb_ctx {TYPE_1__ nb_lastns; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char**,char*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct nb_ctx**) ;
 scalar_t__ FUNC_5 (int ,struct nb_ctx*,char*,int ) ;
 scalar_t__ FUNC_6 (struct nb_ctx*) ;
 int FUNC_7 (struct nb_ctx*,int ) ;
 int FUNC_8 (char*,struct nb_ctx*,struct sockaddr**) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_9 (char*,char*,...) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,int,...) ;
 scalar_t__ FUNC_12 () ;
 int VAR_3 ;

int
FUNC_13(int VAR_4, char *VAR_5[])
{
 struct nb_ctx *VAR_6;
 struct sockaddr *VAR_7;
 char *VAR_8;
 int VAR_9, VAR_10;

 if (VAR_4 < 2)
  FUNC_3();
 VAR_9 = FUNC_4(&VAR_6);
 if (VAR_9) {
  FUNC_11("unable to create nbcontext", VAR_9);
  FUNC_0(1);
 }
 if (FUNC_12() == 0) {
  if (FUNC_5(VAR_3, VAR_6, "default", 0) != 0)
   FUNC_0(1);
  FUNC_10(VAR_3);
 }
 while ((VAR_10 = FUNC_1(VAR_4, VAR_5, "w:")) != VAR_0) {
  switch(VAR_10){
      case 'w':
   FUNC_7(VAR_6, VAR_1);
   break;
      default:
   FUNC_3();

  }
 }
 if (VAR_2 >= VAR_4)
  FUNC_3();
 if (FUNC_6(VAR_6) != 0)
  FUNC_0(1);
 VAR_8 = VAR_5[VAR_4 - 1];

 VAR_9 = FUNC_8(VAR_8, VAR_6, &VAR_7);
 if (VAR_9) {
  FUNC_11("unable to resolve %s", VAR_9, VAR_8);
  FUNC_0(1);
 }
 FUNC_9("Got response from %s\n", FUNC_2(VAR_6->nb_lastns.sin_addr));
 FUNC_9("IP address of %s: %s\n", VAR_8, FUNC_2(((struct sockaddr_in*)VAR_7)->sin_addr));
 return 0;
}
