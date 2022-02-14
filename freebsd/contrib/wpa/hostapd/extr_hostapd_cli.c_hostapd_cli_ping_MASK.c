
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (scalar_t__,char*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,void (*) (void*,void*),int *,int *) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int,int ) ;
 int VAR_2 ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void *VAR_3, void *VAR_4)
{
 if (VAR_0 && FUNC_0(VAR_0, "PING", 0)) {
  FUNC_5("Connection to hostapd lost - trying to reconnect\n");
  FUNC_2();
 }
 if (!VAR_0 && FUNC_3(VAR_1) == 0)
  FUNC_5("Connection to hostapd re-established\n");
 if (VAR_0)
  FUNC_4(VAR_0, 1, 0);
 FUNC_1(VAR_2, 0, FUNC_6, ((void*)0), ((void*)0));
}
