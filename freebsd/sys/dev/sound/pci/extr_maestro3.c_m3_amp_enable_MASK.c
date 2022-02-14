
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_int16_t ;
struct sc_info {int which; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sc_info*) ;
 int FUNC_1 (struct sc_info*,int ) ;
 int FUNC_2 (struct sc_info*,int ,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(struct sc_info *VAR_5)
{
 u_int32_t VAR_6, VAR_7, VAR_8;
 u_int16_t VAR_9;

 FUNC_0(VAR_5);

 switch (VAR_5->which) {
        case 129:
                VAR_7 = 0x1800;
                break;
 case 128:
                VAR_7 = 0x1100;
                break;
        default:
  FUNC_3("bad sc->which");
 }
 VAR_6 = (VAR_7 >> 8) & 0x0f;
 VAR_8 = VAR_7 >> 12;
 VAR_8 = !VAR_8;
 VAR_8 = VAR_8 << VAR_6;
 VAR_6 = 1 << VAR_6;
 FUNC_2(VAR_5, VAR_2, ~VAR_6);
 VAR_9 = FUNC_1(VAR_5, VAR_1);
 FUNC_2(VAR_5, VAR_1, VAR_9 | VAR_6);
 VAR_9 = VAR_4 | VAR_3 | VAR_8;
 FUNC_2(VAR_5, VAR_0, VAR_9);
 FUNC_2(VAR_5, VAR_2, ~0);
}
