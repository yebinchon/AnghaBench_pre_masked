
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct atiixp_info {scalar_t__ codec_not_ready_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct atiixp_info*) ;
 int FUNC_1 (struct atiixp_info*) ;
 int FUNC_2 (struct atiixp_info*,int ) ;
 int FUNC_3 (struct atiixp_info*) ;
 int FUNC_4 (struct atiixp_info*) ;
 int FUNC_5 (struct atiixp_info*,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct atiixp_info *VAR_6)
{
 uint32_t VAR_7;

 FUNC_1(VAR_6);


 FUNC_0(VAR_6);


 VAR_7 = FUNC_2(VAR_6, VAR_0);
 VAR_7 &= ~(VAR_1 | VAR_2 |
     VAR_3 );
 FUNC_5(VAR_6, VAR_0, VAR_7);


 FUNC_3(VAR_6);

 VAR_6->codec_not_ready_bits = 0;


 FUNC_5(VAR_6, VAR_4, VAR_5);

 FUNC_4(VAR_6);
}
