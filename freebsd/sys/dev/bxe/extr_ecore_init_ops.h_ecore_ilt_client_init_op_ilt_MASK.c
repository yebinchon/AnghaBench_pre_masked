
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ilt_client_info {int flags; int start; int end; } ;
struct ecore_ilt {int start_line; } ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bxe_softc*,struct ilt_client_info*,int ,int ) ;
 int FUNC_1 (struct bxe_softc*,struct ecore_ilt*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct bxe_softc *VAR_1,
      struct ecore_ilt *VAR_2,
      struct ilt_client_info *VAR_3,
      uint8_t VAR_4)
{
 int VAR_5;

 if (VAR_3->flags & VAR_0)
  return;

 for (VAR_5 = VAR_3->start; VAR_5 <= VAR_3->end; VAR_5++)
  FUNC_1(VAR_1, VAR_2, VAR_5, VAR_4);


 FUNC_0(VAR_1, VAR_3, VAR_2->start_line, VAR_4);
}
