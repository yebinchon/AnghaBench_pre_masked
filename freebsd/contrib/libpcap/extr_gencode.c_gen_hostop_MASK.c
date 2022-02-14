
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct block {int dummy; } ;
typedef int compiler_state_t ;
typedef scalar_t__ bpf_u_int32 ;
typedef int bpf_int32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct block*,struct block*) ;
 struct block* FUNC_3 (int *,int) ;
 struct block* FUNC_4 (int *,int ,int ,int ,int ,scalar_t__) ;
 int FUNC_5 (struct block*,struct block*) ;

__attribute__((used)) static struct block *
FUNC_6(compiler_state_t *VAR_2, bpf_u_int32 VAR_3, bpf_u_int32 VAR_4,
    int VAR_5, int VAR_6, u_int VAR_7, u_int VAR_8)
{
 struct block *VAR_9, *VAR_10;
 u_int VAR_11;

 switch (VAR_5) {

 case 129:
  VAR_11 = VAR_7;
  break;

 case 132:
  VAR_11 = VAR_8;
  break;

 case 134:
  VAR_9 = FUNC_6(VAR_2, VAR_3, VAR_4, 129, VAR_6, VAR_7, VAR_8);
  VAR_10 = FUNC_6(VAR_2, VAR_3, VAR_4, 132, VAR_6, VAR_7, VAR_8);
  FUNC_2(VAR_9, VAR_10);
  return VAR_10;

 case 131:
 case 133:
  VAR_9 = FUNC_6(VAR_2, VAR_3, VAR_4, 129, VAR_6, VAR_7, VAR_8);
  VAR_10 = FUNC_6(VAR_2, VAR_3, VAR_4, 132, VAR_6, VAR_7, VAR_8);
  FUNC_5(VAR_9, VAR_10);
  return VAR_10;

 case 138:
  FUNC_1(VAR_2, "'addr1' and 'address1' are not valid qualifiers for addresses other than 802.11 MAC addresses");
  break;

 case 137:
  FUNC_1(VAR_2, "'addr2' and 'address2' are not valid qualifiers for addresses other than 802.11 MAC addresses");
  break;

 case 136:
  FUNC_1(VAR_2, "'addr3' and 'address3' are not valid qualifiers for addresses other than 802.11 MAC addresses");
  break;

 case 135:
  FUNC_1(VAR_2, "'addr4' and 'address4' are not valid qualifiers for addresses other than 802.11 MAC addresses");
  break;

 case 130:
  FUNC_1(VAR_2, "'ra' is not a valid qualifier for addresses other than 802.11 MAC addresses");
  break;

 case 128:
  FUNC_1(VAR_2, "'ta' is not a valid qualifier for addresses other than 802.11 MAC addresses");
  break;

 default:
  FUNC_0();
 }
 VAR_9 = FUNC_3(VAR_2, VAR_6);
 VAR_10 = FUNC_4(VAR_2, VAR_1, VAR_11, VAR_0, (bpf_int32)VAR_3, VAR_4);
 FUNC_2(VAR_9, VAR_10);
 return VAR_10;
}
