
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct rndis_status_msg {int rm_status; int rm_stbuflen; int rm_stbufoffset; } ;
struct hn_softc {int hn_ifp; } ;
typedef int change ;







 int FUNC_0 (int ) ;
 int FUNC_1 (struct hn_softc*) ;
 int FUNC_2 (struct hn_softc*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int*,int const*,int) ;

__attribute__((used)) static void
FUNC_5(struct hn_softc *VAR_0, const void *VAR_1, int VAR_2)
{
 const struct rndis_status_msg *VAR_3;
 int VAR_4;

 if (VAR_2 < sizeof(*VAR_3)) {
  FUNC_3(VAR_0->hn_ifp, "invalid RNDIS status\n");
  return;
 }
 VAR_3 = VAR_1;

 switch (VAR_3->rm_status) {
 case 131:
 case 130:
  FUNC_2(VAR_0);
  break;

 case 128:
 case 132:

  break;

 case 129:
  VAR_4 = FUNC_0(VAR_3->rm_stbufoffset);
  if (VAR_2 < VAR_4 + VAR_3->rm_stbuflen ||
      VAR_3->rm_stbuflen < sizeof(uint32_t)) {
   FUNC_3(VAR_0->hn_ifp, "network changed\n");
  } else {
   uint32_t VAR_5;

   FUNC_4(&VAR_5, ((const uint8_t *)VAR_3) + VAR_4,
       sizeof(VAR_5));
   FUNC_3(VAR_0->hn_ifp, "network changed, change %u\n",
       VAR_5);
  }
  FUNC_1(VAR_0);
  break;

 default:
  FUNC_3(VAR_0->hn_ifp, "unknown RNDIS status 0x%08x\n",
      VAR_3->rm_status);
  break;
 }
}
