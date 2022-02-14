
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nameserver {int base; } ;
typedef int evutil_socket_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nameserver* const) ;

__attribute__((used)) static void
FUNC_3(evutil_socket_t VAR_0, short VAR_1, void *VAR_2) {
 struct nameserver *const VAR_3 = (struct nameserver *) VAR_2;
 (void)VAR_0;
 (void)VAR_1;

 FUNC_0(VAR_3->base);
 FUNC_2(VAR_3);
 FUNC_1(VAR_3->base);
}
