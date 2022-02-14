
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int evutil_socket_t ;
typedef int buf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(evutil_socket_t VAR_4, short VAR_5, void *VAR_6)
{
 char VAR_7[256];
 int VAR_8;

 VAR_8 = FUNC_0(VAR_4, VAR_7, sizeof(VAR_7));

 if (VAR_1) {
  VAR_3 = 0;
 } else if (VAR_8) {

  if (FUNC_3(VAR_2[0], VAR_0, FUNC_1(VAR_0)+1) < 0) {
   FUNC_2("write");
   VAR_3 = 0;
  } else {
   VAR_3 = 1;
  }
 }

 VAR_1++;
}
