
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct a10codec_info {int dummy; } ;


 int FUNC_0 (struct a10codec_info*,int ) ;
 int FUNC_1 (struct a10codec_info*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static u_int
FUNC_2(struct a10codec_info *VAR_6, u_int VAR_7)
{
 uint32_t VAR_8;


 VAR_8 = FUNC_0(VAR_6, VAR_5);


 VAR_8 |= VAR_3;
 FUNC_1(VAR_6, VAR_5, VAR_8);


 VAR_8 &= ~VAR_4;
 FUNC_1(VAR_6, VAR_5, VAR_8);


 VAR_8 &= ~VAR_1;
 VAR_8 |= (VAR_7 << VAR_2);
 FUNC_1(VAR_6, VAR_5, VAR_8);


 return (FUNC_0(VAR_6 , VAR_5) & VAR_0);
}
