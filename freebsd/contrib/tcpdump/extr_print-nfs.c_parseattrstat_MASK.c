
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int netdissect_options ;


 int * FUNC_0 (int *,int const*,int,int) ;
 int * FUNC_1 (int *,int const*,int*) ;

__attribute__((used)) static int
FUNC_2(netdissect_options *VAR_0,
              const uint32_t *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_1 = FUNC_1(VAR_0, VAR_1, &VAR_4);
 if (VAR_1 == ((void*)0))
  return (0);
 if (VAR_4)
  return (1);

 return (FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3) != ((void*)0));
}
