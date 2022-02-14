
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pidfh {int dummy; } ;
typedef scalar_t__ pid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__,int ) ;
 struct pidfh* FUNC_2 (int ,int,scalar_t__*) ;
 int FUNC_3 (struct pidfh*) ;
 int FUNC_4 (char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(void)
{
 struct pidfh *VAR_4;
 pid_t VAR_5;

 VAR_5 = 0;
 VAR_4 = FUNC_2(VAR_2, 0600, &VAR_5);
 if (VAR_4 != ((void*)0)) {

  FUNC_3(VAR_4);
  return;
 }
 if (VAR_3 != VAR_0) {

  return;
 }





 if (VAR_5 <= 0) {
  FUNC_4("mountd pid %d, refusing to send SIGHUP", VAR_5);
  return;
 }


 if (FUNC_1(VAR_5, VAR_1) == -1)
  FUNC_0(1, "signal mountd");
}
