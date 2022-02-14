
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int u_char ;
struct TYPE_7__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 scalar_t__ const VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int const,scalar_t__ const) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (TYPE_1__*,int const*) ;
 int FUNC_5 (TYPE_1__*,int const*,int const*) ;
 int VAR_6 ;
 int FUNC_6 (TYPE_1__*,int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int ,char*,int ) ;
 int VAR_11 ;

__attribute__((used)) static const u_char *
FUNC_8(netdissect_options *VAR_12,
                     const u_char *VAR_13, const u_char *VAR_14, u_int VAR_15)
{
 const u_char *VAR_16 = VAR_13;
 const u_int VAR_17 = VAR_15;

 while (VAR_15) {
  if (VAR_15 < VAR_5)
   goto invalid;

  FUNC_3(*VAR_13, 2);
  FUNC_2((VAR_12, "\n\t  port_no %s", FUNC_7(VAR_7, "%u", FUNC_0(VAR_13))));
  VAR_13 += 2;

  FUNC_3(*VAR_13, VAR_0);
  FUNC_2((VAR_12, ", hw_addr %s", FUNC_4(VAR_12, VAR_13)));
  VAR_13 += VAR_0;

  FUNC_3(*VAR_13, VAR_4);
  FUNC_2((VAR_12, ", name '"));
  FUNC_5(VAR_12, VAR_13, VAR_13 + VAR_4);
  FUNC_2((VAR_12, "'"));
  VAR_13 += VAR_4;

  if (VAR_12->ndo_vflag < 2) {
   FUNC_3(*VAR_13, 24);
   VAR_13 += 24;
   goto next_port;
  }

  FUNC_3(*VAR_13, 4);
  FUNC_2((VAR_12, "\n\t   config 0x%08x", FUNC_1(VAR_13)));
  FUNC_6(VAR_12, VAR_8, FUNC_1(VAR_13), VAR_1);
  VAR_13 += 4;

  FUNC_3(*VAR_13, 4);
  FUNC_2((VAR_12, "\n\t   state 0x%08x", FUNC_1(VAR_13)));
  FUNC_6(VAR_12, VAR_10, FUNC_1(VAR_13), VAR_3);
  VAR_13 += 4;

  FUNC_3(*VAR_13, 4);
  FUNC_2((VAR_12, "\n\t   curr 0x%08x", FUNC_1(VAR_13)));
  FUNC_6(VAR_12, VAR_9, FUNC_1(VAR_13), VAR_2);
  VAR_13 += 4;

  FUNC_3(*VAR_13, 4);
  FUNC_2((VAR_12, "\n\t   advertised 0x%08x", FUNC_1(VAR_13)));
  FUNC_6(VAR_12, VAR_9, FUNC_1(VAR_13), VAR_2);
  VAR_13 += 4;

  FUNC_3(*VAR_13, 4);
  FUNC_2((VAR_12, "\n\t   supported 0x%08x", FUNC_1(VAR_13)));
  FUNC_6(VAR_12, VAR_9, FUNC_1(VAR_13), VAR_2);
  VAR_13 += 4;

  FUNC_3(*VAR_13, 4);
  FUNC_2((VAR_12, "\n\t   peer 0x%08x", FUNC_1(VAR_13)));
  FUNC_6(VAR_12, VAR_9, FUNC_1(VAR_13), VAR_2);
  VAR_13 += 4;
next_port:
  VAR_15 -= VAR_5;
 }
 return VAR_13;

invalid:
 FUNC_2((VAR_12, "%s", VAR_6));
 FUNC_3(*VAR_16, VAR_17);
 return VAR_16 + VAR_17;
trunc:
 FUNC_2((VAR_12, "%s", VAR_11));
 return VAR_14;
}
