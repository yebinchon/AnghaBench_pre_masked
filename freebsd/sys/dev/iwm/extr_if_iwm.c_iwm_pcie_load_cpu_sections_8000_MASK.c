
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct iwm_softc {int dummy; } ;
struct iwm_fw_img {TYPE_1__* sec; } ;
struct TYPE_2__ {scalar_t__ offset; int data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwm_softc*,int ,char*,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct iwm_softc*,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct iwm_softc*,int ,int) ;
 int FUNC_3 (struct iwm_softc*) ;
 scalar_t__ FUNC_4 (struct iwm_softc*) ;
 int FUNC_5 (struct iwm_softc*) ;
 int FUNC_6 (struct iwm_softc*,int,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_7(struct iwm_softc *VAR_5,
 const struct iwm_fw_img *VAR_6, int VAR_7, int *VAR_8)
{
 int VAR_9;
 int VAR_10, VAR_11 = 0, VAR_12 = 0x1;
 uint32_t VAR_13, VAR_14 = 0;

 if (VAR_7 == 1) {
  VAR_9 = 0;
  *VAR_8 = 0;
 } else {
  VAR_9 = 16;
  (*VAR_8)++;
 }

 for (VAR_10 = *VAR_8; VAR_10 < VAR_4; VAR_10++) {
  VAR_14 = VAR_10;







  if (!VAR_6->sec[VAR_10].data ||
      VAR_6->sec[VAR_10].offset == VAR_0 ||
      VAR_6->sec[VAR_10].offset == VAR_3) {
   FUNC_0(VAR_5, VAR_1,
        "Break since Data not valid or Empty section, sec = %d\n",
        VAR_10);
   break;
  }
  VAR_11 = FUNC_6(VAR_5, VAR_10, &VAR_6->sec[VAR_10]);
  if (VAR_11)
   return VAR_11;


  if (FUNC_4(VAR_5)) {
   VAR_13 = FUNC_1(VAR_5, VAR_2);
   VAR_13 = VAR_13 | (VAR_12 << VAR_9);
   FUNC_2(VAR_5, VAR_2, VAR_13);
   VAR_12 = (VAR_12 << 1) | 0x1;
   FUNC_5(VAR_5);
  }
 }

 *VAR_8 = VAR_14;

 FUNC_3(VAR_5);

 if (FUNC_4(VAR_5)) {
  if (VAR_7 == 1)
   FUNC_2(VAR_5, VAR_2, 0xFFFF);
  else
   FUNC_2(VAR_5, VAR_2, 0xFFFFFFFF);
  FUNC_5(VAR_5);
 }

 return 0;
}
