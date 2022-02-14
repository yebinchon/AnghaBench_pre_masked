
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef scalar_t__ u_int ;
struct forces_tlv {int length; int type; } ;
typedef struct forces_tlv u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct forces_tlv const*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct forces_tlv const) ;
 scalar_t__ FUNC_4 (struct forces_tlv const*) ;
 int FUNC_5 (int *,struct forces_tlv const*,int ,int ,int) ;
 char* FUNC_6 (int,int ) ;
 scalar_t__ FUNC_7 (struct forces_tlv const*,scalar_t__) ;
 int FUNC_8 (int ,int *,scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_9(netdissect_options *VAR_2,
               register const u_char * VAR_3, register u_int VAR_4,
               uint16_t VAR_5, int VAR_6)
{
 const struct forces_tlv *VAR_7 = (const struct forces_tlv *)VAR_3;
 register const u_char *VAR_8 = (const u_char *) FUNC_4(VAR_7);
 register const u_char *VAR_9 = VAR_8 + 4;
 const struct forces_tlv *VAR_10 = (const struct forces_tlv *)VAR_9;
 uint32_t VAR_11;
 char *VAR_12 = FUNC_6(VAR_6, 0);
 uint16_t VAR_13, VAR_14;
 u_int VAR_15;

 FUNC_3(*VAR_8);
 VAR_11 = FUNC_1(VAR_8);
 FUNC_2((VAR_2, "%sKeyinfo: Key 0x%x\n", VAR_12, VAR_11));
 FUNC_3(*VAR_10);
 VAR_13 = FUNC_0(&VAR_10->type);
 VAR_15 = FUNC_7(VAR_10, VAR_4);

 if (VAR_15) {
  FUNC_2((VAR_2, "%s TLV type 0x%x len %d\n",
         FUNC_8(VAR_0, ((void*)0), VAR_15), VAR_13,
         FUNC_0(&VAR_10->length)));
  return -1;
 }





 VAR_14 = FUNC_0(&VAR_10->length);
 VAR_9 = (const u_char *) FUNC_4(VAR_10);
 return FUNC_5(VAR_2, VAR_9, VAR_14, VAR_5, VAR_6);

trunc:
 FUNC_2((VAR_2, "%s", VAR_1));
 return -1;
}
