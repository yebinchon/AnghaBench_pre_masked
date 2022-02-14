
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cond_wait {int lock; int cond; } ;
typedef int evutil_socket_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(evutil_socket_t VAR_0, short VAR_1, void *VAR_2)
{
 struct cond_wait *VAR_3 = VAR_2;
 FUNC_0(VAR_3->lock, 0);
 FUNC_2(VAR_3->cond);
 FUNC_1(VAR_3->lock, 0);

}
