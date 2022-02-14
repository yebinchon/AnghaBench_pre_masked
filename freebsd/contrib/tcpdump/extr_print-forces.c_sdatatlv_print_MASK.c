
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef scalar_t__ u_int ;
typedef int u_char ;
struct forces_tlv {int type; } ;
typedef int netdissect_options ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct forces_tlv const) ;
 scalar_t__ FUNC_3 (struct forces_tlv const*) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int *,int const*,scalar_t__,scalar_t__,int) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_5(netdissect_options *VAR_3,
               register const u_char * VAR_4, register u_int VAR_5,
               uint16_t VAR_6, int VAR_7)
{
 const struct forces_tlv *VAR_8 = (const struct forces_tlv *)VAR_4;
 u_int VAR_9;
 register const u_char *VAR_10 = (const u_char *) FUNC_3(VAR_8);
 uint16_t VAR_11;





 VAR_9 = VAR_5 - VAR_1;
 FUNC_2(*VAR_8);
 VAR_11 = FUNC_0(&VAR_8->type);
 if (VAR_11 != VAR_0) {
  FUNC_1((VAR_3, "Error: expecting SPARSEDATA!\n"));
  return -1;
 }

 return FUNC_4(VAR_3, VAR_10, VAR_9, VAR_6, VAR_7);

trunc:
 FUNC_1((VAR_3, "%s", VAR_2));
 return -1;
}
