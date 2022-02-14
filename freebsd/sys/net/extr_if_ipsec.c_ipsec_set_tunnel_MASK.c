
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct sockaddr {scalar_t__ sa_family; } ;
struct secpolicy {int dummy; } ;
struct ipsec_softc {scalar_t__ family; TYPE_1__* ifp; struct secpolicy** sp; } ;
struct TYPE_2__ {int if_drv_flags; } ;


 int FUNC_0 (int ,struct ipsec_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ipsec_softc*) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct ipsec_softc*,struct secpolicy**,struct sockaddr*,struct sockaddr*,int ) ;
 int FUNC_3 (struct ipsec_softc*) ;
 int FUNC_4 (struct sockaddr*) ;
 int FUNC_5 (struct secpolicy**) ;
 scalar_t__ FUNC_6 (struct secpolicy**,int) ;
 int VAR_6 ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int
FUNC_8(struct ipsec_softc *VAR_7, struct sockaddr *VAR_8,
    struct sockaddr *VAR_9, uint32_t VAR_10)
{
 struct secpolicy *VAR_11[VAR_3];
 int VAR_12;

 FUNC_7(&VAR_5, VAR_4);


 if (FUNC_2(VAR_7, VAR_11, VAR_8, VAR_9, VAR_10) == 0) {

  if (FUNC_6(VAR_11, VAR_3) != 0) {
   for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++)
    FUNC_5(&VAR_11[VAR_12]);
   return (VAR_0);
  }
  if (VAR_7->family != 0)
   FUNC_1(VAR_7);
  for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++)
   VAR_7->sp[VAR_12] = VAR_11[VAR_12];
  VAR_7->family = VAR_8->sa_family;
  FUNC_0(FUNC_4(VAR_8), VAR_7, VAR_6);
 } else {
  VAR_7->ifp->if_drv_flags &= ~VAR_2;
  return (VAR_1);
 }
 FUNC_3(VAR_7);
 return (0);
}
