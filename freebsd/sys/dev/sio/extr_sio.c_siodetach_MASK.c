
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct com_s {struct com_s* ibuf; scalar_t__ ioportres; int ioportrid; scalar_t__ irqres; int cookie; scalar_t__ tp; int gone; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct com_s*,int ) ;
 int FUNC_6 (scalar_t__) ;

int
FUNC_7(device_t VAR_4)
{
 struct com_s *VAR_5;

 VAR_5 = (struct com_s *) FUNC_2(VAR_4);
 if (VAR_5 == ((void*)0)) {
  FUNC_3(VAR_4, "NULL com in siounload\n");
  return (0);
 }
 VAR_5->gone = VAR_3;
 if (VAR_5->tp)
  FUNC_6(VAR_5->tp);
 if (VAR_5->irqres) {
  FUNC_1(VAR_4, VAR_5->irqres, VAR_5->cookie);
  FUNC_0(VAR_4, VAR_2, 0, VAR_5->irqres);
 }
 if (VAR_5->ioportres)
  FUNC_0(VAR_4, VAR_1, VAR_5->ioportrid,
         VAR_5->ioportres);
 if (VAR_5->ibuf != ((void*)0))
  FUNC_5(VAR_5->ibuf, VAR_0);

 FUNC_4(VAR_4, ((void*)0));
 FUNC_5(VAR_5, VAR_0);
 return (0);
}
