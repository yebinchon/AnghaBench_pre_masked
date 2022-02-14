
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct sec_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct sec_softc*,int ) ;
 int FUNC_9 (struct sec_softc*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_10(struct sec_softc *VAR_2, int VAR_3)
{
 uint64_t VAR_4;
 int VAR_5 = 0;

 FUNC_8(VAR_2, VAR_1);

 VAR_4 = FUNC_9(VAR_2, VAR_0);

 switch (VAR_3) {
 case 135:
  VAR_5 = FUNC_1(VAR_4);
  break;
 case 133:
  VAR_5 = FUNC_3(VAR_4);
  break;
 case 131:
 case 130:
  VAR_5 = FUNC_5(VAR_4);
  break;
 case 128:
  VAR_5 = FUNC_7(VAR_4);
  break;
 case 129:
  VAR_5 = FUNC_6(VAR_4);
  break;
 case 136:
  VAR_5 = FUNC_0(VAR_4);
  break;
 case 132:
  VAR_5 = FUNC_4(VAR_4);
  break;
 case 134:
  VAR_5 = FUNC_2(VAR_4);
  break;
 }

 return (VAR_5 - 1);
}
