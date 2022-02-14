
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int FUNC_0 (int,char*) ;
 int * VAR_1 ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (int ,...) ;

__attribute__((used)) static void
FUNC_3(int VAR_2, const char *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3);

 if (FUNC_2(VAR_1[VAR_0], &VAR_2, sizeof(int)) < 0)
  FUNC_0(1, "command pipe write for message type failed");

 if (FUNC_2(VAR_1[VAR_0], &VAR_4, sizeof(int)) < 0)
  FUNC_0(1, "command pipe write for message length failed");

 if (FUNC_2(VAR_1[VAR_0], VAR_3, VAR_4) < 0)
  FUNC_0(1, "command pipe write of message data failed");
}
