
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;
typedef int param ;


 int FUNC_0 (struct gctl_req*,char*,int) ;
 char* FUNC_1 (struct gctl_req*,char*) ;
 int FUNC_2 (char*,int,char*,int) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char const*,int) ;

__attribute__((used)) static const char *
FUNC_5(struct gctl_req *VAR_0, int VAR_1)
{
 static const char *VAR_2 = "/dev/";
 const char *VAR_3;
 char VAR_4[16];
 int VAR_5 = FUNC_3(VAR_2);

 FUNC_2(VAR_4, sizeof(VAR_4), "arg%d", VAR_1);
 VAR_3 = FUNC_1(VAR_0, VAR_4);
 if (VAR_3 == ((void*)0))
  FUNC_0(VAR_0, "No 'arg%d' argument", VAR_1);
 else if (FUNC_4(VAR_3, VAR_2, VAR_5) == 0)
  VAR_3 += VAR_5;
 return (VAR_3);
}
