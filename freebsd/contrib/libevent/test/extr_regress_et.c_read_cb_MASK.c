
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int evutil_socket_t ;
typedef int buf ;


 short VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int ,char*,int,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2(evutil_socket_t VAR_3, short VAR_4, void *VAR_5)
{
 char VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3, &VAR_6, sizeof(VAR_6), 0);

 VAR_1++;
 if (VAR_4 & VAR_0)
  VAR_2 = 1;

 if (!VAR_7)
  FUNC_0(VAR_5);
}
