
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int tmp_addr ;
struct xaddr {int af; } ;


 int FUNC_0 (struct xaddr*,struct xaddr*,struct xaddr*) ;
 int FUNC_1 (int ,int ,struct xaddr*) ;
 int FUNC_2 (struct xaddr*) ;
 int FUNC_3 (struct xaddr*,struct xaddr const*,int) ;

__attribute__((used)) static int
FUNC_4(const struct xaddr *VAR_0, u_int VAR_1)
{
 struct xaddr VAR_2, VAR_3, VAR_4;

 FUNC_3(&VAR_2, VAR_0, sizeof(VAR_2));
 if (FUNC_1(VAR_0->af, VAR_1, &VAR_3) == -1)
  return (-1);
 if (FUNC_0(&VAR_4, &VAR_2, &VAR_3) == -1)
  return (-1);
 return (FUNC_2(&VAR_4));
}
