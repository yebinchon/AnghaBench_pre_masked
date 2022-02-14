
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct wmt_softc {int dev; TYPE_1__* ai; int cont_max_loc; } ;
struct TYPE_2__ {scalar_t__ max; } ;


 int FUNC_0 (char*,int,scalar_t__) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (int const*,scalar_t__,int *) ;

__attribute__((used)) static void
FUNC_3(struct wmt_softc *VAR_2, const void *VAR_3, uint16_t VAR_4)
{
 uint32_t VAR_5;

 VAR_5 = FUNC_2((const uint8_t *)VAR_3 + 1,
     VAR_4 - 1, &VAR_2->cont_max_loc);
 if (VAR_5 > VAR_0) {
  FUNC_0("Hardware reported %d contacts while only %d is "
      "supported\n", (int)VAR_5, VAR_0);
  VAR_5 = VAR_0;
 }

 if (VAR_5 > 0 &&
     VAR_5 != VAR_2->ai[VAR_1].max + 1) {
  VAR_2->ai[VAR_1].max = VAR_5 - 1;
  FUNC_1(VAR_2->dev, "%d feature report contacts",
      VAR_5);
 }
}
