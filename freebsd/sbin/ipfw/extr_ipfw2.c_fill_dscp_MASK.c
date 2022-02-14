
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int len; int opcode; } ;
typedef TYPE_1__ ipfw_insn ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (int ,char*) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char*,int *,int) ;

__attribute__((used)) static void
FUNC_6(ipfw_insn *VAR_5, char *VAR_6, int VAR_7)
{
 uint32_t *VAR_8, *VAR_9;
 char *VAR_10 = VAR_6, *VAR_11;
 int VAR_12;

 VAR_5->opcode = VAR_2;
 VAR_5->len |= FUNC_0(VAR_4) + 1;

 VAR_0;

 VAR_8 = (uint32_t *)(VAR_5 + 1);
 VAR_9 = VAR_8 + 1;

 *VAR_8 = 0;
 *VAR_9 = 0;

 while (VAR_10 != ((void*)0)) {
  VAR_11 = FUNC_4(VAR_10, ',');

  if (VAR_11 != ((void*)0))
   *VAR_11++ = '\0';

  if (FUNC_2(*VAR_10)) {
   if ((VAR_12 = FUNC_3(VAR_3, VAR_10)) == -1)
    FUNC_1(VAR_1, "Unknown DSCP code");
  } else {
   VAR_12 = FUNC_5(VAR_10, ((void*)0), 10);
   if (VAR_12 < 0 || VAR_12 > 63)
    FUNC_1(VAR_1, "Invalid DSCP value");
  }

  if (VAR_12 >= 32)
   *VAR_9 |= 1 << (VAR_12 - 32);
  else
   *VAR_8 |= 1 << VAR_12;

  VAR_10 = VAR_11;
 }
}
