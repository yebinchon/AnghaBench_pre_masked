
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ntb_softc {scalar_t__ type; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static inline uint64_t
FUNC_2(struct ntb_softc *VAR_2, uint64_t VAR_3)
{

 if (VAR_2->type == VAR_0)
  return (FUNC_1(8, VAR_3));

 FUNC_0(VAR_2->type == VAR_1, ("bad ntb type"));

 return (FUNC_1(2, VAR_3));
}
