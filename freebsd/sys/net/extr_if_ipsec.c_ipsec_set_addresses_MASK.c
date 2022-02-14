
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int sa_family; } ;
struct TYPE_4__ {int sa; } ;
struct TYPE_3__ {int sa; } ;
struct secasindex {scalar_t__ reqid; TYPE_2__ dst; TYPE_1__ src; } ;
struct ipsec_softc {scalar_t__ family; scalar_t__ reqid; } ;
struct ifnet {struct ipsec_softc* if_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct secasindex* FUNC_0 (struct ipsec_softc*,int ,int ) ;
 scalar_t__ FUNC_1 (struct ipsec_softc*) ;
 int VAR_3 ;
 int FUNC_2 (struct ipsec_softc*,struct sockaddr*,struct sockaddr*,scalar_t__) ;
 scalar_t__ FUNC_3 (int *,struct sockaddr*,int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int
FUNC_5(struct ifnet *VAR_4, struct sockaddr *VAR_5,
    struct sockaddr *VAR_6)
{
 struct ipsec_softc *VAR_7;
 struct secasindex *VAR_8;

 FUNC_4(&VAR_3, VAR_2);

 VAR_7 = VAR_4->if_softc;
 if (VAR_7->family != 0) {
  VAR_8 = FUNC_0(VAR_7, VAR_1,
      VAR_5->sa_family);
  if (VAR_8 != ((void*)0) && VAR_8->reqid == VAR_7->reqid &&
      FUNC_3(&VAR_8->src.sa, VAR_5, 0) == 0 &&
      FUNC_3(&VAR_8->dst.sa, VAR_6, 0) == 0)
   return (0);

 }

 if (FUNC_1(VAR_7) != 0)
  return (VAR_0);
 return (FUNC_2(VAR_7, VAR_5, VAR_6, VAR_7->reqid));
}
