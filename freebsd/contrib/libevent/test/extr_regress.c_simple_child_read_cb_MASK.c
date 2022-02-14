
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int evutil_socket_t ;
typedef int buf ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (void*,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_5(evutil_socket_t VAR_3, short VAR_4, void *VAR_5)
{
 char VAR_6[256];
 int VAR_7;

 VAR_7 = FUNC_2(VAR_3, VAR_6, sizeof(VAR_6));
 if (FUNC_4(VAR_1[0], "", 1) < 0)
  FUNC_3("write");

 if (VAR_7) {
  if (!VAR_0) {
   if (FUNC_0(VAR_5, ((void*)0)) == -1)
    FUNC_1(1);
  }
 } else if (VAR_0 == 1)
  VAR_2 = 1;

 VAR_0++;
}
