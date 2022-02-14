
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int ,int,int ) ;
 scalar_t__ FUNC_3 (void*,int ,int ,int ) ;
 int FUNC_4 (char*,int ,int ) ;
 int VAR_3 ;
 void* FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (void*) ;

__attribute__((used)) static char *FUNC_7(void)
{
 void *VAR_4;
 void *VAR_5;
 char *VAR_6;

 FUNC_0("starting to serve...");

 while ((VAR_4 = FUNC_2(0, -1, VAR_3))) {

  if (FUNC_6(VAR_4) == 0) {
   VAR_5 = FUNC_5(VAR_4);
   VAR_6 = (char *)VAR_5 + VAR_0;

   FUNC_4(VAR_6, VAR_2, VAR_1);

   FUNC_0("Pong: %s", VAR_6);

   if (FUNC_3(VAR_4, 0, 0, VAR_3) < 0)
    FUNC_0("respond failed");

  }
  FUNC_1(VAR_4);
 }

 FUNC_0("server out");
 return 0;
}
