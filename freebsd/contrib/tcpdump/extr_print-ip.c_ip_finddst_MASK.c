
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_char ;
struct ip {int const ip_dst; } ;
typedef int netdissect_options ;


 int VAR_0 ;

 int VAR_1 ;

 int FUNC_0 (struct ip const*) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int const,int) ;
 int FUNC_3 (int *,int const*,int) ;

__attribute__((used)) static uint32_t
FUNC_4(netdissect_options *VAR_2,
           const struct ip *VAR_3)
{
 int VAR_4;
 int VAR_5;
 const u_char *VAR_6;
 uint32_t VAR_7;

 VAR_6 = (const u_char *)(VAR_3 + 1);
 VAR_4 = (FUNC_0(VAR_3) << 2) - sizeof(struct ip);

 for (; VAR_4 > 0; VAR_6 += VAR_5, VAR_4 -= VAR_5) {
  int VAR_8;

  FUNC_1(*VAR_6);
  VAR_8 = *VAR_6;
  if (VAR_8 == VAR_0)
   break;
  else if (VAR_8 == VAR_1)
   VAR_5 = 1;
  else {
   FUNC_1(VAR_6[1]);
   VAR_5 = VAR_6[1];
   if (VAR_5 < 2)
    break;
  }
  FUNC_2(*VAR_6, VAR_5);
  switch (VAR_8) {

  case 128:
  case 129:
   if (VAR_5 < 7)
    break;
   FUNC_3(&VAR_7, VAR_6 + VAR_5 - 4, 4);
   return VAR_7;
  }
 }
trunc:
 FUNC_3(&VAR_7, &VAR_3->ip_dst, sizeof(uint32_t));
 return VAR_7;
}
