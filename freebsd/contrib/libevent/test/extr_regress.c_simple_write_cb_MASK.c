
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int evutil_socket_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(evutil_socket_t VAR_2, short VAR_3, void *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_0, FUNC_0(VAR_0) + 1);
 if (VAR_5 == -1)
  VAR_1 = 0;
 else
  VAR_1 = 1;
}
