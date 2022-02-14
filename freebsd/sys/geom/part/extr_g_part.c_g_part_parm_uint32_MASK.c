
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ u_int ;
struct gctl_req {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ const VAR_2 ;
 int FUNC_0 (struct gctl_req*,char*,int,char const*,unsigned int) ;
 scalar_t__* FUNC_1 (struct gctl_req*,char const*,int*) ;

__attribute__((used)) static int
FUNC_2(struct gctl_req *VAR_3, const char *VAR_4, u_int *VAR_5)
{
 const uint32_t *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_3, VAR_4, &VAR_7);
 if (VAR_6 == ((void*)0))
  return (VAR_1);
 if (VAR_7 != sizeof(*VAR_6) || *VAR_6 > VAR_2) {
  FUNC_0(VAR_3, "%d %s '%u'", VAR_0, VAR_4, (unsigned int)*VAR_6);
  return (VAR_0);
 }
 *VAR_5 = (u_int)*VAR_6;
 return (0);
}
