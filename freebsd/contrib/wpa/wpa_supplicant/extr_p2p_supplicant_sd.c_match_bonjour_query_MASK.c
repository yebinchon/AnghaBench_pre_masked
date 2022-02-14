
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct p2p_srv_bonjour {int query; } ;
typedef int str_srv ;
typedef int str_rx ;


 scalar_t__ FUNC_0 (int const*,int const*,size_t) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*,int,int const*,int,int ) ;
 int const* FUNC_3 (int ) ;
 int const* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct p2p_srv_bonjour *VAR_0, const u8 *VAR_1,
          size_t VAR_2)
{
 char VAR_3[256], VAR_4[256];

 if (VAR_2 < 3 || FUNC_5(VAR_0->query) < 3)
  return 0;
 if (FUNC_0(VAR_1 + VAR_2 - 3,
        FUNC_4(VAR_0->query) + FUNC_5(VAR_0->query) - 3,
        3) != 0)
  return 0;
 if (VAR_2 == FUNC_5(VAR_0->query) &&
     FUNC_0(VAR_1, FUNC_3(VAR_0->query), VAR_2 - 3) == 0)
  return 1;

 if (FUNC_2(VAR_3, sizeof(VAR_3), VAR_1, VAR_2 - 3,
      0))
  return 0;
 if (FUNC_2(VAR_4, sizeof(VAR_4),
      FUNC_3(VAR_0->query),
      FUNC_5(VAR_0->query) - 3, 0))
  return 0;

 return FUNC_1(VAR_3, VAR_4) == 0;
}
