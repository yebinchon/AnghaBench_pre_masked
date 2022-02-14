
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct sec_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (struct sec_softc*,int ,int) ;
 int FUNC_3 (struct sec_softc*,int,int) ;
 int FUNC_4 (struct sec_softc*) ;

__attribute__((used)) static int
FUNC_5(struct sec_softc *VAR_3)
{
 uint64_t VAR_4;
 int VAR_5, VAR_6;


 VAR_5 = FUNC_4(VAR_3);
 if (VAR_5)
  return (VAR_5);

 VAR_5 = FUNC_4(VAR_3);
 if (VAR_5)
  return (VAR_5);


 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_5 = FUNC_3(VAR_3, VAR_6, 1);
  if (VAR_5)
   return (VAR_5);
 }


 VAR_4 = VAR_2;
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  VAR_4 |= FUNC_0(VAR_6) | FUNC_1(VAR_6);

 FUNC_2(VAR_3, VAR_1, VAR_4);

 return (VAR_5);
}
