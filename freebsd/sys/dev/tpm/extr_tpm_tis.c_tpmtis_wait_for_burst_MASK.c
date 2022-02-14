
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct tpm_sc {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct tpm_sc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static uint16_t
FUNC_2(struct tpm_sc *VAR_4)
{
 int VAR_5;
 uint16_t VAR_6;

 VAR_5 = VAR_3;

 while (VAR_5-- > 0) {
  VAR_6 = (FUNC_1(VAR_4, VAR_0) & VAR_1) >>
      VAR_2;
  if (VAR_6 > 0)
   break;

  FUNC_0(1);
 }
 return (VAR_6);
}
