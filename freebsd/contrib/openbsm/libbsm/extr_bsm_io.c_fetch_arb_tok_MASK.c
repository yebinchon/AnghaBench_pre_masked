
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_5__ {int howtopr; int bu; int uc; int data; } ;
struct TYPE_6__ {TYPE_1__ arb; } ;
struct TYPE_7__ {int len; TYPE_2__ tt; } ;
typedef TYPE_3__ tokenstr_t ;



 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;
 int FUNC_0 (int *,int,int,int ,int) ;
 int FUNC_1 (int *,int,int ,int,int ,int) ;

__attribute__((used)) static int
FUNC_2(tokenstr_t *VAR_4, u_char *VAR_5, int VAR_6)
{
 int VAR_7 = 0;
 int VAR_8;

 FUNC_0(VAR_5, VAR_6, VAR_4->tt.arb.howtopr, VAR_4->len, VAR_7);
 if (VAR_7)
  return (-1);

 FUNC_0(VAR_5, VAR_6, VAR_4->tt.arb.bu, VAR_4->len, VAR_7);
 if (VAR_7)
  return (-1);

 FUNC_0(VAR_5, VAR_6, VAR_4->tt.arb.uc, VAR_4->len, VAR_7);
 if (VAR_7)
  return (-1);




 switch(VAR_4->tt.arb.bu) {
 case 131:

  VAR_8 = VAR_0;
  break;

 case 128:
  VAR_8 = VAR_3;
  break;

 case 130:

  VAR_8 = VAR_1;
  break;

 case 129:
  VAR_8 = VAR_2;
  break;

 default:
  return (-1);
 }

 FUNC_1(VAR_5, VAR_6, VAR_4->tt.arb.data, VAR_8 * VAR_4->tt.arb.uc,
     VAR_4->len, VAR_7);
 if (VAR_7)
  return (-1);

 return (0);
}
