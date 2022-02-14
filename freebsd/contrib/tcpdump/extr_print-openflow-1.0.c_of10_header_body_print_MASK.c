
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int u_int ;
typedef int u_char ;
struct TYPE_17__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int const FUNC_0 (int const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int const,int const) ;
 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int VAR_4 ;
 int const VAR_5 ;
 int VAR_6 ;
 int const VAR_7 ;
 int const VAR_8 ;
 int const VAR_9 ;
 int const VAR_10 ;
 int const VAR_11 ;
 int const VAR_12 ;
 int const VAR_13 ;
 int const VAR_14 ;
 int const VAR_15 ;
 int VAR_16 ;
 int const* FUNC_3 (TYPE_1__*,int const*,int const*,int const) ;
 int const* FUNC_4 (TYPE_1__*,int const*,int const*,int const) ;
 int const* FUNC_5 (TYPE_1__*,int const*,int const*,int const) ;
 int const* FUNC_6 (TYPE_1__*,int const*,int const*,int const) ;
 int const* FUNC_7 (TYPE_1__*,int const*,int const*) ;
 int const* FUNC_8 (TYPE_1__*,int const*,int const*,int const) ;
 int const* FUNC_9 (TYPE_1__*,int const*,int const*,int const) ;
 int const* FUNC_10 (TYPE_1__*,int const*,int const*,int ) ;
 int const* FUNC_11 (TYPE_1__*,int const*,int const*) ;
 int const* FUNC_12 (TYPE_1__*,int const*,int const*,int const) ;
 int const* FUNC_13 (TYPE_1__*,int const*,int const*,int const) ;
 int const* FUNC_14 (TYPE_1__*,int const*,int const*,int const) ;
 int const* FUNC_15 (TYPE_1__*,int const*,int const*,int const) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_16 (int ,char*,int const) ;
 int VAR_21 ;

const u_char *
FUNC_17(netdissect_options *VAR_22,
                       const u_char *VAR_23, const u_char *VAR_24, const uint8_t VAR_25,
                       const uint16_t VAR_26, const uint32_t VAR_27)
{
 const u_char *VAR_28 = VAR_23;
 const u_int VAR_29 = VAR_26;
 FUNC_1((VAR_22, "\n\tversion 1.0, type %s, length %u, xid 0x%08x",
        FUNC_16(VAR_20, "invalid (0x%02x)", VAR_25), VAR_26, VAR_27));
 switch (VAR_25) {

 case 143:
 case 139:
 case 148:
 case 149:
  if (VAR_26 != VAR_3)
   goto invalid;
  break;


 case 131:
 case 140:
  if (VAR_26 != VAR_13)
   goto invalid;
  if (VAR_22->ndo_vflag < 1)
   goto next_message;

  FUNC_2(*VAR_23, 2);
  FUNC_1((VAR_22, "\n\t flags %s", FUNC_16(VAR_17, "invalid (0x%04x)", FUNC_0(VAR_23))));
  VAR_23 += 2;

  FUNC_2(*VAR_23, 2);
  FUNC_1((VAR_22, ", miss_send_len %u", FUNC_0(VAR_23)));
  return VAR_23 + 2;
 case 135:
  if (VAR_26 != VAR_7)
   goto invalid;
  if (VAR_22->ndo_vflag < 1)
   goto next_message;
  return FUNC_11(VAR_22, VAR_23, VAR_24);
 case 132:
  if (VAR_26 != VAR_10)
   goto invalid;
  if (VAR_22->ndo_vflag < 1)
   goto next_message;

  FUNC_2(*VAR_23, 2);
  FUNC_1((VAR_22, "\n\t port_no %s", FUNC_16(VAR_18, "%u", FUNC_0(VAR_23))));
  VAR_23 += 2;

  FUNC_2(*VAR_23, 2);
  return VAR_23 + 2;
 case 141:
  if (VAR_26 != VAR_2)
   goto invalid;
  if (VAR_22->ndo_vflag < 1)
   goto next_message;
  return FUNC_7(VAR_22, VAR_23, VAR_24);
 case 134:
  if (VAR_26 != VAR_8)
   goto invalid;
  if (VAR_22->ndo_vflag < 1)
   goto next_message;

  FUNC_2(*VAR_23, 1);
  FUNC_1((VAR_22, "\n\t reason %s", FUNC_16(VAR_19, "invalid (0x%02x)", *VAR_23)));
  VAR_23 += 1;

  FUNC_2(*VAR_23, 7);
  VAR_23 += 7;

  return FUNC_10(VAR_22, VAR_23, VAR_24, VAR_6);


 case 144:
  if (VAR_26 < VAR_14)
   goto invalid;
  if (VAR_22->ndo_vflag < 1)
   goto next_message;
  return FUNC_5(VAR_22, VAR_23, VAR_24, VAR_26);


 case 138:
 case 146:
 case 147:
  if (VAR_22->ndo_vflag < 1)
   goto next_message;
  return FUNC_3(VAR_22, VAR_23, VAR_24, VAR_26 - VAR_3);


 case 145:
  if (VAR_26 < VAR_0)
   goto invalid;
  if (VAR_22->ndo_vflag < 1)
   goto next_message;
  return FUNC_4(VAR_22, VAR_23, VAR_24, VAR_26);
 case 128:

  if (VAR_26 < VAR_15)
   goto invalid;
  if (VAR_22->ndo_vflag < 1)
   goto next_message;
  return FUNC_15(VAR_22, VAR_23, VAR_24, VAR_26 - VAR_3);
 case 137:

  if (VAR_26 < VAR_4 - 2)
   goto invalid;
  if (VAR_22->ndo_vflag < 1)
   goto next_message;
  return FUNC_8(VAR_22, VAR_23, VAR_24, VAR_26);




 case 129:
  if (VAR_26 < VAR_12)
   goto invalid;
  if (VAR_22->ndo_vflag < 1)
   goto next_message;
  return FUNC_14(VAR_22, VAR_23, VAR_24, VAR_26);





 case 130:
  if (VAR_26 < VAR_11)
   goto invalid;
  if (VAR_22->ndo_vflag < 1)
   goto next_message;
  return FUNC_13(VAR_22, VAR_23, VAR_24, VAR_26);


 case 136:
  if (VAR_26 < VAR_5)
   goto invalid;
  if (VAR_22->ndo_vflag < 1)
   goto next_message;
  return FUNC_9(VAR_22, VAR_23, VAR_24, VAR_26);


 case 142:
  if (VAR_26 < VAR_1)
   goto invalid;
  if (VAR_22->ndo_vflag < 1)
   goto next_message;
  return FUNC_6(VAR_22, VAR_23, VAR_24, VAR_26);


 case 133:
  if (VAR_26 < VAR_9)
   goto invalid;
  if (VAR_22->ndo_vflag < 1)
   goto next_message;

  FUNC_2(*VAR_23, 2);
  FUNC_1((VAR_22, "\n\t port_no %s", FUNC_16(VAR_18, "%u", FUNC_0(VAR_23))));
  VAR_23 += 2;

  FUNC_2(*VAR_23, 6);
  VAR_23 += 6;

  return FUNC_12(VAR_22, VAR_23, VAR_24, VAR_26 - VAR_9);
 }
 goto next_message;

invalid:
 FUNC_1((VAR_22, "%s", VAR_16));
next_message:
 FUNC_2(*VAR_28, VAR_29 - VAR_3);
 return VAR_28 + VAR_29 - VAR_3;
trunc:
 FUNC_1((VAR_22, "%s", VAR_21));
 return VAR_24;
}
