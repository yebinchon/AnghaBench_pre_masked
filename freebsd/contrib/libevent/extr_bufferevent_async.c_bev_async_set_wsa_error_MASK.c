
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_overlapped {int overlapped; } ;
struct bufferevent {int input; } ;
typedef int evutil_socket_t ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *,int ,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct bufferevent *VAR_1, struct event_overlapped *VAR_2)
{
 DWORD VAR_3, VAR_4;
 evutil_socket_t VAR_5;

 VAR_5 = FUNC_1(VAR_1->input);
 FUNC_0(VAR_5, &VAR_2->overlapped, &VAR_3, VAR_0, &VAR_4);
}
