
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_base {scalar_t__ is_notify_pending; } ;
typedef int evutil_socket_t ;
typedef int buf ;


 int FUNC_0 (struct event_base*,int ) ;
 int FUNC_1 (struct event_base*,int ) ;
 scalar_t__ FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (int ,char*,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(evutil_socket_t VAR_1, short VAR_2, void *VAR_3)
{
 unsigned char VAR_4[1024];
 struct event_base *VAR_5 = VAR_3;




 while (FUNC_2(VAR_1, (char*)VAR_4, sizeof(VAR_4)) > 0)
  ;


 FUNC_0(VAR_5, VAR_0);
 VAR_5->is_notify_pending = 0;
 FUNC_1(VAR_5, VAR_0);
}
