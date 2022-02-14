
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_5__ {int length; int data; } ;
struct TYPE_6__ {TYPE_1__ invalid; } ;
struct TYPE_7__ {int len; TYPE_2__ tt; } ;
typedef TYPE_3__ tokenstr_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int ,int,int,int) ;

__attribute__((used)) static int
FUNC_1(tokenstr_t *VAR_1, u_char *VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 int VAR_5;

 VAR_5 = VAR_3 - (VAR_1->len + VAR_0);
 if (VAR_5 <= 0)
  return (-1);

 VAR_1->tt.invalid.length = VAR_5;

 FUNC_0((char*)VAR_2, VAR_3, VAR_1->tt.invalid.data, VAR_5, VAR_1->len,
     VAR_4);
 if (VAR_4)
  return (-1);

 return (0);
}
