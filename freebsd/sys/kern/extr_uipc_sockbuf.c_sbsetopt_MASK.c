
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int ;
struct sockbuf {short sb_flags; int sb_lowat; int sb_hiwat; } ;
struct socket {short sol_sbsnd_flags; short sol_sbrcv_flags; struct sockbuf so_rcv; struct sockbuf so_snd; int sol_sbrcv_hiwat; int sol_sbrcv_lowat; int sol_sbsnd_hiwat; int sol_sbsnd_lowat; } ;


 int VAR_0 ;
 short VAR_1 ;
 int FUNC_0 (struct sockbuf*) ;
 int FUNC_1 (struct sockbuf*) ;
 int FUNC_2 (struct socket*) ;
 int FUNC_3 (struct socket*) ;
 scalar_t__ FUNC_4 (struct socket*) ;




 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct sockbuf*,int ,struct socket*,int ) ;

int
FUNC_6(struct socket *VAR_4, int VAR_5, u_long VAR_6)
{
 struct sockbuf *VAR_7;
 short *VAR_8;
 u_int *VAR_9, *VAR_10;
 int VAR_11;

 VAR_7 = ((void*)0);
 FUNC_2(VAR_4);
 if (FUNC_4(VAR_4)) {
  switch (VAR_5) {
   case 128:
   case 129:
    VAR_10 = &VAR_4->sol_sbsnd_lowat;
    VAR_9 = &VAR_4->sol_sbsnd_hiwat;
    VAR_8 = &VAR_4->sol_sbsnd_flags;
    break;
   case 130:
   case 131:
    VAR_10 = &VAR_4->sol_sbrcv_lowat;
    VAR_9 = &VAR_4->sol_sbrcv_hiwat;
    VAR_8 = &VAR_4->sol_sbrcv_flags;
    break;
  }
 } else {
  switch (VAR_5) {
   case 128:
   case 129:
    VAR_7 = &VAR_4->so_snd;
    break;
   case 130:
   case 131:
    VAR_7 = &VAR_4->so_rcv;
    break;
  }
  VAR_8 = &VAR_7->sb_flags;
  VAR_9 = &VAR_7->sb_hiwat;
  VAR_10 = &VAR_7->sb_lowat;
  FUNC_0(VAR_7);
 }

 VAR_11 = 0;
 switch (VAR_5) {
 case 129:
 case 131:
  if (FUNC_4(VAR_4)) {
   if (VAR_6 > VAR_3) {
    VAR_11 = VAR_0;
    break;
   }
   *VAR_9 = VAR_6;
   if (*VAR_10 > *VAR_9)
    *VAR_10 = *VAR_9;
  } else {
   if (!FUNC_5(VAR_7, VAR_6, VAR_4, VAR_2))
    VAR_11 = VAR_0;
  }
  if (VAR_11 == 0)
   *VAR_8 &= ~VAR_1;
  break;
 case 128:
 case 130:




  *VAR_10 = (VAR_6 > *VAR_9) ? *VAR_9 : VAR_6;
  break;
 }

 if (!FUNC_4(VAR_4))
  FUNC_1(VAR_7);
 FUNC_3(VAR_4);
 return (VAR_11);
}
