
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ntb_softc {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static inline bool
FUNC_2(struct ntb_softc *VAR_5)
{
 uint32_t VAR_6;

 FUNC_0(VAR_5->type == VAR_4, ("ntb type"));

 VAR_6 = FUNC_1(4, VAR_3);
 if ((VAR_6 & VAR_2) != 0)
  return (1);

 VAR_6 = FUNC_1(4, VAR_1);
 return ((VAR_6 & VAR_0) != 0);
}
