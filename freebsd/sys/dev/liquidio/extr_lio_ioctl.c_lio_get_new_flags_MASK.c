
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;
typedef enum lio_ifflags { ____Placeholder_lio_ifflags } lio_ifflags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (struct ifnet*) ;
 int FUNC_1 (struct ifnet*) ;

__attribute__((used)) static inline enum lio_ifflags
FUNC_2(struct ifnet *VAR_10)
{
 enum lio_ifflags VAR_11 = VAR_8;

 if (FUNC_1(VAR_10) & VAR_3)
  VAR_11 |= VAR_7;

 if (FUNC_1(VAR_10) & VAR_0)
  VAR_11 |= VAR_4;

 if (FUNC_1(VAR_10) & VAR_2) {
  VAR_11 |= VAR_6;





  if (FUNC_0(VAR_10) > VAR_9)
   VAR_11 |= VAR_4;
 }
 if (FUNC_1(VAR_10) & VAR_1)
  VAR_11 |= VAR_5;

 return (VAR_11);
}
