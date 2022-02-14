
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef union res_sockaddr_union {int dummy; } res_sockaddr_union ;
typedef int u_long ;
typedef int rrset_ns ;
typedef TYPE_1__* res_state ;
typedef int ns_class ;
struct TYPE_7__ {int pfcode; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ,int,int *) ;
 int FUNC_4 (TYPE_1__*,char*,int ,int,int *) ;
 int FUNC_5 (TYPE_1__*,char const*,int ,int,char*,size_t,char*,int,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,char*,int *,union res_sockaddr_union*,int) ;
 char* FUNC_8 (int ) ;

int
FUNC_9(res_state VAR_10, const char *VAR_11, ns_class VAR_12, int VAR_13,
   char *VAR_14, size_t VAR_15, union res_sockaddr_union *VAR_16,
   int VAR_17)
{
 char VAR_18[VAR_0];
 u_long VAR_19;
 rrset_ns VAR_20;
 int VAR_21;

 FUNC_0(("START dname='%s' class=%s, zsize=%ld, naddrs=%d",
   VAR_11, FUNC_6(VAR_12), (long)VAR_15, VAR_17));
 VAR_19 = VAR_10->pfcode;
 VAR_10->pfcode |= VAR_6 | VAR_5 | VAR_7 |
    VAR_8 | VAR_3 |
    VAR_4 | VAR_2;
 FUNC_1(VAR_20);

 FUNC_0(("get the soa, and see if it has enough glue"));
 if ((VAR_21 = FUNC_5(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15,
    VAR_18, sizeof VAR_18, &VAR_20)) < 0 ||
     ((VAR_13 & VAR_1) == 0 &&
      (VAR_21 = FUNC_7(VAR_10, VAR_18, &VAR_20, VAR_16, VAR_17)) > 0))
  goto done;

 FUNC_0(("get the ns rrset and see if it has enough glue"));
 if ((VAR_21 = FUNC_4(VAR_10, VAR_14, VAR_12, VAR_13, &VAR_20)) < 0 ||
     ((VAR_13 & VAR_1) == 0 &&
      (VAR_21 = FUNC_7(VAR_10, VAR_18, &VAR_20, VAR_16, VAR_17)) > 0))
  goto done;

 FUNC_0(("get the missing glue and see if it's finally enough"));
 if ((VAR_21 = FUNC_3(VAR_10, VAR_12, VAR_13, &VAR_20)) >= 0)
  VAR_21 = FUNC_7(VAR_10, VAR_18, &VAR_20, VAR_16, VAR_17);

 done:
 FUNC_0(("FINISH n=%d (%s)", VAR_21, (VAR_21 < 0) ? FUNC_8(VAR_9) : "OK"));
 FUNC_2(&VAR_20);
 VAR_10->pfcode = VAR_19;
 return (VAR_21);
}
