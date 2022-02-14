
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct request_info {int started; scalar_t__ n_read; } ;
struct bufferevent {int dummy; } ;
typedef int sin ;
typedef int evutil_socket_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct bufferevent*,int) ;
 int FUNC_2 (struct bufferevent*) ;
 int FUNC_3 (struct bufferevent*,int ,int *,int ,struct request_info*) ;
 struct bufferevent* FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,struct sockaddr*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 struct request_info* FUNC_13 (int) ;
 int FUNC_14 (struct sockaddr_in*,int ,int) ;
 int FUNC_15 (char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_16 (int ,int ,int ) ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_17(void)
{
 evutil_socket_t VAR_11;
 struct sockaddr_in VAR_12;
 struct bufferevent *VAR_13;

 struct request_info *VAR_14;

 FUNC_14(&VAR_12, 0, sizeof(VAR_12));

 ++VAR_10;

 VAR_12.sin_family = VAR_0;
 VAR_12.sin_addr.s_addr = FUNC_11(0x7f000001);
 VAR_12.sin_port = FUNC_12(8080);
 if ((VAR_11 = FUNC_16(VAR_0, VAR_4, 0)) < 0)
  return -1;
 if (FUNC_9(VAR_11) < 0) {
  FUNC_7(VAR_11);
  return -1;
 }
 FUNC_10(VAR_11);
 if (FUNC_5(VAR_11, (struct sockaddr*)&VAR_12, sizeof(VAR_12)) < 0) {
  int VAR_15 = VAR_6;
  if (! FUNC_0(VAR_15)) {
   FUNC_7(VAR_11);
   return -1;
  }
 }

 VAR_14 = FUNC_13(sizeof(*VAR_14));
 if (VAR_14 == ((void*)0)) {
  FUNC_15("Unable to allocate memory in launch_request()\n");
  return -1;
 }
 VAR_14->n_read = 0;
 FUNC_8(&VAR_14->started, ((void*)0));

 VAR_13 = FUNC_4(VAR_5, VAR_11, VAR_1);

 FUNC_3(VAR_13, VAR_8, ((void*)0), VAR_7, VAR_14);
 FUNC_1(VAR_13, VAR_2|VAR_3);

 FUNC_6(FUNC_2(VAR_13),
     "GET %s HTTP/1.0\r\n\r\n", VAR_9);

 return 0;
}
