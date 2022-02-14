
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct llentry {int la_flags; } ;
struct ifnet {int dummy; } ;


 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 (struct llentry*) ;
 int VAR_0 ;
 int FUNC_3 (struct llentry*) ;
 int FUNC_4 (struct llentry*) ;
 int FUNC_5 (struct llentry*) ;
 int FUNC_6 (struct llentry*) ;
 int FUNC_7 (struct llentry*) ;
 int FUNC_8 (struct ifnet*,struct llentry*,char const*,size_t,int) ;

int
FUNC_9(struct ifnet *VAR_1, struct llentry *VAR_2,
    const char *VAR_3, size_t VAR_4, int VAR_5)
{



 FUNC_6(VAR_2);
 FUNC_2(VAR_2);
 FUNC_7(VAR_2);
 FUNC_0(VAR_1);
 FUNC_5(VAR_2);





 if ((VAR_2->la_flags & VAR_0) != 0) {
  FUNC_1(VAR_1);
  FUNC_3(VAR_2);
  return (0);
 }


 FUNC_8(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

 FUNC_1(VAR_1);

 FUNC_4(VAR_2);

 return (1);
}
