
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;


 int FUNC_0 (struct gctl_req*,char*) ;
 int* FUNC_1 (struct gctl_req*,char*,int) ;

__attribute__((used)) static int
FUNC_2(struct gctl_req *VAR_0)
{
 int *VAR_1;

 VAR_1 = FUNC_1(VAR_0, "nargs", sizeof(*VAR_1));
 if (VAR_1 == ((void*)0)) {
  FUNC_0(VAR_0, "No 'nargs' argument");
  return (0);
 }
 if (*VAR_1 <= 0)
  FUNC_0(VAR_0, "Missing device(s).");
 return (*VAR_1);
}
