
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfg {int mode; int unit; int conf; int fd; } ;
typedef enum cmdmode { ____Placeholder_cmdmode } cmdmode ;


 int VAR_0 ;
 int VAR_1 ;







 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct cfg*) ;
 int FUNC_3 (struct cfg*,int ) ;
 int FUNC_4 (struct cfg*,int ) ;

__attribute__((used)) static void
FUNC_5(struct cfg *VAR_2, enum cmdmode VAR_3)
{
 if (VAR_3 == VAR_2->mode)
  return;
 switch (VAR_2->mode) {
 case 132:
  break;
 case 133:




  if (FUNC_1(VAR_2->fd, VAR_1, &VAR_2->conf) != 0)
   FUNC_0(VAR_0, "ioctl(IOETHERSWITCHGETCONF)");
  FUNC_2(VAR_2);
  break;
 case 130:
  FUNC_3(VAR_2, VAR_2->unit);
  break;
 case 128:
  FUNC_4(VAR_2, VAR_2->unit);
  break;
 case 129:
 case 131:
 case 134:
  break;
 }
 VAR_2->mode = VAR_3;
}
