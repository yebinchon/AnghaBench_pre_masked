
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bwn_mac {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bwn_mac*,int ,int ) ;
 int FUNC_2 (struct bwn_mac*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct bwn_mac *VAR_4, int VAR_5)
{
 uint16_t VAR_6;
 uint16_t VAR_7;

 VAR_6 = FUNC_0(VAR_5);


 VAR_7 = FUNC_1(VAR_4, VAR_0, VAR_1);
 VAR_7 = (VAR_7 & ~VAR_3) | VAR_6;
 FUNC_2(VAR_4, VAR_0, VAR_1, VAR_7);

 VAR_7 = FUNC_1(VAR_4, VAR_0, VAR_2);
 VAR_7 = (VAR_7 & ~VAR_3) | VAR_6;
 FUNC_2(VAR_4, VAR_0, VAR_2, VAR_7);
}
