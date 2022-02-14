
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef int u_int ;
struct intr_pic {int dummy; } ;
struct bcm_lintc_softc {int bls_dev; struct bcm_lintc_irqsrc* bls_isrcs; } ;
struct bcm_lintc_irqsrc {size_t bli_irq; int bli_isrc; int bli_value; void* bli_mask; } ;


 int FUNC_0 (int ) ;





 size_t VAR_0 ;

 void* FUNC_1 (int) ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 intptr_t FUNC_2 (int ) ;
 int VAR_4 ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ,char*,char const*,size_t) ;
 int FUNC_5 (int ,intptr_t,int ,struct bcm_lintc_softc*,int ) ;
 struct intr_pic* FUNC_6 (int ,intptr_t) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(struct bcm_lintc_softc *VAR_5)
{
 struct bcm_lintc_irqsrc *VAR_6;
 struct intr_pic *VAR_7;
 int VAR_8;
 u_int VAR_9;
 uint32_t VAR_10;
 const char *VAR_11;
 intptr_t VAR_12;

 VAR_6 = VAR_5->bls_isrcs;
 VAR_11 = FUNC_3(VAR_5->bls_dev);
 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  VAR_6[VAR_10].bli_irq = VAR_10;
  switch (VAR_10) {
  case 131:
   VAR_6[VAR_10].bli_mask = FUNC_1(0);
   VAR_9 = VAR_3;
   break;
  case 130:
   VAR_6[VAR_10].bli_mask = FUNC_1(1);
   VAR_9 = VAR_3;
   break;
  case 129:
   VAR_6[VAR_10].bli_mask = FUNC_1(2);
   VAR_9 = VAR_3;
   break;
  case 128:
   VAR_6[VAR_10].bli_mask = FUNC_1(3);
   VAR_9 = VAR_3;
   break;
  case 136:
  case 135:
  case 134:
  case 133:
   VAR_6[VAR_10].bli_value = 0;
   VAR_9 = VAR_2;
   break;
  case 137:
   VAR_6[VAR_10].bli_value = FUNC_0(0);
   VAR_9 = 0;
   break;
  case 132:
   VAR_6[VAR_10].bli_value = 0;
   VAR_9 = VAR_3;
   break;
  default:
   VAR_6[VAR_10].bli_value = 0;
   VAR_9 = 0;
   break;
  }

  VAR_8 = FUNC_4(&VAR_6[VAR_10].bli_isrc, VAR_5->bls_dev,
      VAR_9, "%s,%u", VAR_11, VAR_10);
  if (VAR_8 != 0)
   return (VAR_8);
 }

 VAR_12 = FUNC_2(FUNC_7(VAR_5->bls_dev));
 VAR_7 = FUNC_6(VAR_5->bls_dev, VAR_12);
 if (VAR_7 == ((void*)0))
  return (VAR_1);

 return (FUNC_5(VAR_5->bls_dev, VAR_12, VAR_4, VAR_5, 0));
}
