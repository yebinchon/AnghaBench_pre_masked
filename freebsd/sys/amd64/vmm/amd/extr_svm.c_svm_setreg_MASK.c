
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct svm_softc {int vm; } ;
typedef int register_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (struct svm_softc*,int) ;
 int FUNC_2 (struct svm_softc*,int,int ) ;
 int * FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (struct svm_softc*,int,int,int ) ;

__attribute__((used)) static int
FUNC_5(void *VAR_2, int VAR_3, int VAR_4, uint64_t VAR_5)
{
 struct svm_softc *VAR_6;
 register_t *VAR_7;

 VAR_6 = VAR_2;

 if (VAR_4 == VAR_1) {
  return (FUNC_2(VAR_6, VAR_3, VAR_5));
 }

 if (FUNC_4(VAR_6, VAR_3, VAR_4, VAR_5) == 0) {
  return (0);
 }

 VAR_7 = FUNC_3(FUNC_1(VAR_6, VAR_3), VAR_4);

 if (VAR_7 != ((void*)0)) {
  *VAR_7 = VAR_5;
  return (0);
 }







 FUNC_0(VAR_6->vm, VAR_3, "svm_setreg: unknown register %#x", VAR_4);
 return (VAR_0);
}
