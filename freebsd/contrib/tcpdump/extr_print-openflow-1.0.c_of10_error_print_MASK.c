
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef scalar_t__ u_int ;
typedef int u_char ;
struct tok {int dummy; } ;
typedef int netdissect_options ;


 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ const VAR_6 ;
 struct tok* VAR_7 ;
 int const* FUNC_3 (int *,int const*,int const*,scalar_t__ const) ;
 struct tok* VAR_8 ;
 struct tok* VAR_9 ;
 struct tok const* VAR_10 ;
 struct tok* VAR_11 ;
 struct tok* VAR_12 ;
 struct tok* VAR_13 ;
 struct tok* VAR_14 ;
 int FUNC_4 (struct tok const*,char*,scalar_t__) ;
 int VAR_15 ;

__attribute__((used)) static const u_char *
FUNC_5(netdissect_options *VAR_16,
                 const u_char *VAR_17, const u_char *VAR_18, const u_int VAR_19)
{
 uint16_t VAR_20;
 const struct tok *VAR_21;


 FUNC_2(*VAR_17, 2);
 VAR_20 = FUNC_0(VAR_17);
 VAR_17 += 2;
 FUNC_1((VAR_16, "\n\t type %s", FUNC_4(VAR_10, "invalid (0x%04x)", VAR_20)));

 FUNC_2(*VAR_17, 2);
 VAR_21 =
  VAR_20 == VAR_3 ? VAR_12 :
  VAR_20 == VAR_1 ? VAR_9 :
  VAR_20 == VAR_0 ? VAR_8 :
  VAR_20 == VAR_2 ? VAR_11 :
  VAR_20 == VAR_4 ? VAR_13 :
  VAR_20 == VAR_5 ? VAR_14 :
  VAR_7;
 FUNC_1((VAR_16, ", code %s", FUNC_4(VAR_21, "invalid (0x%04x)", FUNC_0(VAR_17))));
 VAR_17 += 2;

 return FUNC_3(VAR_16, VAR_17, VAR_18, VAR_19 - VAR_6);

trunc:
 FUNC_1((VAR_16, "%s", VAR_15));
 return VAR_18;
}
