
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_int ;
struct cryptodesc {int crd_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,char const*,int) ;

__attribute__((used)) static void
FUNC_2(struct cryptodesc *VAR_2, struct cryptodesc *VAR_3,
    u_int VAR_4, const char *VAR_5, char *VAR_6)
{
 u_int VAR_7, VAR_8;


 FUNC_1(VAR_6, VAR_5, VAR_0);


 VAR_6[0] |= (((VAR_4 - 2) / 2) << 3);


 VAR_8 = VAR_3->crd_len;
 for (VAR_7 = 0; VAR_7 < VAR_5[0]; VAR_7++) {
  VAR_6[VAR_1 - 1 - VAR_7] = VAR_8;
  VAR_8 >>= 8;
 }







 if (VAR_2->crd_len != 0) {
  VAR_6[0] |= (1 << 6);
  *(uint16_t *)(VAR_6 + VAR_0) = FUNC_0(VAR_2->crd_len);
 }
}
