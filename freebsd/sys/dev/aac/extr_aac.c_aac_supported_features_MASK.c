
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct aac_softc {int flags; } ;
struct TYPE_3__ {int largeLBA; } ;
struct TYPE_4__ {scalar_t__ fValue; TYPE_1__ fBits; } ;
struct aac_features {TYPE_2__ feat; } ;
typedef int f ;
typedef int caddr_t ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ,struct aac_features*,int) ;
 int FUNC_1 (struct aac_features*,int ,int) ;
 int FUNC_2 (struct aac_softc*,char*,char*) ;

__attribute__((used)) static int
FUNC_3(struct aac_softc *VAR_2, caddr_t VAR_3)
{
 struct aac_features VAR_4;
 int VAR_5;

 FUNC_2(VAR_2, VAR_1, "");

 if ((VAR_5 = FUNC_0(VAR_3, &VAR_4, sizeof (VAR_4))) != 0)
  return (VAR_5);
 if (VAR_4.feat.fValue == 0) {
  VAR_4.feat.fBits.largeLBA =
      (VAR_2->flags & VAR_0) ? 1 : 0;

 } else {
  if (VAR_4.feat.fBits.largeLBA)
   VAR_4.feat.fBits.largeLBA =
       (VAR_2->flags & VAR_0) ? 1 : 0;

 }

 VAR_5 = FUNC_1(&VAR_4, VAR_3, sizeof (VAR_4));
 return (VAR_5);
}
