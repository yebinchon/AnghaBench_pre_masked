
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_char ;
struct isakmp_gen {int np; int len; } ;
struct isakmp {int dummy; } ;
typedef int netdissect_options ;
typedef int e ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct isakmp_gen const) ;
 int FUNC_2 (struct isakmp_gen const,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct isakmp_gen*,struct isakmp_gen const*,int) ;
 int * FUNC_5 (int *,struct isakmp*,int ,struct isakmp_gen const*,int const*,int ,int ,int ,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static const u_char *
FUNC_7(netdissect_options *VAR_0,
  struct isakmp *VAR_1,
  u_char VAR_2, const struct isakmp_gen *VAR_3, const u_char *VAR_4,
  uint32_t VAR_5, uint32_t VAR_6, uint32_t VAR_7, int VAR_8)
{
 const u_char *VAR_9;
 int VAR_10;
 struct isakmp_gen VAR_11;

 VAR_9 = (const u_char *)VAR_3;
 while (VAR_2) {
  FUNC_1(*VAR_3);
  FUNC_4(&VAR_11, VAR_3, sizeof(VAR_11));

  FUNC_2(*VAR_3, FUNC_6(VAR_11.len));

  VAR_8++;
  FUNC_0((VAR_0,"\n"));
  for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++)
   FUNC_0((VAR_0,"    "));
  FUNC_0((VAR_0,"("));
  VAR_9 = FUNC_5(VAR_0, VAR_1, VAR_2,
          VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
  FUNC_0((VAR_0,")"));
  VAR_8--;

  if (VAR_9 == ((void*)0)) {

   return ((void*)0);
  }

  VAR_2 = VAR_11.np;
  VAR_3 = (const struct isakmp_gen *)VAR_9;
 }
 return VAR_9;
trunc:
 FUNC_0((VAR_0," [|%s]", FUNC_3(VAR_2)));
 return ((void*)0);
}
