
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int flags; short type; } ;
struct mb_args {int flags; short type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct mbuf* FUNC_0 (int ,struct mbuf*,int) ;
 int FUNC_1 (int ,struct mbuf*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

struct mbuf *
FUNC_2(int VAR_8, int VAR_9, short VAR_10, int VAR_11)
{
 struct mb_args VAR_12;
 struct mbuf *VAR_13, *VAR_14;

 VAR_12.flags = VAR_11;
 VAR_12.type = VAR_10;

 if (VAR_8 <= VAR_1 || (VAR_8 <= VAR_3 && (VAR_11 & VAR_4) == 0))
  return (FUNC_0(VAR_6, &VAR_12, VAR_9));
 if (VAR_8 <= VAR_0)
  return (FUNC_0(VAR_7, &VAR_12, VAR_9));

 if (VAR_8 > VAR_2)
  return (((void*)0));

 VAR_13 = FUNC_0(VAR_6, &VAR_12, VAR_9);
 if (VAR_13 == ((void*)0))
  return (((void*)0));

 VAR_14 = FUNC_0(VAR_5, VAR_13, VAR_9);
 if (VAR_14 == ((void*)0)) {
  FUNC_1(VAR_6, VAR_13);
  return (((void*)0));
 }

 return (VAR_13);
}
