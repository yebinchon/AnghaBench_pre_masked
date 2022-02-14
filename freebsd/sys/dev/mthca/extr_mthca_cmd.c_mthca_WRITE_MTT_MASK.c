
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mthca_mailbox {int dma; } ;
struct mthca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mthca_dev*,int ,int,int ,int ,int ) ;

int FUNC_1(struct mthca_dev *VAR_2, struct mthca_mailbox *VAR_3,
      int VAR_4)
{
 return FUNC_0(VAR_2, VAR_3->dma, VAR_4, 0, VAR_1,
    VAR_0);
}
