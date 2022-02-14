
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cred {int dummy; } ;
typedef int kernel_cap_t ;


 int VAR_0 ;
 int FUNC_0 (struct cred*,struct cred const*,int const*,int const*,int const*) ;
 int FUNC_1 (struct cred const*,struct cred*,int ) ;

__attribute__((used)) static int FUNC_2(struct cred *VAR_1, const struct cred *VAR_2,
     const kernel_cap_t *VAR_3,
     const kernel_cap_t *VAR_4,
     const kernel_cap_t *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_1, VAR_2,
          VAR_3, VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;

 return FUNC_1(VAR_2, VAR_1, VAR_0);
}
