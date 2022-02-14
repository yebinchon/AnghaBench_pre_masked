
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct win32_extension_fns {void* GetAcceptExSockaddrs; void* ConnectEx; void* AcceptEx; } ;
typedef scalar_t__ SOCKET ;
typedef int GUID ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_6 ;
 void* FUNC_1 (scalar_t__,int const*) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct win32_extension_fns *VAR_7)
{
 const GUID VAR_8 = VAR_3;
 const GUID VAR_9 = VAR_4;
 const GUID VAR_10 = VAR_5;
 SOCKET VAR_11 = FUNC_2(VAR_0, VAR_2, 0);
 if (VAR_11 == VAR_1)
  return;
 VAR_7->AcceptEx = FUNC_1(VAR_11, &VAR_8);
 VAR_7->ConnectEx = FUNC_1(VAR_11, &VAR_9);
 VAR_7->GetAcceptExSockaddrs = FUNC_1(VAR_11,
     &VAR_10);
 FUNC_0(VAR_11);

 VAR_6 = 1;
}
