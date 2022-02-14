
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int u_char ;
struct sflow_counter_record_t {int length; int format; } ;
struct TYPE_11__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct sflow_counter_record_t const) ;






 int FUNC_3 (TYPE_1__*,int const*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int const*,scalar_t__) ;
 int FUNC_5 (TYPE_1__*,int const*,scalar_t__) ;
 int FUNC_6 (TYPE_1__*,int const*,scalar_t__) ;
 int FUNC_7 (TYPE_1__*,int const*,scalar_t__) ;
 int FUNC_8 (TYPE_1__*,int const*,scalar_t__) ;
 int FUNC_9 (TYPE_1__*,int const*,char*,scalar_t__) ;
 int VAR_0 ;
 char* FUNC_10 (int ,char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_11(netdissect_options *VAR_1,
                            const u_char *VAR_2, u_int VAR_3, u_int VAR_4)
{
    u_int VAR_5;
    const u_char *VAR_6;
    u_int VAR_7;
    u_int VAR_8;
    u_int VAR_9;
    u_int VAR_10;
    const struct sflow_counter_record_t *VAR_11;

    VAR_5 = VAR_4;
    VAR_6 = VAR_2;
    VAR_7 = VAR_3;

    while (VAR_5 > 0) {

 if (VAR_7 < sizeof(struct sflow_counter_record_t))
     return 1;
 VAR_11 = (const struct sflow_counter_record_t *)VAR_6;
 FUNC_2(*VAR_11);

 VAR_10 = FUNC_0(VAR_11->format);
 VAR_8 = VAR_10 & 0x0FFF;
 VAR_10 = VAR_10 >> 20;
 VAR_9 = FUNC_0(VAR_11->length);
 FUNC_1((VAR_1, "\n\t    enterprise %u, %s (%u) length %u",
        VAR_10,
        (VAR_10 == 0) ? FUNC_10(VAR_0,"Unknown",VAR_8) : "Unknown",
        VAR_8,
        VAR_9));

 VAR_6 += sizeof(struct sflow_counter_record_t);
 VAR_7 -= sizeof(struct sflow_counter_record_t);

 if (VAR_7 < VAR_9)
     return 1;
 if (VAR_10 == 0) {
     switch (VAR_8) {
     case 131:
  if (FUNC_5(VAR_1, VAR_6, VAR_7))
      return 1;
  break;
     case 132:
  if (FUNC_4(VAR_1, VAR_6, VAR_7))
      return 1;
  break;
     case 129:
  if (FUNC_7(VAR_1, VAR_6,VAR_7))
      return 1;
  break;
     case 133:
  if (FUNC_3(VAR_1, VAR_6, VAR_7))
      return 1;
  break;
     case 128:
  if (FUNC_8(VAR_1, VAR_6, VAR_7))
      return 1;
  break;
     case 130:
  if (FUNC_6(VAR_1, VAR_6, VAR_7))
      return 1;
  break;
     default:
  if (VAR_1->ndo_vflag <= 1)
      FUNC_9(VAR_1, VAR_6, "\n\t\t", VAR_9);
  break;
     }
 }
 VAR_6 += VAR_9;
 VAR_7 -= VAR_9;
 VAR_5--;

    }

    return 0;

trunc:
    return 1;
}
