
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u_int ;
typedef int u_char ;
struct pathdata_h {int pIDcnt; int pflags; } ;
struct TYPE_7__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct pathdata_h const) ;
 int FUNC_3 (TYPE_1__*,char*,int const*,int,int ) ;
 char* FUNC_4 (int,int ) ;
 int FUNC_5 (TYPE_1__*,int const*,int,int,int,int) ;
 int FUNC_6 (TYPE_1__*,int const*,int,int,int) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_7(netdissect_options *VAR_7,
            register const u_char * VAR_8, register u_int VAR_9,
            uint16_t VAR_10, int VAR_11)
{
 const struct pathdata_h *VAR_12 = (const struct pathdata_h *)VAR_8;
 char *VAR_13 = FUNC_4(VAR_11, 0);
 u_int VAR_14 = 0;
 int VAR_15 = 0;
 uint16_t VAR_16 = 0;

 FUNC_2(*VAR_12);
 if (VAR_9 < sizeof(struct pathdata_h))
  goto trunc;
 if (VAR_7->ndo_vflag >= 3) {
  FUNC_1((VAR_7, "\n%sPathdata: Flags 0x%x ID count %d\n",
         VAR_13, FUNC_0(&VAR_12->pflags), FUNC_0(&VAR_12->pIDcnt)));
 }

 if (FUNC_0(&VAR_12->pflags) & VAR_3) {
  VAR_10 |= VAR_1;
 }


 if (FUNC_0(&VAR_12->pflags) & VAR_4) {
  VAR_10 |= VAR_2;
 }

 if (FUNC_0(&VAR_12->pflags) & VAR_5) {
  VAR_10 |= VAR_0;
 }

 VAR_8 += sizeof(struct pathdata_h);
 VAR_9 -= sizeof(struct pathdata_h);
 VAR_16 = FUNC_0(&VAR_12->pIDcnt);
 VAR_14 = VAR_16 * 4;
 if (VAR_9 < VAR_14) {
  FUNC_1((VAR_7, "\t\t\ttruncated IDs expected %uB got %uB\n", VAR_14,
         VAR_9));
  FUNC_3(VAR_7, "\t\t\tID Data[", VAR_8, VAR_9, 0);
  FUNC_1((VAR_7, "]\n"));
  return -1;
 }

 if ((VAR_10 & VAR_2) && (VAR_10 & VAR_1)) {
  FUNC_1((VAR_7, "\t\t\tIllegal to have both Table ranges and keys\n"));
  return -1;
 }

 VAR_15 = FUNC_5(VAR_7, VAR_8, VAR_9, VAR_16, VAR_10, VAR_11);
 if (VAR_15 > 0) {
  int VAR_17 = VAR_9 - VAR_15;
  VAR_8 += VAR_17;
  VAR_9 = VAR_15;

  return FUNC_6(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11+1);
 } else
  return 0;

trunc:
 FUNC_1((VAR_7, "%s", VAR_6));
 return -1;
}
