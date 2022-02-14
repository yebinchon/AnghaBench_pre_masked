
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (struct gctl_req*,char const*,int*) ;

__attribute__((used)) static int
FUNC_1(struct gctl_req *VAR_1, const char *VAR_2, const void **VAR_3,
    unsigned int *VAR_4)
{
 const void *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_1, VAR_2, &VAR_6);
 if (VAR_5 == ((void*)0))
  return (VAR_0);
 *VAR_3 = VAR_5;
 *VAR_4 = VAR_6;
 return (0);
}
