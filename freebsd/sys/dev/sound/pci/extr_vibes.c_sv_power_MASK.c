
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct sc_info {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct sc_info*,int ) ;
 int FUNC_3 (struct sc_info*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct sc_info *VAR_9, int VAR_10)
{
 u_int8_t VAR_11;

        switch (VAR_10) {
        case 0:

  VAR_11 = FUNC_2(VAR_9, VAR_7) &~ VAR_0;
  VAR_11 |= VAR_2 | VAR_1;
  FUNC_3(VAR_9, VAR_7, VAR_11);
  VAR_11 = FUNC_2(VAR_9, VAR_8) &~ VAR_3;
  VAR_11 |= VAR_6 | VAR_5 | VAR_4;
  FUNC_3(VAR_9, VAR_8, VAR_11);
                break;
        default:

  VAR_11 = FUNC_2(VAR_9, VAR_7) | VAR_0;
  FUNC_3(VAR_9, VAR_7, VAR_11);
  VAR_11 = FUNC_2(VAR_9, VAR_8) | VAR_3;
  FUNC_3(VAR_9, VAR_8, VAR_3);
                break;
        }
        FUNC_0(FUNC_1("Power state %d\n", VAR_10));
}
