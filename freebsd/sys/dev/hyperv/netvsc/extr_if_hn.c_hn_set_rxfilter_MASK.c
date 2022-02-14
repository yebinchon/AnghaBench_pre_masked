
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hn_softc {int hn_rx_filter; } ;


 int FUNC_0 (struct hn_softc*) ;
 int FUNC_1 (struct hn_softc*,int ) ;

__attribute__((used)) static int
FUNC_2(struct hn_softc *VAR_0, uint32_t VAR_1)
{
 int VAR_2 = 0;

 FUNC_0(VAR_0);

 if (VAR_0->hn_rx_filter != VAR_1) {
  VAR_2 = FUNC_1(VAR_0, VAR_1);
  if (!VAR_2)
   VAR_0->hn_rx_filter = VAR_1;
 }
 return (VAR_2);
}
