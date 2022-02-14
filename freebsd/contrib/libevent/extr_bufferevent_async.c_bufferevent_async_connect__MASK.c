
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct win32_extension_fns {scalar_t__ (* ConnectEx ) (scalar_t__,struct sockaddr const*,int,int *,int ,int *,int *) ;} ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int sin6_addr; scalar_t__ sin6_family; } ;
struct TYPE_3__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; scalar_t__ sin_family; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct TYPE_4__ {int overlapped; } ;
struct bufferevent_async {TYPE_2__ connect_overlapped; } ;
struct bufferevent {int ev_base; } ;
typedef int ss ;
typedef scalar_t__ evutil_socket_t ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (scalar_t__,struct sockaddr*,int) ;
 int FUNC_3 (struct bufferevent*) ;
 int FUNC_4 (struct bufferevent*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct win32_extension_fns* FUNC_7 () ;
 int VAR_5 ;
 int FUNC_8 (struct sockaddr_storage*,int ,int) ;
 scalar_t__ FUNC_9 (scalar_t__,struct sockaddr const*,int,int *,int ,int *,int *) ;
 struct bufferevent_async* FUNC_10 (struct bufferevent*) ;

int
FUNC_11(struct bufferevent *VAR_6, evutil_socket_t VAR_7,
 const struct sockaddr *VAR_8, int VAR_9)
{
 BOOL VAR_10;
 struct bufferevent_async *VAR_11 = FUNC_10(VAR_6);
 struct sockaddr_storage VAR_12;
 const struct win32_extension_fns *VAR_13 =
     FUNC_7();

 FUNC_0(VAR_13 && VAR_13->ConnectEx && VAR_7 >= 0 && VAR_8 != ((void*)0));





 FUNC_8(&VAR_12, 0, sizeof(VAR_12));
 if (VAR_8->sa_family == VAR_0) {
  struct sockaddr_in *VAR_14 = (struct sockaddr_in *)&VAR_12;
  VAR_14->sin_family = VAR_0;
  VAR_14->sin_addr.s_addr = VAR_3;
 } else if (VAR_8->sa_family == VAR_1) {
  struct sockaddr_in6 *VAR_15 = (struct sockaddr_in6 *)&VAR_12;
  VAR_15->sin6_family = VAR_1;
  VAR_15->sin6_addr = VAR_5;
 } else {

  return -1;
 }
 if (FUNC_2(VAR_7, (struct sockaddr *)&VAR_12, sizeof(VAR_12)) < 0 &&
     FUNC_1() != VAR_4)
  return -1;

 FUNC_5(VAR_6->ev_base);
 FUNC_4(VAR_6);
 VAR_10 = VAR_13->ConnectEx(VAR_7, VAR_8, VAR_9, ((void*)0), 0, ((void*)0),
       &VAR_11->connect_overlapped.overlapped);
 if (VAR_10 || FUNC_1() == VAR_2)
  return 0;

 FUNC_6(VAR_6->ev_base);
 FUNC_3(VAR_6);

 return -1;
}
