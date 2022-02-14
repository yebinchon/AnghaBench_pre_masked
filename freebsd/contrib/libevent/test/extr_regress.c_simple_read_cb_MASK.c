
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int evutil_socket_t ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (void*,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(evutil_socket_t VAR_2, short VAR_3, void *VAR_4)
{
 char VAR_5[256];
 int VAR_6;

 VAR_6 = FUNC_2(VAR_2, VAR_5, sizeof(VAR_5));

 if (VAR_6) {
  if (!VAR_0) {
   if (FUNC_0(VAR_4, ((void*)0)) == -1)
    FUNC_1(1);
  }
 } else if (VAR_0 == 1)
  VAR_1 = 1;

 VAR_0++;
}
