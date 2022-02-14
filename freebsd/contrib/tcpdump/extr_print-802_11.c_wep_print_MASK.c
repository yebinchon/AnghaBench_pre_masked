
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int const,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(netdissect_options *VAR_2,
          const u_char *VAR_3)
{
 uint32_t VAR_4;

 if (!FUNC_5(*VAR_3, VAR_0 + VAR_1))
  return 0;
 VAR_4 = FUNC_0(VAR_3);

 FUNC_4((VAR_2, " IV:%3x Pad %x KeyID %x", FUNC_1(VAR_4), FUNC_3(VAR_4),
     FUNC_2(VAR_4)));

 return 1;
}
