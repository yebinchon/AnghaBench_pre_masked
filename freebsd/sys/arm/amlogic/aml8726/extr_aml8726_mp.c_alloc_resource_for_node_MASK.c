
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct resource {int r_bushandle; int r_bustag; } ;
typedef int phandle_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,int ,int *) ;
 int FUNC_2 (int ,int ,scalar_t__*,scalar_t__*) ;
 int FUNC_3 (int ,scalar_t__*,scalar_t__*) ;
 int VAR_0 ;
 int FUNC_4 (struct resource*,int ,int) ;

__attribute__((used)) static int
FUNC_5(phandle_t VAR_1, struct resource *VAR_2, u_long *VAR_3)
{
 int VAR_4;
 u_long VAR_5, VAR_6;
 u_long VAR_7;

 if ((VAR_4 = FUNC_2(FUNC_0(VAR_1), 0, &VAR_5, &VAR_6)) != 0 ||
     (VAR_4 = FUNC_3(VAR_1, &VAR_7, VAR_3)) != 0)
  return (VAR_4);

 VAR_7 += VAR_5;

 FUNC_4(VAR_2, 0, sizeof(*VAR_2));

 VAR_2->r_bustag = VAR_0;

 VAR_4 = FUNC_1(VAR_2->r_bustag, VAR_7, *VAR_3, 0, &VAR_2->r_bushandle);

 return (VAR_4);
}
