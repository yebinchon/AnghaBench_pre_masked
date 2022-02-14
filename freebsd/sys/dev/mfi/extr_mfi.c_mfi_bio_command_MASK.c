
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mfi_softc {TYPE_1__* mfi_qstat; } ;
struct mfi_command {int dummy; } ;
struct bio {scalar_t__ bio_driver2; } ;
struct TYPE_2__ {int q_length; } ;


 size_t VAR_0 ;
 uintptr_t VAR_1 ;
 uintptr_t VAR_2 ;
 struct mfi_command* FUNC_0 (struct mfi_softc*,struct bio*) ;
 struct mfi_command* FUNC_1 (struct mfi_softc*,struct bio*) ;
 struct bio* FUNC_2 (struct mfi_softc*) ;
 int FUNC_3 (struct mfi_softc*,struct bio*) ;

__attribute__((used)) static struct mfi_command *
FUNC_4(struct mfi_softc *VAR_3)
{
 struct bio *VAR_4;
 struct mfi_command *VAR_5 = ((void*)0);


 if (VAR_3->mfi_qstat[VAR_0].q_length < 2) {
  return (((void*)0));
 }
 if ((VAR_4 = FUNC_2(VAR_3)) == ((void*)0)) {
  return (((void*)0));
 }
 if ((uintptr_t)VAR_4->bio_driver2 == VAR_1) {
  VAR_5 = FUNC_0(VAR_3, VAR_4);
 } else if ((uintptr_t) VAR_4->bio_driver2 == VAR_2) {
  VAR_5 = FUNC_1(VAR_3, VAR_4);
 }
 if (!VAR_5)
     FUNC_3(VAR_3, VAR_4);
 return VAR_5;
}
