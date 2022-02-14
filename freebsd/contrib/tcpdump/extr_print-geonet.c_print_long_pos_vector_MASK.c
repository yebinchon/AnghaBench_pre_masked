
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const,int) ;
 int FUNC_3 (int *,int const*,int ,int) ;

__attribute__((used)) static int
FUNC_4(netdissect_options *VAR_1,
                      const u_char *VAR_2)
{
 uint32_t VAR_3, VAR_4;

 if (!FUNC_2(*VAR_2, VAR_0))
  return (-1);
 FUNC_1((VAR_1, "GN_ADDR:%s ", FUNC_3 (VAR_1, VAR_2, 0, VAR_0)));

 if (!FUNC_2(*(VAR_2+12), 8))
  return (-1);
 VAR_3 = FUNC_0(VAR_2+12);
 FUNC_1((VAR_1, "lat:%d ", VAR_3));
 VAR_4 = FUNC_0(VAR_2+16);
 FUNC_1((VAR_1, "lon:%d", VAR_4));
 return (0);
}
