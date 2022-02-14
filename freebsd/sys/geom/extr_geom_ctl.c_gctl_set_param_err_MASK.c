
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;





 int FUNC_0 (struct gctl_req*,char*,char const*) ;
 int FUNC_1 (struct gctl_req*,char const*,void const*,int) ;

void
FUNC_2(struct gctl_req *VAR_0, const char *VAR_1, void const *VAR_2,
    int VAR_3)
{

 switch (FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3)) {
 case 128:
  FUNC_0(VAR_0, "No write access %s argument", VAR_1);
  break;
 case 129:
  FUNC_0(VAR_0, "Wrong length %s argument", VAR_1);
  break;
 case 130:
  FUNC_0(VAR_0, "Missing %s argument", VAR_1);
  break;
 }
}
