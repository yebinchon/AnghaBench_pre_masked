
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct mss_info {int dummy; } ;
 int FUNC_0 (struct mss_info*,int) ;
 int FUNC_1 (struct mss_info*,int,int) ;

__attribute__((used)) static int
FUNC_2(struct mss_info *VAR_0, int VAR_1)
{
     u_char VAR_2;

     switch (VAR_1) {
     case 131:
     case 129:
  VAR_2 = 0;
  break;

     case 133:
     case 130:
  VAR_2 = 0x40;
  break;

     case 132:
  VAR_2 = 0xc0;
  break;

     case 128:
     default:
  VAR_1 = 128;
  VAR_2 = 0x80;
     }
     FUNC_1(VAR_0, 0, (FUNC_0(VAR_0, 0) & 0x3f) | VAR_2);
     FUNC_1(VAR_0, 1, (FUNC_0(VAR_0, 1) & 0x3f) | VAR_2);
     return VAR_1;
}
