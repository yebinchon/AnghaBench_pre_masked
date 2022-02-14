
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef scalar_t__ u_int ;
typedef int u_char ;
struct pdata_ops {scalar_t__ v; int (* print ) (TYPE_1__*,int const*,scalar_t__,scalar_t__,int) ;int op_msk; int s; } ;
struct forces_tlv {int length; int type; } ;
struct TYPE_7__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct forces_tlv const) ;
 int FUNC_5 (int const,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (TYPE_1__*,scalar_t__,scalar_t__,int ) ;
 struct pdata_ops* FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_1__*,char*,int const*,scalar_t__,int ) ;
 char* FUNC_9 (int,int ) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (TYPE_1__*,int const*,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_12 (struct forces_tlv const*,scalar_t__) ;
 int FUNC_13 (int ,int *,scalar_t__) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_14(netdissect_options *VAR_8,
               register const u_char * VAR_9, register u_int VAR_10,
               uint16_t VAR_11, uint16_t VAR_12, int VAR_13)
{
 u_int VAR_14;
 uint32_t VAR_15;
 char *VAR_16 = FUNC_9(VAR_13, 0);

 if ((VAR_12 & VAR_0) && VAR_8->ndo_vflag >= 3) {
  FUNC_3((VAR_8, "%sTABLE APPEND\n", VAR_16));
 }
 for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {
  FUNC_5(*VAR_9, 4);
  if (VAR_10 < 4)
   goto trunc;
  VAR_15 = FUNC_1(VAR_9);
  if (VAR_8->ndo_vflag >= 3)
   FUNC_3((VAR_8, "%sID#%02u: %d\n", VAR_16, VAR_14 + 1, VAR_15));
  VAR_10 -= 4;
  VAR_9 += 4;
 }

 if ((VAR_12 & VAR_2) || (VAR_12 & VAR_1)) {
  if (VAR_12 & VAR_2) {
   uint32_t VAR_17, VAR_18;

   if (VAR_10 < VAR_5) {
    FUNC_3((VAR_8, "pathlength %d with key/range too short %d\n",
           VAR_10, VAR_5));
    return -1;
   }

   VAR_9 += sizeof(struct forces_tlv);
   VAR_10 -= sizeof(struct forces_tlv);

   VAR_17 = FUNC_1(VAR_9);
   VAR_9 += 4;
   VAR_10 -= 4;

   VAR_18 = FUNC_1(VAR_9);
   VAR_9 += 4;
   VAR_10 -= 4;

   if (VAR_8->ndo_vflag >= 3)
    FUNC_3((VAR_8, "%sTable range: [%d,%d]\n", VAR_16, VAR_17, VAR_18));
  }

  if (VAR_12 & VAR_1) {
   const struct forces_tlv *VAR_19;
   uint16_t VAR_20;

   if (VAR_10 < VAR_5) {
    FUNC_3((VAR_8, "pathlength %d with key/range too short %d\n",
           VAR_10, VAR_5));
    return -1;
   }


   VAR_9 += 4;
   VAR_10 -= 4;
   VAR_19 = (const struct forces_tlv *)VAR_9;

   VAR_9 += sizeof(struct forces_tlv);
   VAR_10 -= sizeof(struct forces_tlv);

   VAR_20 = FUNC_0(&VAR_19->length);
   if (VAR_20 < VAR_6) {
    FUNC_3((VAR_8, "key content length %u < %u\n",
     VAR_20, VAR_6));
    return -1;
   }
   VAR_20 -= VAR_6;
   if (VAR_10 < VAR_20) {
    FUNC_3((VAR_8, "key content too short\n"));
    return -1;
   }
   VAR_9 += VAR_20;
   VAR_10 -= VAR_20;
  }

 }

 if (VAR_10) {
  const struct forces_tlv *VAR_21 = (const struct forces_tlv *)VAR_9;
  uint16_t VAR_22;
  uint16_t VAR_23;
  int VAR_24 = 0;
  u_int VAR_25;
  u_int VAR_26;

  FUNC_4(*VAR_21);
  VAR_22 = FUNC_0(&VAR_21->type);
  VAR_26 = FUNC_12(VAR_21, VAR_10);
  if (VAR_26) {
   FUNC_3((VAR_8, "%s Outstanding bytes %d for TLV type 0x%x TLV len %d\n",
             FUNC_13(VAR_4, ((void*)0), VAR_26), VAR_10, VAR_22,
             FUNC_0(&VAR_21->length)));
   goto pd_err;
  }





  VAR_23 = FUNC_0(&VAR_21->length) - VAR_6;
  VAR_25 = FUNC_2(FUNC_0(&VAR_21->length));
  if (VAR_25 > FUNC_0(&VAR_21->length)) {
   if (VAR_25 > VAR_10) {
    FUNC_3((VAR_8,
              "Invalid padded pathdata TLV type 0x%x len %d missing %d pad bytes\n",
              VAR_22, FUNC_0(&VAR_21->length), VAR_25 - VAR_10));
   } else {
    VAR_24 = VAR_25 - FUNC_0(&VAR_21->length);
   }
  }
  if (FUNC_10(VAR_22)) {
   const struct pdata_ops *VAR_27 = FUNC_7(VAR_22);

   if (VAR_8->ndo_vflag >= 3 && VAR_27->v != VAR_3) {
    if (VAR_24)
     FUNC_3((VAR_8, "%s  %s (Length %d DataLen %d pad %d Bytes)\n",
               VAR_16, VAR_27->s, FUNC_0(&VAR_21->length), VAR_23, VAR_24));
    else
     FUNC_3((VAR_8, "%s  %s (Length %d DataLen %d Bytes)\n",
               VAR_16, VAR_27->s, FUNC_0(&VAR_21->length), VAR_23));
   }

   FUNC_6(VAR_8, VAR_22, VAR_12, VAR_27->op_msk);

   if (VAR_27->print(VAR_8, (const u_char *)VAR_21,
     VAR_23 + VAR_24 + VAR_6, VAR_12,
     VAR_13 + 2) == -1)
    return -1;
   VAR_10 -= (VAR_6 + VAR_24 + VAR_23);
  } else {
   FUNC_3((VAR_8, "Invalid path data content type 0x%x len %d\n",
          VAR_22, FUNC_0(&VAR_21->length)));
pd_err:
   if (FUNC_0(&VAR_21->length)) {
                                FUNC_8(VAR_8, "Bad Data val\n\t  [",
            VAR_9, VAR_10, 0);
    FUNC_3((VAR_8, "]\n"));

    return -1;
   }
  }
 }
 return VAR_10;

trunc:
 FUNC_3((VAR_8, "%s", VAR_7));
 return -1;
}
