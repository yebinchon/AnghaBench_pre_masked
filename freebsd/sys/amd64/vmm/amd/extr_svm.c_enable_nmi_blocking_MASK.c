
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svm_softc {int vm; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct svm_softc*,int) ;
 int FUNC_3 (struct svm_softc*,int,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct svm_softc *VAR_2, int VAR_3)
{

 FUNC_0(!FUNC_2(VAR_2, VAR_3), ("vNMI already blocked"));
 FUNC_1(VAR_2->vm, VAR_3, "vNMI blocking enabled");
 FUNC_3(VAR_2, VAR_3, VAR_0, VAR_1);
}
