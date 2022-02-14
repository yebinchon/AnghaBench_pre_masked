
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef size_t u_int ;
typedef scalar_t__ u_char ;
struct TYPE_14__ {scalar_t__ const* ndo_snapend; int ndo_xflag; scalar_t__ ndo_eflag; int ndo_suppress_default_print; } ;
typedef TYPE_1__ netdissect_options ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__ const*) ;
 scalar_t__ const VAR_1 ;
 int FUNC_1 (scalar_t__ const*,size_t) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__ const) ;
 int FUNC_4 (scalar_t__ const,int) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int,scalar_t__ const*,size_t,int,int *,int *) ;
 int FUNC_6 (TYPE_1__*,size_t,size_t,size_t,int *,int) ;
 int FUNC_7 (TYPE_1__*,scalar_t__ const*,size_t) ;
 int FUNC_8 (TYPE_1__*,scalar_t__ const*,size_t) ;
 int FUNC_9 (TYPE_1__*,scalar_t__ const*,size_t) ;
 int FUNC_10 (TYPE_1__*,scalar_t__ const*,size_t) ;
 int FUNC_11 (TYPE_1__*,scalar_t__ const*,size_t*,size_t*,int *,size_t) ;
 int FUNC_12 (TYPE_1__*,scalar_t__ const*,size_t) ;
 int FUNC_13 (TYPE_1__*,scalar_t__ const*,size_t) ;
 int FUNC_14 (TYPE_1__*,scalar_t__ const*,size_t,int,int *,int *,int ) ;

u_int
FUNC_15(netdissect_options *VAR_2,
         register const u_char *VAR_3, u_int VAR_4)
{
 int VAR_5;
 uint16_t VAR_6;
 u_int VAR_7;
 u_int VAR_8;
 uint16_t VAR_9;
 u_int VAR_10;
 uint8_t VAR_11[4];

 VAR_5 = FUNC_11(VAR_2, VAR_3, &VAR_7, &VAR_8, VAR_11, VAR_4);
 if (VAR_5 == -1)
  goto trunc;
 if (VAR_5 == 0) {
  FUNC_2((VAR_2, "Q.922, invalid address"));
  return 0;
 }

 FUNC_3(VAR_3[VAR_8]);
 if (VAR_4 < VAR_8 + 1)
  goto trunc;

 if (VAR_3[VAR_8] != VAR_1 && VAR_7 != 0) {





  if (!FUNC_4(VAR_3[VAR_8], 2) || VAR_4 < VAR_8 + 2) {

                        FUNC_2((VAR_2, "UI %02x! ", VAR_3[VAR_8]));
                } else {
                        VAR_6 = FUNC_0(VAR_3+VAR_8);

                        if (VAR_2->ndo_eflag)
                                FUNC_6(VAR_2, VAR_4, VAR_8, VAR_7,
                                    VAR_11, VAR_6);

                        if (FUNC_5(VAR_2, VAR_6,
                                            VAR_3+VAR_8+VAR_0,
                                            VAR_4-VAR_8-VAR_0,
                                            VAR_2->ndo_snapend-VAR_3-VAR_8-VAR_0,
                                            ((void*)0), ((void*)0)) == 0)

                                FUNC_2((VAR_2, "UI %02x! ", VAR_3[VAR_8]));
                        else
                                return VAR_8 + 2;
                }
        }

 FUNC_3(VAR_3[VAR_8+1]);
 if (VAR_4 < VAR_8 + 2)
  goto trunc;

 if (VAR_3[VAR_8 + 1] == 0) {




  if (VAR_8 != 3)
   FUNC_2((VAR_2, "Pad! "));
  VAR_10 = VAR_8 + 1 + 1 + 1 ;
 } else {




  if (VAR_8 == 3)
   FUNC_2((VAR_2, "No pad! "));
  VAR_10 = VAR_8 + 1 + 1 ;
 }

        FUNC_3(VAR_3[VAR_10 - 1]);
 if (VAR_4 < VAR_10)
  goto trunc;
 VAR_9 = VAR_3[VAR_10 - 1];

 if (VAR_2->ndo_eflag)
  FUNC_6(VAR_2, VAR_4, VAR_8, VAR_7, VAR_11, VAR_9);
 VAR_3 += VAR_10;
 VAR_4 -= VAR_10;

 switch (VAR_9) {
 case 134:
         FUNC_9(VAR_2, VAR_3, VAR_4);
  break;

 case 133:
  FUNC_8(VAR_2, VAR_3, VAR_4);
  break;

 case 136:
 case 135:
 case 132:
  FUNC_10(VAR_2, VAR_3 - 1, VAR_4 + 1);
  break;

 case 128:
  if (FUNC_14(VAR_2, VAR_3, VAR_4, VAR_2->ndo_snapend - VAR_3, ((void*)0), ((void*)0), 0) == 0) {

                        if (!VAR_2->ndo_eflag)
                            FUNC_6(VAR_2, VAR_4 + VAR_10, VAR_10,
                                         VAR_7, VAR_11, VAR_9);
   if (!VAR_2->ndo_suppress_default_print)
    FUNC_1(VAR_3 - VAR_10, VAR_4 + VAR_10);
  }
  break;

        case 129:
  FUNC_13(VAR_2, VAR_3, VAR_4);
  break;

        case 131:
                FUNC_7(VAR_2, VAR_3, VAR_4);
                break;

        case 130:
                FUNC_12(VAR_2, VAR_3, VAR_4);
                break;

 default:
  if (!VAR_2->ndo_eflag)
                    FUNC_6(VAR_2, VAR_4 + VAR_10, VAR_8,
         VAR_7, VAR_11, VAR_9);
  if (!VAR_2->ndo_xflag)
   FUNC_1(VAR_3, VAR_4);
 }

 return VAR_10;

 trunc:
        FUNC_2((VAR_2, "[|fr]"));
        return 0;

}
