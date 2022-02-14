
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int opcode; } ;
typedef TYPE_1__ ipfw_insn ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(ipfw_insn *VAR_5, char **VAR_6, int VAR_7)
{
 int VAR_8, VAR_9;
 char *VAR_10 = (char *)(VAR_5 + 1);

 VAR_5->opcode = VAR_4;
 VAR_5->len = (VAR_5->len & (VAR_2 | VAR_3));


 for (VAR_8 = 0, VAR_9 = 0; VAR_6[VAR_8] != ((void*)0); VAR_8++)
  VAR_9 += FUNC_2(VAR_6[VAR_8]) + 1;
 if (VAR_9 == 0)
  return;
 if (VAR_9 > 84)
  FUNC_0(VAR_1,
      "comment too long (max 80 chars)");
 VAR_9 = 1 + (VAR_9+3)/4;
 VAR_5->len = (VAR_5->len & (VAR_2 | VAR_3)) | VAR_9;
 VAR_0;

 for (VAR_8 = 0; VAR_6[VAR_8] != ((void*)0); VAR_8++) {
  FUNC_1(VAR_10, VAR_6[VAR_8]);
  VAR_10 += FUNC_2(VAR_6[VAR_8]);
  *VAR_10++ = ' ';
 }
 *(--VAR_10) = '\0';
}
