
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct vmbus_xact {int dummy; } ;
struct vmbus_gpa {int gpa_len; scalar_t__ gpa_ofs; scalar_t__ gpa_page; } ;
struct hn_softc {int hn_prichan; int hn_ifp; } ;
struct hn_nvs_sendctx {int dummy; } ;
typedef int bus_addr_t ;


 int FUNC_0 (struct hn_softc*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,struct hn_nvs_sendctx*,struct vmbus_gpa*,int) ;
 int FUNC_4 (int ,char*,int) ;
 void const* FUNC_5 (int ,struct vmbus_xact*,size_t*,int ) ;
 int FUNC_6 (struct vmbus_xact*) ;
 int FUNC_7 (struct vmbus_xact*) ;
 int FUNC_8 (struct vmbus_xact*) ;

__attribute__((used)) static const void *
FUNC_9(struct hn_softc *VAR_4, struct vmbus_xact *VAR_5, size_t VAR_6,
    struct hn_nvs_sendctx *VAR_7, size_t *VAR_8)
{
 struct vmbus_gpa VAR_9[VAR_0];
 int VAR_10, VAR_11;
 bus_addr_t VAR_12;

 FUNC_1(VAR_6 <= VAR_1 && VAR_6 > 0,
     ("invalid request length %zu", VAR_6));




 VAR_12 = FUNC_8(VAR_5);
 FUNC_1((VAR_12 & VAR_2) == 0,
     ("vmbus xact request is not page aligned 0x%jx", (uintmax_t)VAR_12));
 for (VAR_10 = 0; VAR_10 < VAR_0; ++VAR_10) {
  int VAR_13 = VAR_3;

  if (VAR_6 == 0)
   break;
  if (VAR_6 < VAR_13)
   VAR_13 = VAR_6;

  VAR_9[VAR_10].gpa_page = FUNC_2(VAR_12) + VAR_10;
  VAR_9[VAR_10].gpa_len = VAR_13;
  VAR_9[VAR_10].gpa_ofs = 0;

  VAR_6 -= VAR_13;
 }
 FUNC_1(VAR_6 == 0, ("still have %zu request data left", VAR_6));





 FUNC_6(VAR_5);
 VAR_11 = FUNC_3(VAR_4->hn_prichan, VAR_7, VAR_9, VAR_10);
 if (VAR_11) {
  FUNC_7(VAR_5);
  FUNC_4(VAR_4->hn_ifp, "RNDIS ctrl send failed: %d\n", VAR_11);
  return (((void*)0));
 }
 return (FUNC_5(VAR_4->hn_prichan, VAR_5, VAR_8,
     FUNC_0(VAR_4)));
}
