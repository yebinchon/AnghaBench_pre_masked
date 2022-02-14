
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
struct ibdiag_opt {char* member_0; char member_1; int member_2; char* member_3; char* member_4; } ;
struct TYPE_5__ {int grh_present; int gid; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 int VAR_7 ;
 int FUNC_4 (int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (int,char**,int *,char*,struct ibdiag_opt const*,int ,char*,int *) ;
 int FUNC_6 () ;
 unsigned long long FUNC_7 (TYPE_1__*,int ) ;
 char* FUNC_8 () ;
 int VAR_13 ;
 scalar_t__ FUNC_9 (int,int ,int ) ;
 scalar_t__ FUNC_10 (int,int ,int ,int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int*,int) ;
 unsigned long long VAR_14 ;
 int FUNC_13 (int *,int *,int) ;
 unsigned long long VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 TYPE_1__ VAR_19 ;
 int FUNC_14 (TYPE_1__*) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ,int ,TYPE_1__*,char*,scalar_t__,int ,int ) ;
 scalar_t__ VAR_22 ;
 int FUNC_17 (int ,int (*) (int )) ;
 int FUNC_18 (int) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;

int FUNC_19(int VAR_27, char **VAR_28)
{
 int VAR_29[1] = { VAR_1 };
 int VAR_30 = VAR_2;
 uint64_t VAR_31;
 char *VAR_32;

 const struct ibdiag_opt VAR_33[] = {
  {"count", 'c', 1, "<num>", "stop after count packets"},
  {"flood", 'f', 0, ((void*)0), "flood destination"},
  {"oui", 'o', 1, ((void*)0), "use specified OUI number"},
  {"Server", 'S', 0, ((void*)0), "start in server mode"},
  {"dgid", 25, 1, ((void*)0), "remote gid (IPv6 format)"},
  {0}
 };
 char VAR_34[] = "<dest lid|guid>";

 FUNC_5(VAR_27, VAR_28, ((void*)0), "DKy", VAR_33, VAR_20,
       VAR_34, ((void*)0));

 VAR_27 -= VAR_17;
 VAR_28 += VAR_17;

 if (!VAR_27 && !VAR_22)
  FUNC_6();

 VAR_23 = FUNC_12(VAR_9, VAR_10, VAR_29, 1);
 if (!VAR_23)
  FUNC_1("Failed to open '%s' port '%d'", VAR_9, VAR_10);

 if (VAR_22) {
  if (FUNC_10(VAR_30, 0, 0, VAR_18, VAR_23) < 0)
   FUNC_1("can't serve class %d on this port",
    VAR_30);

  FUNC_4(VAR_8, sizeof VAR_8);

  if ((VAR_32 = FUNC_8()))
   FUNC_1("ibping to %s: %s", FUNC_14(&VAR_19), VAR_32);
  FUNC_3(0);
 }

 if (FUNC_9(VAR_30, 0, VAR_23) < 0)
  FUNC_1("can't register ping class %d on this port",
   VAR_30);

 if (VAR_26 && VAR_11 != VAR_0)
  FUNC_1("When using GRH, LID should be provided");
 if (FUNC_16(VAR_9, VAR_10, &VAR_19, VAR_28[0],
          VAR_11, VAR_12, VAR_23) < 0)
  FUNC_1("can't resolve destination port %s", VAR_28[0]);

 if (VAR_26) {
  VAR_19.grh_present = 1;
  FUNC_13(&VAR_19.gid, &VAR_6, sizeof(VAR_19.gid));
 }

 FUNC_17(VAR_3, FUNC_15);
 FUNC_17(VAR_4, FUNC_15);

 VAR_24 = FUNC_2();

 while (VAR_5-- > 0) {
  VAR_16++;
  if ((VAR_31 = FUNC_7(&VAR_19, VAR_7)) == ~0ull) {
   FUNC_0("ibping to %s failed", FUNC_14(&VAR_19));
   VAR_13++;
  } else {
   if (VAR_31 < VAR_15)
    VAR_15 = VAR_31;
   if (VAR_31 > VAR_14)
    VAR_14 = VAR_31;
   VAR_25 += VAR_31;
   VAR_21++;
  }

  if (!VAR_7)
   FUNC_18(1);
 }

 FUNC_15(0);

 FUNC_11(VAR_23);

 FUNC_3(-1);
}
