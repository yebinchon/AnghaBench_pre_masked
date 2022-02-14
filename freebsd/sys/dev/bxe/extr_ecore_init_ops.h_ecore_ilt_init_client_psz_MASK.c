
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ilt_client_info {int flags; int page_size; } ;
struct ecore_ilt {struct ilt_client_info* clients; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;



 int FUNC_1 (struct bxe_softc*,int ,int ) ;
 struct ecore_ilt* FUNC_2 (struct bxe_softc*) ;

__attribute__((used)) static void FUNC_3(struct bxe_softc *VAR_1, int VAR_2,
          uint32_t VAR_3, uint8_t VAR_4)
{
 struct ecore_ilt *VAR_5 = FUNC_2(VAR_1);
 struct ilt_client_info *VAR_6 = &VAR_5->clients[VAR_2];

 if (VAR_6->flags & VAR_0)
  return;

 switch (VAR_4) {
 case 129:

 case 128:
  FUNC_1(VAR_1, VAR_3, FUNC_0(VAR_6->page_size >> 12));
  break;
 case 130:
  break;
 }
}
