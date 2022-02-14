
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ u_int ;
struct svm_softc {int vm; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int,scalar_t__,int ,int*) ;
 int FUNC_2 (struct svm_softc*,int,int ,int*) ;
 int FUNC_3 (struct svm_softc*,int,scalar_t__,int ,int*) ;

__attribute__((used)) static int
FUNC_4(struct svm_softc *VAR_1, int VAR_2, u_int VAR_3, uint64_t VAR_4,
    bool *VAR_5)
{
 int VAR_6;

 if (FUNC_0(VAR_3))
  VAR_6 = FUNC_1(VAR_1->vm, VAR_2, VAR_3, VAR_4, VAR_5);
 else if (VAR_3 == VAR_0)
  VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_4, VAR_5);
 else
  VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

 return (VAR_6);
}
