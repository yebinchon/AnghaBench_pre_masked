
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct block {int dummy; } ;
typedef int compiler_state_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct block*,struct block*) ;
 struct block* FUNC_3 (int *,int ,int,int,int const*) ;
 int FUNC_4 (struct block*,struct block*) ;

__attribute__((used)) static struct block *
FUNC_5(compiler_state_t *VAR_1, const u_char *VAR_2, int VAR_3)
{
 register struct block *VAR_4, *VAR_5;

 switch (VAR_3) {

 case 129:
  return FUNC_3(VAR_1, VAR_0, 0, 1, VAR_2);

 case 132:
  return FUNC_3(VAR_1, VAR_0, 1, 1, VAR_2);

 case 134:
  VAR_4 = FUNC_5(VAR_1, VAR_2, 129);
  VAR_5 = FUNC_5(VAR_1, VAR_2, 132);
  FUNC_2(VAR_4, VAR_5);
  return VAR_5;

 case 133:
 case 131:
  VAR_4 = FUNC_5(VAR_1, VAR_2, 129);
  VAR_5 = FUNC_5(VAR_1, VAR_2, 132);
  FUNC_4(VAR_4, VAR_5);
  return VAR_5;

 case 138:
  FUNC_1(VAR_1, "'addr1' and 'address1' are only supported on 802.11");
  break;

 case 137:
  FUNC_1(VAR_1, "'addr2' and 'address2' are only supported on 802.11");
  break;

 case 136:
  FUNC_1(VAR_1, "'addr3' and 'address3' are only supported on 802.11");
  break;

 case 135:
  FUNC_1(VAR_1, "'addr4' and 'address4' are only supported on 802.11");
  break;

 case 130:
  FUNC_1(VAR_1, "'ra' is only supported on 802.11");
  break;

 case 128:
  FUNC_1(VAR_1, "'ta' is only supported on 802.11");
  break;
 }
 FUNC_0();

}
