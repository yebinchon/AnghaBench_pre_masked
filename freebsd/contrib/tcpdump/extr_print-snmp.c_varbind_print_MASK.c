
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
typedef scalar_t__ u_int ;
typedef int u_char ;
struct TYPE_2__ {scalar_t__ raw; } ;
struct be {scalar_t__ type; scalar_t__ asnlen; TYPE_1__ data; } ;
typedef int netdissect_options ;
typedef int SmiNode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int const*,scalar_t__,struct be*) ;
 int FUNC_2 (int *,struct be*) ;
 int FUNC_3 (int *,int *,int ,struct be*) ;
 int * FUNC_4 (int *,struct be*,int*) ;

__attribute__((used)) static void
FUNC_5(netdissect_options *VAR_6,
              u_short VAR_7, const u_char *VAR_8, u_int VAR_9)
{
 struct be VAR_10;
 int VAR_11 = 0, VAR_12;



 int VAR_13;


 if ((VAR_11 = FUNC_1(VAR_6, VAR_8, VAR_9, &VAR_10)) < 0)
  return;
 if (VAR_10.type != VAR_2) {
  FUNC_0((VAR_6, "[!SEQ of varbind]"));
  FUNC_2(VAR_6, &VAR_10);
  return;
 }
 if ((u_int)VAR_11 < VAR_9)
  FUNC_0((VAR_6, "[%d extra after SEQ of varbind]", VAR_9 - VAR_11));

 VAR_9 = VAR_10.asnlen;
 VAR_8 = (const u_char *)VAR_10.data.raw;

 for (VAR_12 = 1; VAR_9 > 0; VAR_12++) {
  const u_char *VAR_14;
  u_int VAR_15;

  FUNC_0((VAR_6, " "));


  if ((VAR_11 = FUNC_1(VAR_6, VAR_8, VAR_9, &VAR_10)) < 0)
   return;
  if (VAR_10.type != VAR_2) {
   FUNC_0((VAR_6, "[!varbind]"));
   FUNC_2(VAR_6, &VAR_10);
   return;
  }
  VAR_14 = VAR_8 + VAR_11;
  VAR_15 = VAR_9 - VAR_11;

  VAR_9 = VAR_10.asnlen;
  VAR_8 = (const u_char *)VAR_10.data.raw;


  if ((VAR_11 = FUNC_1(VAR_6, VAR_8, VAR_9, &VAR_10)) < 0)
   return;
  if (VAR_10.type != VAR_1) {
   FUNC_0((VAR_6, "[objName!=OID]"));
   FUNC_2(VAR_6, &VAR_10);
   return;
  }



  VAR_13 = FUNC_2(VAR_6, &VAR_10);

  if (VAR_13 < 0)
   return;
  VAR_9 -= VAR_11;
  VAR_8 += VAR_11;

  if (VAR_7 != VAR_5 && VAR_7 != VAR_4
      && VAR_7 != VAR_3)
   FUNC_0((VAR_6, "="));


  if ((VAR_11 = FUNC_1(VAR_6, VAR_8, VAR_9, &VAR_10)) < 0)
   return;
  if (VAR_7 == VAR_5 || VAR_7 == VAR_4
      || VAR_7 == VAR_3) {
   if (VAR_10.type != VAR_0) {
    FUNC_0((VAR_6, "[objVal!=NULL]"));
    if (FUNC_2(VAR_6, &VAR_10) < 0)
     return;
   }
  } else {
          if (VAR_10.type != VAR_0) {



    VAR_13 = FUNC_2(VAR_6, &VAR_10);

   }
   if (VAR_13 < 0)
    return;
  }
  VAR_9 = VAR_15;
  VAR_8 = VAR_14;
 }
}
