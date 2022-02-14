
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct xaddr {scalar_t__ af; } ;


 int FUNC_0 (struct xaddr*,struct xaddr const*,struct xaddr*) ;
 int FUNC_1 (struct xaddr*,struct xaddr const*) ;
 int FUNC_2 (scalar_t__,int ,struct xaddr*) ;

__attribute__((used)) static int
FUNC_3(const struct xaddr *VAR_0, const struct xaddr *VAR_1, u_int VAR_2)
{
 struct xaddr VAR_3, VAR_4;

 if (VAR_0->af != VAR_1->af)
  return -1;

 if (FUNC_2(VAR_0->af, VAR_2, &VAR_3) == -1)
  return -1;
 if (FUNC_0(&VAR_4, VAR_0, &VAR_3) == -1)
  return -1;
 return FUNC_1(&VAR_4, VAR_1);
}
