
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef scalar_t__ u_int ;
typedef int u_char ;
struct forces_tlv {int length; int type; } ;
struct TYPE_5__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 struct forces_tlv* FUNC_1 (struct forces_tlv const*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct forces_tlv const) ;
 scalar_t__ FUNC_4 (struct forces_tlv const*) ;
 scalar_t__ VAR_1 ;
 char* FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_1__*,int const*,int,scalar_t__,int) ;
 scalar_t__ FUNC_7 (struct forces_tlv const*,scalar_t__) ;
 int FUNC_8 (int ,int *,scalar_t__) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_9(netdissect_options *VAR_3,
                 register const u_char * VAR_4, register u_int VAR_5,
                 uint16_t VAR_6, int VAR_7)
{
 const struct forces_tlv *VAR_8 = (const struct forces_tlv *)VAR_4;
 int VAR_9;
 u_int VAR_10;
 uint16_t VAR_11;
 register const u_char *VAR_12;
 char *VAR_13;

 while (VAR_5 != 0) {
  FUNC_3(*VAR_8);
  VAR_10 = FUNC_7(VAR_8, VAR_5);
  if (VAR_10) {
   break;
  }






  VAR_13 = FUNC_5(VAR_7, 0);
  VAR_11 = FUNC_0(&VAR_8->type);
  VAR_12 = (const u_char *) FUNC_4(VAR_8);
  VAR_9 = FUNC_0(&VAR_8->length) - VAR_1;

  if (VAR_3->ndo_vflag >= 3)
   FUNC_2((VAR_3, "%s%s, length %d (data encapsulated %d Bytes)",
             VAR_13, FUNC_8(VAR_0, ((void*)0), VAR_11),
             FUNC_0(&VAR_8->length),
             FUNC_0(&VAR_8->length) - VAR_1));

  if (FUNC_6(VAR_3, VAR_12, VAR_9, VAR_6, VAR_7 + 1) == -1)
   return -1;
  VAR_8 = FUNC_1(VAR_8, VAR_5);
 }

 if (VAR_5) {
  FUNC_2((VAR_3,
            "\n\t\tMessy PATHDATA TLV header, type (0x%x)\n\t\texcess of %d Bytes ",
            FUNC_0(&VAR_8->type), VAR_5 - FUNC_0(&VAR_8->length)));
  return -1;
 }

 return 0;

trunc:
 FUNC_2((VAR_3, "%s", VAR_2));
 return -1;
}
