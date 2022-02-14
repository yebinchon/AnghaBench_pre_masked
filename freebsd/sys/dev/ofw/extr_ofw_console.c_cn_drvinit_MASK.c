
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty {int dummy; } ;
typedef int phandle_t ;
typedef int output ;
struct TYPE_2__ {scalar_t__ cn_pri; char* cn_name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,char*,int) ;
 int FUNC_2 (int *,int ,int ) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (char*) ;
 struct tty* FUNC_4 (int *,int *) ;
 int FUNC_5 (struct tty*) ;
 int FUNC_6 (struct tty*,char*,char*) ;
 int FUNC_7 (struct tty*,int *,char*,char*) ;

__attribute__((used)) static void
FUNC_8(void *VAR_4)
{
 phandle_t VAR_5;
 char VAR_6[32];
 struct tty *VAR_7;

 if (VAR_1.cn_pri != VAR_0 &&
     VAR_1.cn_name[0] != '\0') {
  VAR_7 = FUNC_4(&VAR_3, ((void*)0));
  FUNC_7(VAR_7, ((void*)0), "%s", "ofwcons");





  if ((VAR_5 = FUNC_0("/options")) == -1 ||
      FUNC_1(VAR_5, "output-device", VAR_6,
      sizeof(VAR_6)) == -1)
   return;
  if (FUNC_3(VAR_6) > 0)
   FUNC_6(VAR_7, "%s", VAR_6);
  FUNC_2(&VAR_2, FUNC_5(VAR_7), 0);
 }
}
