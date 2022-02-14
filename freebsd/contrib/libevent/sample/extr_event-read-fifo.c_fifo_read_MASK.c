
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event {int dummy; } ;
typedef scalar_t__ evutil_socket_t ;
typedef int buf ;
typedef int HANDLE ;
typedef size_t DWORD ;


 int FUNC_0 (int ,char*,int,size_t*,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct event*) ;
 int FUNC_3 (struct event*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (scalar_t__,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_7(evutil_socket_t VAR_2, short VAR_3, void *VAR_4)
{
 char VAR_5[255];
 int VAR_6;
 struct event *VAR_7 = VAR_4;




 FUNC_4(VAR_0, "fifo_read called with fd: %d, event: %d, arg: %p\n",
     (int)VAR_2, VAR_3, VAR_4);
 VAR_6 = FUNC_6(VAR_2, VAR_5, sizeof(VAR_5) - 1);

 if (VAR_6 <= 0) {
  if (VAR_6 == -1)
   FUNC_5("read");
  else if (VAR_6 == 0)
   FUNC_4(VAR_0, "Connection closed\n");
  FUNC_2(VAR_7);
  FUNC_1(FUNC_3(VAR_7));
  return;
 }

 VAR_5[VAR_6] = '\0';

 FUNC_4(VAR_1, "Read: %s\n", VAR_5);
}
