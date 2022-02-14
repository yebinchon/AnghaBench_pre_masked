
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct ssh {int dummy; } ;


 int FUNC_0 (struct ssh*,int const*,size_t) ;
 int FUNC_1 (struct ssh*) ;
 int FUNC_2 (struct ssh*,int) ;

int
FUNC_3(struct ssh *VAR_0, int VAR_1, const u_char *VAR_2, size_t VAR_3)
{
 int VAR_4;

 if ((VAR_4 = FUNC_2(VAR_0, VAR_1)) != 0 ||
     (VAR_4 = FUNC_0(VAR_0, VAR_2, VAR_3)) != 0 ||
     (VAR_4 = FUNC_1(VAR_0)) != 0)
  return VAR_4;
 return 0;
}
