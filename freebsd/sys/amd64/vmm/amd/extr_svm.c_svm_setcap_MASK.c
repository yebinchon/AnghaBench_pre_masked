
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svm_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (struct svm_softc*,int,int ,int ,int) ;

__attribute__((used)) static int
FUNC_1(void *VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 struct svm_softc *VAR_9;
 int VAR_10;

 VAR_9 = VAR_5;
 VAR_10 = 0;
 switch (VAR_7) {
 case 130:
  FUNC_0(VAR_9, VAR_6, VAR_2,
      VAR_3, VAR_8);
  break;
 case 129:
  FUNC_0(VAR_9, VAR_6, VAR_2,
      VAR_4, VAR_8);
  break;
 case 128:

  if (VAR_8 == 0)
   VAR_10 = VAR_0;
  break;
 default:
  VAR_10 = VAR_1;
  break;
 }
 return (VAR_10);
}
