
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ u_int ;
typedef int u_char ;
struct isakmp_gen {int dummy; } ;
struct isakmp {int flags; int len; int np; int etype; int i_ck; int r_ck; int msgid; } ;
struct TYPE_5__ {scalar_t__ ndo_vflag; int * ndo_snapend; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (struct isakmp const*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int,int const*) ;
 scalar_t__ FUNC_7 (int,int const*) ;
 int FUNC_8 (int *,int const*) ;
 int FUNC_9 (TYPE_1__*,int ,struct isakmp_gen const*,int const*,int,int ,int ,int ) ;
 scalar_t__ FUNC_10 (int const*,int) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static void
FUNC_12(netdissect_options *VAR_2,
     const u_char *VAR_3, u_int VAR_4,
     const u_char *VAR_5, struct isakmp *VAR_6)
{
 const struct isakmp *VAR_7;
 const u_char *VAR_8;
 u_char VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_7 = (const struct isakmp *)VAR_3;
 VAR_8 = VAR_2->ndo_snapend;

 VAR_11 = (FUNC_2(VAR_6->msgid) == 0) ? 1 : 2;
 if (VAR_11 == 1)
  FUNC_3((VAR_2," phase %d", VAR_11));
 else
  FUNC_3((VAR_2," phase %d/others", VAR_11));

 VAR_10 = FUNC_5(&VAR_6->i_ck);
 if (VAR_10 < 0) {
  if (FUNC_10((const u_char *)&VAR_6->r_ck, sizeof(VAR_6->r_ck))) {

   FUNC_3((VAR_2," I"));
   if (VAR_5)
    FUNC_8(&VAR_6->i_ck, VAR_5);
  } else
   FUNC_3((VAR_2," ?"));
 } else {
  if (VAR_5 && FUNC_6(VAR_10, VAR_5))
   FUNC_3((VAR_2," I"));
  else if (VAR_5 && FUNC_7(VAR_10, VAR_5))
   FUNC_3((VAR_2," R"));
  else
   FUNC_3((VAR_2," ?"));
 }

 FUNC_3((VAR_2," %s", FUNC_1(VAR_6->etype)));
 if (VAR_6->flags) {
  FUNC_3((VAR_2,"[%s%s]", VAR_6->flags & VAR_1 ? "E" : "",
     VAR_6->flags & VAR_0 ? "C" : ""));
 }

 if (VAR_2->ndo_vflag) {
  const struct isakmp_gen *VAR_12;

  FUNC_3((VAR_2,":"));


  if (VAR_6->flags & VAR_1) {




   FUNC_3((VAR_2," [encrypted %s]", FUNC_4(VAR_6->np)));
   goto done;
  }

  FUNC_0(VAR_7 + 1, VAR_6->np);
  VAR_9 = VAR_6->np;
  VAR_12 = (const struct isakmp_gen *)(VAR_7 + 1);
  FUNC_9(VAR_2, VAR_9, VAR_12, VAR_8, VAR_11, 0, 0, 0);
 }

done:
 if (VAR_2->ndo_vflag) {
  if (FUNC_11(VAR_6->len) != VAR_4) {
   FUNC_3((VAR_2," (len mismatch: isakmp %u/ip %u)",
      (uint32_t)FUNC_11(VAR_6->len), VAR_4));
  }
 }
}
