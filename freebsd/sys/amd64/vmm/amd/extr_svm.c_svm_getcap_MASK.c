
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svm_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (struct svm_softc*,int,int ,int ) ;

__attribute__((used)) static int
FUNC_1(void *VAR_4, int VAR_5, int VAR_6, int *VAR_7)
{
 struct svm_softc *VAR_8;
 int VAR_9;

 VAR_8 = VAR_4;
 VAR_9 = 0;

 switch (VAR_6) {
 case 130:
  *VAR_7 = FUNC_0(VAR_8, VAR_5, VAR_1,
      VAR_2);
  break;
 case 129:
  *VAR_7 = FUNC_0(VAR_8, VAR_5, VAR_1,
      VAR_3);
  break;
 case 128:
  *VAR_7 = 1;
  break;
 default:
  VAR_9 = VAR_0;
  break;
 }
 return (VAR_9);
}
