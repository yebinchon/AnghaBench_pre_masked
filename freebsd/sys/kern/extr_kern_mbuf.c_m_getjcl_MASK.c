
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uma_zone_t ;
struct mbuf {int flags; short type; } ;
struct mb_args {int flags; short type; } ;


 int VAR_0 ;
 struct mbuf* FUNC_0 (int,short,int) ;
 int FUNC_1 (int) ;
 struct mbuf* FUNC_2 (int ,struct mbuf*,int) ;
 int FUNC_3 (int ,struct mbuf*) ;
 int VAR_1 ;

struct mbuf *
FUNC_4(int VAR_2, short VAR_3, int VAR_4, int VAR_5)
{
 struct mb_args VAR_6;
 struct mbuf *VAR_7, *VAR_8;
 uma_zone_t VAR_9;

 if (VAR_5 == VAR_0)
  return FUNC_0(VAR_2, VAR_3, VAR_4);

 VAR_6.flags = VAR_4;
 VAR_6.type = VAR_3;

 VAR_7 = FUNC_2(VAR_1, &VAR_6, VAR_2);
 if (VAR_7 == ((void*)0))
  return (((void*)0));

 VAR_9 = FUNC_1(VAR_5);
 VAR_8 = FUNC_2(VAR_9, VAR_7, VAR_2);
 if (VAR_8 == ((void*)0)) {
  FUNC_3(VAR_1, VAR_7);
  return (((void*)0));
 }
 return (VAR_7);
}
