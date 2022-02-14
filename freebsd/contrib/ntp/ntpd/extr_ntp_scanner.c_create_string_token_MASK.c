
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {int Integer; int String; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int
FUNC_2(
 char *VAR_3
 )
{
 char *VAR_4;




 VAR_4 = VAR_3;
 while (*VAR_4 && FUNC_1((u_char)*VAR_4))
  VAR_4++;

 if (!*VAR_4) {
  VAR_2.Integer = VAR_0;
  return VAR_2.Integer;
 }

 VAR_2.String = FUNC_0(VAR_3);
 return VAR_1;
}
