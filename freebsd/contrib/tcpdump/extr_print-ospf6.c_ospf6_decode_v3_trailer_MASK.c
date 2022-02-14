
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_char ;
struct ospf6hdr {scalar_t__ ospf6_type; } ;
struct hello6 {int hello_options; } ;
struct dd6 {int db_options; } ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,int const*,unsigned int const) ;
 int FUNC_3 (int *,int const*,unsigned int const) ;

__attribute__((used)) static int
FUNC_4(netdissect_options *VAR_4,
                        const struct ospf6hdr *VAR_5, const u_char *VAR_6, const unsigned VAR_7)
{
 int VAR_8 = 0;
 int VAR_9 = 0;
 int VAR_10 = 0;

 if (VAR_5->ospf6_type == VAR_3) {
  const struct hello6 *VAR_11 = (const struct hello6 *)((const uint8_t *)VAR_5 + VAR_0);
  FUNC_1(VAR_11->hello_options);
  if (FUNC_0(&VAR_11->hello_options) & VAR_1)
   VAR_9 = 1;
 } else if (VAR_5->ospf6_type == VAR_2) {
  const struct dd6 *VAR_12 = (const struct dd6 *)((const uint8_t *)VAR_5 + VAR_0);
  FUNC_1(VAR_12->db_options);
  if (FUNC_0(&VAR_12->db_options) & VAR_1)
   VAR_10 = 1;
 }
 if ((VAR_9 || VAR_10) && (VAR_8 = FUNC_3(VAR_4, VAR_6, VAR_7)) < 0)
  goto trunc;
 return FUNC_2(VAR_4, VAR_6 + VAR_8, VAR_7 - VAR_8);

trunc:
 return 1;
}
