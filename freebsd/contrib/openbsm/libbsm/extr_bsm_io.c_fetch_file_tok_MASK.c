
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_5__ {int len; int name; int ms; int s; } ;
struct TYPE_6__ {TYPE_1__ file; } ;
struct TYPE_7__ {int len; TYPE_2__ tt; } ;
typedef TYPE_3__ tokenstr_t ;


 int FUNC_0 (int *,int,int ,int ,int) ;
 int FUNC_1 (int *,int,int ,int ,int) ;
 int FUNC_2 (char*,int,int ,int ,int ,int) ;

__attribute__((used)) static int
FUNC_3(tokenstr_t *VAR_0, u_char *VAR_1, int VAR_2)
{
 int VAR_3 = 0;

 FUNC_1(VAR_1, VAR_2, VAR_0->tt.file.s, VAR_0->len, VAR_3);
 if (VAR_3)
  return (-1);

 FUNC_1(VAR_1, VAR_2, VAR_0->tt.file.ms, VAR_0->len, VAR_3);
 if (VAR_3)
  return (-1);

 FUNC_0(VAR_1, VAR_2, VAR_0->tt.file.len, VAR_0->len, VAR_3);
 if (VAR_3)
  return (-1);

 FUNC_2((char*)VAR_1, VAR_2, VAR_0->tt.file.name, VAR_0->tt.file.len, VAR_0->len,
     VAR_3);
 if (VAR_3)
  return (-1);

 return (0);
}
