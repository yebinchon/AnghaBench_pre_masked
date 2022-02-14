
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bwn_mac {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bwn_mac*,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct bwn_mac*,int ,int) ;
 int FUNC_2 (struct bwn_mac*,int ,int,int) ;

__attribute__((used)) static void
FUNC_3(struct bwn_mac *VAR_3)
{
 uint32_t VAR_4 = 0x7f7f7f7f;

 FUNC_2(VAR_3, VAR_2, 0x088, (VAR_4 & 0x0000ffff));
 FUNC_2(VAR_3, VAR_2, 0x08a, (VAR_4 & 0xffff0000) >> 16);
 FUNC_1(VAR_3, VAR_0,
     FUNC_0(VAR_3, VAR_0) | VAR_1);
}
