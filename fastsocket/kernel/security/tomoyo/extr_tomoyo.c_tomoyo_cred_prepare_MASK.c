
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cred {int security; } ;
typedef int gfp_t ;



__attribute__((used)) static int FUNC_0(struct cred *VAR_0, const struct cred *VAR_1,
          gfp_t VAR_2)
{




 VAR_0->security = VAR_1->security;
 return 0;
}
