
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tool_ctx {char link_status; int dev; } ;
typedef enum ntb_width { ____Placeholder_ntb_width } ntb_width ;
typedef enum ntb_speed { ____Placeholder_ntb_speed } ntb_speed ;


 int FUNC_0 (int ,char*,char*,int,int) ;
 int FUNC_1 (int ,int*,int*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
 struct tool_ctx *VAR_1 = VAR_0;
 enum ntb_speed VAR_2 = 0;
 enum ntb_width VAR_3 = 0;
 int VAR_4 = 0;

 VAR_4 = FUNC_1(VAR_1->dev, &VAR_2, &VAR_3);
 if (VAR_4)
  VAR_1->link_status = 'Y';
 else
  VAR_1->link_status = 'N';

 FUNC_0(VAR_1->dev, "link is %s speed %d width %d\n",
     VAR_4 ? "up" : "down", VAR_2, VAR_3);
}
