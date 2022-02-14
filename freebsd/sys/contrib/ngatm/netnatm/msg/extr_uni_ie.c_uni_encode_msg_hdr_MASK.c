
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct unicx {scalar_t__ pnni; } ;
struct TYPE_2__ {int cref; scalar_t__ flag; } ;
struct uni_msghdr {int act; scalar_t__ pass; TYPE_1__ cref; } ;
struct uni_msg {int b_wptr; int b_rptr; } ;
typedef enum uni_msgtype { ____Placeholder_uni_msgtype } uni_msgtype ;


 int FUNC_0 (struct uni_msg*,int ) ;
 int FUNC_1 (struct uni_msg*,int) ;
 int FUNC_2 (struct uni_msg*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct uni_msg*,int) ;

int
FUNC_4(struct uni_msg *VAR_3, struct uni_msghdr *VAR_4,
    enum uni_msgtype VAR_5, struct unicx *VAR_6, int *VAR_7)
{
 u_char VAR_8;

 (void)FUNC_3(VAR_3, 9);

 FUNC_2(VAR_3, VAR_6->pnni ? VAR_0 : VAR_2);
 FUNC_2(VAR_3, 3);
 if(VAR_4->cref.cref >= 1<<23)
  return -1;
 FUNC_1(VAR_3, VAR_4->cref.cref | (VAR_4->cref.flag ? 0x800000 : 0));
 FUNC_2(VAR_3, VAR_5);

 VAR_8 = 0x80;
 if(VAR_4->act != VAR_1)
  VAR_8 |= 0x10 | (VAR_4->act & 3);
 if(VAR_6->pnni && VAR_4->pass)
  VAR_8 |= 0x08;
 FUNC_2(VAR_3, VAR_8);

 *VAR_7 = VAR_3->b_wptr - VAR_3->b_rptr;
 FUNC_0(VAR_3, 0);

 return 0;
}
