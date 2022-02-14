
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int dev; int dmat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int ,int ,int ,int *,int *,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;

int
FUNC_3(struct adapter *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(FUNC_1(VAR_4->dev), 1, 0,
     VAR_1, VAR_1, ((void*)0), ((void*)0), VAR_2,
     VAR_3, VAR_2, VAR_0, ((void*)0),
     ((void*)0), &VAR_4->dmat);
 if (VAR_5 != 0) {
  FUNC_2(VAR_4->dev,
      "failed to create main DMA tag: %d\n", VAR_5);
 }

 return (VAR_5);
}
