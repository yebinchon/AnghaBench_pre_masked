
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
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct iwm_softc*,int,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(struct iwm_softc *VAR_4,
 const struct iwm_fw_img *VAR_5, int VAR_6, int *VAR_7)
{
 int VAR_8;
 int VAR_9, VAR_10 = 0;
 uint32_t VAR_11 = 0;

 if (VAR_6 == 1) {
  VAR_8 = 0;
  *VAR_7 = 0;
 } else {
  VAR_8 = 16;
  (*VAR_7)++;
 }

 for (VAR_9 = *VAR_7; VAR_9 < VAR_3; VAR_9++) {
  VAR_11 = VAR_9;







  if (!VAR_5->sec[VAR_9].data ||
      VAR_5->sec[VAR_9].offset == VAR_0 ||
      VAR_5->sec[VAR_9].offset == VAR_2) {
   FUNC_0(VAR_4, VAR_1,
        "Break since Data not valid or Empty section, sec = %d\n",
         VAR_9);
   break;
  }

  VAR_10 = FUNC_1(VAR_4, VAR_9, &VAR_5->sec[VAR_9]);
  if (VAR_10)
   return VAR_10;
 }

 *VAR_7 = VAR_11;

 return 0;

}
