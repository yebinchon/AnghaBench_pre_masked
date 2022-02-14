
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static void
FUNC_1(FILE *VAR_4, u_char VAR_5, int VAR_6)
{
 if (VAR_6 & VAR_3)
  FUNC_0(VAR_4, "%u", VAR_5);
 else {
  if (VAR_5 == VAR_0)
   FUNC_0(VAR_4, "Message IPC");
  else if (VAR_5 == VAR_1)
   FUNC_0(VAR_4, "Semaphore IPC");
  else if (VAR_5 == VAR_2)
   FUNC_0(VAR_4, "Shared Memory IPC");
  else
   FUNC_0(VAR_4, "%u", VAR_5);
 }
}
