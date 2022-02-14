
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef scalar_t__ u_char ;
struct bfe_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bfe_softc*,int ,int) ;
 int FUNC_1 (struct bfe_softc*,int ,int ,int,int) ;

__attribute__((used)) static void
FUNC_2(struct bfe_softc *VAR_7, u_char *VAR_8, int VAR_9)
{
 u_int32_t VAR_10;

 VAR_10 = ((u_int32_t) VAR_8[2]) << 24;
 VAR_10 |= ((u_int32_t) VAR_8[3]) << 16;
 VAR_10 |= ((u_int32_t) VAR_8[4]) << 8;
 VAR_10 |= ((u_int32_t) VAR_8[5]);
 FUNC_0(VAR_7, VAR_3, VAR_10);
 VAR_10 = (VAR_4 |
   (((u_int32_t) VAR_8[0]) << 8) |
   (((u_int32_t) VAR_8[1])));
 FUNC_0(VAR_7, VAR_2, VAR_10);
 FUNC_0(VAR_7, VAR_1, (VAR_6 |
    ((u_int32_t) VAR_9 << VAR_5)));
 FUNC_1(VAR_7, VAR_1, VAR_0, 10000, 1);
}
