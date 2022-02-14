
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct tok {int dummy; } ;
struct m3ua_common_header {scalar_t__ v; scalar_t__ msg_class; scalar_t__ msg_type; int len; } ;
typedef int netdissect_options ;


 struct tok* VAR_0 ;
 struct tok* VAR_1 ;
 int const FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 struct tok const* VAR_9 ;
 struct tok* VAR_10 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct m3ua_common_header const) ;
 int FUNC_3 (int const,int const) ;
 struct tok* VAR_11 ;
 struct tok* VAR_12 ;
 struct tok* VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (int *,int const*,int const) ;
 int FUNC_5 (struct tok const*,char*,scalar_t__) ;
 int VAR_15 ;

void
FUNC_6(netdissect_options *VAR_16,
           const u_char *VAR_17, const u_int VAR_18)
{
  const struct m3ua_common_header *VAR_19 = (const struct m3ua_common_header *) VAR_17;
  const struct tok *VAR_20;


  if (VAR_18 < sizeof(struct m3ua_common_header))
    goto invalid;
  FUNC_2(*VAR_19);
  if (VAR_19->v != VAR_8)
    return;

  VAR_20 =
    VAR_19->msg_class == VAR_4 ? VAR_10 :
    VAR_19->msg_class == VAR_7 ? VAR_13 :
    VAR_19->msg_class == VAR_6 ? VAR_12 :
    VAR_19->msg_class == VAR_2 ? VAR_0 :
    VAR_19->msg_class == VAR_3 ? VAR_1 :
    VAR_19->msg_class == VAR_5 ? VAR_11 :
    ((void*)0);

  FUNC_1((VAR_16, "\n\t\t%s", FUNC_5(VAR_9, "Unknown message class %i", VAR_19->msg_class)));
  if (VAR_20 != ((void*)0))
    FUNC_1((VAR_16, " %s Message", FUNC_5(VAR_20, "Unknown (0x%02x)", VAR_19->msg_type)));

  if (VAR_18 != FUNC_0(&VAR_19->len))
    FUNC_1((VAR_16, "\n\t\t\t@@@@@@ Corrupted length %u of message @@@@@@", FUNC_0(&VAR_19->len)));
  else
    FUNC_4(VAR_16, VAR_17 + sizeof(struct m3ua_common_header), FUNC_0(&VAR_19->len) - sizeof(struct m3ua_common_header));
  return;

invalid:
  FUNC_1((VAR_16, "%s", VAR_14));
  FUNC_3(*VAR_17, VAR_18);
  return;
trunc:
  FUNC_1((VAR_16, "%s", VAR_15));
}
