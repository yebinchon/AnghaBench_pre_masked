
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;


 int FUNC_0 (struct gctl_req*,char*,char const*) ;
 void* FUNC_1 (struct gctl_req*,char const*,int*) ;

void *
FUNC_2(struct gctl_req *VAR_0, const char *VAR_1, int VAR_2)
{
 int VAR_3;
 void *VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1, &VAR_3);
 if (VAR_3 != VAR_2) {
  VAR_4 = ((void*)0);
  FUNC_0(VAR_0, "Wrong length %s argument", VAR_1);
 }
 return (VAR_4);
}
