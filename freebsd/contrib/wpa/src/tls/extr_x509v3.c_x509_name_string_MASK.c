
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x509_name {size_t num_attr; int email; TYPE_1__* attr; } ;
struct TYPE_2__ {int value; int type; } ;


 int FUNC_0 (char*,int,char*,int ,...) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct x509_name *VAR_0, char *VAR_1, size_t VAR_2)
{
 char *VAR_3, *VAR_4;
 int VAR_5;
 size_t VAR_6;

 if (VAR_2 == 0)
  return;

 VAR_3 = VAR_1;
 VAR_4 = VAR_1 + VAR_2;

 for (VAR_6 = 0; VAR_6 < VAR_0->num_attr; VAR_6++) {
  VAR_5 = FUNC_0(VAR_3, VAR_4 - VAR_3, "%s=%s, ",
      FUNC_2(VAR_0->attr[VAR_6].type),
      VAR_0->attr[VAR_6].value);
  if (FUNC_1(VAR_4 - VAR_3, VAR_5))
   goto done;
  VAR_3 += VAR_5;
 }

 if (VAR_3 > VAR_1 + 1 && VAR_3[-1] == ' ' && VAR_3[-2] == ',') {
  VAR_3--;
  *VAR_3 = '\0';
  VAR_3--;
  *VAR_3 = '\0';
 }

 if (VAR_0->email) {
  VAR_5 = FUNC_0(VAR_3, VAR_4 - VAR_3, "/emailAddress=%s",
      VAR_0->email);
  if (FUNC_1(VAR_4 - VAR_3, VAR_5))
   goto done;
  VAR_3 += VAR_5;
 }

done:
 if (VAR_3 < VAR_4)
  *VAR_3 = '\0';
 VAR_4[-1] = '\0';
}
