
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_5__ {int size; int ad_type; int s; int ms; int * addr; int e_mod; int e_type; int version; } ;
struct TYPE_6__ {TYPE_1__ hdr32_ex; } ;
struct TYPE_7__ {int len; TYPE_2__ tt; } ;
typedef TYPE_3__ tokenstr_t ;




 int FUNC_0 (int *,int,int *,int,int ,int) ;
 int FUNC_1 (int *,int,int ,int ,int) ;
 int FUNC_2 (int *,int,int ,int ,int) ;
 int FUNC_3 (int *,int,int,int ,int) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int
FUNC_5(tokenstr_t *VAR_0, u_char *VAR_1, int VAR_2)
{
 int VAR_3 = 0;

 FUNC_3(VAR_1, VAR_2, VAR_0->tt.hdr32_ex.size, VAR_0->len, VAR_3);
 if (VAR_3)
  return (-1);

 FUNC_1(VAR_1, VAR_2, VAR_0->tt.hdr32_ex.version, VAR_0->len, VAR_3);
 if (VAR_3)
  return (-1);

 FUNC_2(VAR_1, VAR_2, VAR_0->tt.hdr32_ex.e_type, VAR_0->len, VAR_3);
 if (VAR_3)
  return (-1);

 FUNC_2(VAR_1, VAR_2, VAR_0->tt.hdr32_ex.e_mod, VAR_0->len, VAR_3);
 if (VAR_3)
  return (-1);

 FUNC_3(VAR_1, VAR_2, VAR_0->tt.hdr32_ex.ad_type, VAR_0->len, VAR_3);
 if (VAR_3)
  return (-1);

 FUNC_4(VAR_0->tt.hdr32_ex.addr, sizeof(VAR_0->tt.hdr32_ex.addr));
 switch (VAR_0->tt.hdr32_ex.ad_type) {
 case 129:
  FUNC_0(VAR_1, VAR_2, &VAR_0->tt.hdr32_ex.addr[0],
      sizeof(VAR_0->tt.hdr32_ex.addr[0]), VAR_0->len, VAR_3);
  if (VAR_3)
   return (-1);
  break;

 case 128:
  FUNC_0(VAR_1, VAR_2, VAR_0->tt.hdr32_ex.addr,
      sizeof(VAR_0->tt.hdr32_ex.addr), VAR_0->len, VAR_3);
  break;
 }

 FUNC_3(VAR_1, VAR_2, VAR_0->tt.hdr32_ex.s, VAR_0->len, VAR_3);
 if (VAR_3)
  return (-1);

 FUNC_3(VAR_1, VAR_2, VAR_0->tt.hdr32_ex.ms, VAR_0->len, VAR_3);
 if (VAR_3)
  return (-1);

 return (0);
}
