
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {int sa; } ;
struct TYPE_3__ {int sa; } ;
struct secasindex {TYPE_2__ dst; TYPE_1__ src; } ;
struct ipsec_softc {scalar_t__ reqid; int family; } ;


 int FUNC_0 (int ,struct ipsec_softc*,int ) ;
 int FUNC_1 (struct ipsec_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 struct secasindex* FUNC_5 (struct ipsec_softc*,int ,int ) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (struct ipsec_softc*) ;
 int VAR_4 ;
 int FUNC_8 (struct ipsec_softc*,int *,int *,scalar_t__) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static int
FUNC_10(struct ipsec_softc *VAR_5, uint32_t VAR_6)
{
 struct secasindex *VAR_7;

 FUNC_9(&VAR_4, VAR_2);

 if (VAR_5->reqid == VAR_6 && VAR_6 != 0)
  return (0);

 if (VAR_6 != 0) {

  if (FUNC_4(VAR_6) != 0)
   return (VAR_0);
  if (VAR_5->reqid != 0) {
   FUNC_1(VAR_5, VAR_3);
   FUNC_2();
  }
  VAR_5->reqid = VAR_6;
  FUNC_0(FUNC_6(VAR_6), VAR_5, VAR_3);
 } else {

  if (FUNC_7(VAR_5) != 0)
   return (VAR_0);
 }


 if (VAR_5->family == 0)
  return (0);

 VAR_7 = FUNC_5(VAR_5, VAR_1, VAR_5->family);
 FUNC_3(VAR_7 != ((void*)0),
     ("saidx is NULL, but family is %d", VAR_5->family));
 return (FUNC_8(VAR_5, &VAR_7->src.sa, &VAR_7->dst.sa,
     VAR_5->reqid));
}
