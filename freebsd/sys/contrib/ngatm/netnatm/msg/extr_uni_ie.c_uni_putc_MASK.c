
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unicx {int bufsiz; char* buf; } ;



__attribute__((used)) static void
FUNC_0(int VAR_0, struct unicx *VAR_1)
{
 if(VAR_1->bufsiz > 1) {
  *VAR_1->buf++ = VAR_0;
  VAR_1->bufsiz--;
  *VAR_1->buf = '\0';
 }
}
