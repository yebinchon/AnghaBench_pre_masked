
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pfil_head {int dummy; } ;
struct osd {int dummy; } ;
struct ipsec_ctx_data {int af; int enc; int sav; TYPE_2__** mp; int inp; } ;
struct ifnet {int if_flags; } ;
struct enc_softc {struct ifnet* sc_ifp; } ;
typedef int int32_t ;
struct TYPE_4__ {int len; struct ifnet* rcvif; } ;
struct TYPE_5__ {TYPE_1__ m_pkthdr; } ;




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
 int FUNC_0 (struct pfil_head*) ;
 int FUNC_1 (struct pfil_head*) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct pfil_head* VAR_15 ;
 struct pfil_head* VAR_16 ;
 int FUNC_2 (struct ifnet*,TYPE_2__*,int ,int,int,int) ;
 int FUNC_3 (struct ifnet*,int ,int) ;
 scalar_t__ FUNC_4 (struct pfil_head*,TYPE_2__**,struct ifnet*,int,int ) ;

__attribute__((used)) static int
FUNC_5(int32_t VAR_17, int32_t VAR_18, void *VAR_19, void *VAR_20,
    void *VAR_21, struct osd *VAR_22)
{
 struct ipsec_ctx_data *VAR_23;
 struct enc_softc *VAR_24;
 struct ifnet *VAR_25, *VAR_26;
 struct pfil_head *VAR_27;
 int VAR_28;

 VAR_24 = (struct enc_softc *)VAR_19;
 VAR_25 = VAR_24->sc_ifp;
 if ((VAR_25->if_flags & VAR_7) == 0)
  return (0);

 VAR_23 = (struct ipsec_ctx_data *)VAR_20;

 if (VAR_23->af != VAR_18)
  return (VAR_2);

 FUNC_2(VAR_25, *VAR_23->mp, VAR_23->sav, VAR_17, VAR_23->enc, VAR_23->af);
 switch (VAR_17) {
 case 129:
  if (VAR_23->enc == VAR_9) {

   FUNC_3(VAR_25, VAR_4, 1);
   FUNC_3(VAR_25, VAR_3,
       (*VAR_23->mp)->m_pkthdr.len);
  }
  if ((VAR_23->enc & VAR_13) == 0)
   return (0);
  VAR_28 = VAR_10;
  break;
 case 128:
  if (VAR_23->enc == VAR_9) {

   FUNC_3(VAR_25, VAR_6, 1);
   FUNC_3(VAR_25, VAR_5,
       (*VAR_23->mp)->m_pkthdr.len);
  }
  if ((VAR_23->enc & VAR_14) == 0)
   return (0);
  VAR_28 = VAR_11;
  break;
 default:
  return (VAR_1);
 }

 switch (VAR_18) {
 default:
  VAR_27 = ((void*)0);
 }
 if (VAR_27 == ((void*)0) || (VAR_28 == VAR_11 && !FUNC_1(VAR_27)) ||
     (VAR_28 == VAR_10 && !FUNC_0(VAR_27)))
  return (0);

 VAR_26 = (*VAR_23->mp)->m_pkthdr.rcvif;
 (*VAR_23->mp)->m_pkthdr.rcvif = VAR_25;
 if (FUNC_4(VAR_27, VAR_23->mp, VAR_25, VAR_28, VAR_23->inp) != VAR_12) {
  *VAR_23->mp = ((void*)0);
  return (VAR_0);
 }
 (*VAR_23->mp)->m_pkthdr.rcvif = VAR_26;
 FUNC_2(VAR_25, *VAR_23->mp, VAR_23->sav, VAR_17,
     VAR_8, VAR_23->af);
 return (0);
}
