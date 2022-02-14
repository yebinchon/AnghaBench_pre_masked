
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef scalar_t__ u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const,scalar_t__ const) ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 int VAR_4 ;

__attribute__((used)) static const u_char *
FUNC_4(netdissect_options *VAR_5,
                       const u_char *VAR_6, const u_char *VAR_7, u_int VAR_8)
{
 const u_char *VAR_9 = VAR_6;
 const u_int VAR_10 = VAR_8;
 uint16_t VAR_11, VAR_12, VAR_13;

 while (VAR_8) {
  u_char VAR_14 = 0, VAR_15 = 0;

  if (VAR_8 < VAR_0)
   goto invalid;

  FUNC_2(*VAR_6, 2);
  VAR_11 = FUNC_0(VAR_6);
  VAR_6 += 2;
  FUNC_1((VAR_5, "\n\t   property %s", FUNC_3(VAR_3, "invalid (0x%04x)", VAR_11)));

  FUNC_2(*VAR_6, 2);
  VAR_12 = FUNC_0(VAR_6);
  VAR_6 += 2;
  FUNC_1((VAR_5, ", len %u", VAR_12));
  if (VAR_12 < VAR_0 || VAR_12 > VAR_8)
   goto invalid;

  FUNC_2(*VAR_6, 4);
  VAR_6 += 4;

  switch (VAR_11) {
  case 128:
   VAR_14 = VAR_12 != VAR_0;
   break;
  case 129:
   VAR_14 = VAR_12 != VAR_1;
   break;
  default:
   VAR_15 = 1;
  }
  if (VAR_14) {
   FUNC_1((VAR_5, " (bogus)"));
   VAR_15 = 1;
  }
  if (VAR_15) {
   FUNC_2(*VAR_6, VAR_12 - 4);
   VAR_6 += VAR_12 - 4;
   goto next_property;
  }
  if (VAR_11 == 129) {

   FUNC_2(*VAR_6, 2);
   VAR_13 = FUNC_0(VAR_6);
   VAR_6 += 2;
   if (VAR_13 > 1000)
    FUNC_1((VAR_5, ", rate disabled"));
   else
    FUNC_1((VAR_5, ", rate %u.%u%%", VAR_13 / 10, VAR_13 % 10));

   FUNC_2(*VAR_6, 6);
   VAR_6 += 6;
  }
next_property:
  VAR_8 -= VAR_12;
 }
 return VAR_6;

invalid:
 FUNC_1((VAR_5, "%s", VAR_2));
 FUNC_2(*VAR_9, VAR_10);
 return VAR_9 + VAR_10;
trunc:
 FUNC_1((VAR_5, "%s", VAR_4));
 return VAR_7;
}
