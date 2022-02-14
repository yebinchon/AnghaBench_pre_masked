
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int u_int ;
typedef int u_char ;
struct TYPE_13__ {scalar_t__ ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int const,int const) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int const VAR_8 ;
 int const* FUNC_3 (TYPE_1__*,int const*,int const*,int) ;
 int FUNC_4 (TYPE_1__*,int ,scalar_t__,int ) ;
 int const* FUNC_5 (TYPE_1__*,int const*,int const*,int) ;
 int const* FUNC_6 (TYPE_1__*,int const*,int const*,int) ;
 int const* FUNC_7 (TYPE_1__*,int const*,int const*,int) ;
 int const* FUNC_8 (TYPE_1__*,int const*,int const*,int) ;
 int const* FUNC_9 (TYPE_1__*,int const*,int const*,int) ;
 int const* FUNC_10 (TYPE_1__*,int const*,int const*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_11 (int ,char*,scalar_t__) ;
 int VAR_11 ;

__attribute__((used)) static const u_char *
FUNC_12(netdissect_options *VAR_12,
                       const u_char *VAR_13, const u_char *VAR_14, const u_int VAR_15)
{
 const u_char *VAR_16 = VAR_13;
 uint16_t VAR_17;


 FUNC_2(*VAR_13, 2);
 VAR_17 = FUNC_0(VAR_13);
 FUNC_1((VAR_12, "\n\t type %s", FUNC_11(VAR_10, "invalid (0x%04x)", VAR_17)));
 VAR_13 += 2;

 FUNC_2(*VAR_13, 2);
 FUNC_1((VAR_12, ", flags 0x%04x", FUNC_0(VAR_13)));
 FUNC_4(VAR_12, VAR_9, FUNC_0(VAR_13), VAR_0);
 VAR_13 += 2;

 if (VAR_12->ndo_vflag > 0) {
  const u_char *(*VAR_18)(netdissect_options *, const u_char *, const u_char *, u_int) =
   VAR_17 == VAR_2 ? FUNC_5 :
   VAR_17 == VAR_3 ? FUNC_6 :
   VAR_17 == VAR_1 ? FUNC_3 :
   VAR_17 == VAR_6 ? FUNC_9 :
   VAR_17 == VAR_4 ? FUNC_7 :
   VAR_17 == VAR_5 ? FUNC_8 :
   VAR_17 == VAR_7 ? FUNC_10 :
   ((void*)0);
  if (VAR_18 != ((void*)0))
   return VAR_18(VAR_12, VAR_13, VAR_14, VAR_15 - VAR_8);
 }
 FUNC_2(*VAR_16, VAR_15);
 return VAR_16 + VAR_15;

trunc:
 FUNC_1((VAR_12, "%s", VAR_11));
 return VAR_14;
}
