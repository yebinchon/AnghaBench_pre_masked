
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svm_softc {int msr_bitmap; int iopm_bitmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct svm_softc*,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_3)
{
 struct svm_softc *VAR_4 = VAR_3;

 FUNC_0(VAR_4->iopm_bitmap, VAR_1, VAR_0);
 FUNC_0(VAR_4->msr_bitmap, VAR_2, VAR_0);
 FUNC_1(VAR_4, VAR_0);
}
