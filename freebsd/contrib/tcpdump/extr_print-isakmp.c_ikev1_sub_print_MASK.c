
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_char ;
struct isakmp_gen {int np; int len; } ;
typedef int netdissect_options ;
typedef int e ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct isakmp_gen const) ;
 int FUNC_2 (struct isakmp_gen const,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct isakmp_gen*,struct isakmp_gen const*,int) ;
 int * FUNC_5 (int *,int ,struct isakmp_gen const*,int const*,int ,int ,int ,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static const u_char *
FUNC_7(netdissect_options *VAR_0,
  u_char VAR_1, const struct isakmp_gen *VAR_2, const u_char *VAR_3,
  uint32_t VAR_4, uint32_t VAR_5, uint32_t VAR_6, int VAR_7)
{
 const u_char *VAR_8;
 int VAR_9;
 struct isakmp_gen VAR_10;

 VAR_8 = (const u_char *)VAR_2;

 while (VAR_1) {
  FUNC_1(*VAR_2);
  FUNC_4(&VAR_10, VAR_2, sizeof(VAR_10));

  FUNC_2(*VAR_2, FUNC_6(VAR_10.len));

  VAR_7++;
  FUNC_0((VAR_0,"\n"));
  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
   FUNC_0((VAR_0,"    "));
  FUNC_0((VAR_0,"("));
  VAR_8 = FUNC_5(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
  FUNC_0((VAR_0,")"));
  VAR_7--;

  if (VAR_8 == ((void*)0)) {

   return ((void*)0);
  }

  VAR_1 = VAR_10.np;
  VAR_2 = (const struct isakmp_gen *)VAR_8;
 }
 return VAR_8;
trunc:
 FUNC_0((VAR_0," [|%s]", FUNC_3(VAR_1)));
 return ((void*)0);
}
