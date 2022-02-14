
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum md_types { ____Placeholder_md_types } md_types ;





 int FUNC_0 () ;
 int FUNC_1 (int,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,char*,int ,char const*,char const*,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_5(const char *VAR_3, const enum md_types VAR_4)
{
 int VAR_5;
 const char *VAR_6;

 switch (VAR_4) {
 case 129:
  VAR_6 = "-t swap";
  break;
 case 128:
  VAR_6 = "-t vnode";
  break;
 case 130:
  VAR_6 = "-t malloc";
  break;
 default:
  FUNC_0();
 }
 VAR_5 = FUNC_2(((void*)0), "%s -a %s%s -u %s%d", VAR_1, VAR_6, VAR_3,
     VAR_0, VAR_2);
 if (VAR_5)
  FUNC_1(1, "mdconfig (attach) exited %s %d", FUNC_4(VAR_5),
      FUNC_3(VAR_5));
}
