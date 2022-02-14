
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct mthca_mailbox {int dma; int * buf; } ;
struct mthca_dev {int dummy; } ;
typedef int __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct mthca_mailbox*) ;
 int FUNC_1 (struct mthca_mailbox*) ;
 int FUNC_2 (scalar_t__) ;
 struct mthca_mailbox* FUNC_3 (struct mthca_dev*,int ) ;
 int FUNC_4 (struct mthca_dev*,int ,int,int ,int ,int ) ;
 int FUNC_5 (struct mthca_dev*,char*,unsigned long long,unsigned long long) ;
 int FUNC_6 (struct mthca_dev*,struct mthca_mailbox*) ;

int FUNC_7(struct mthca_dev *VAR_3, u64 VAR_4, u64 VAR_5)
{
 struct mthca_mailbox *VAR_6;
 __be64 *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_3(VAR_3, VAR_2);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);
 VAR_7 = VAR_6->buf;

 VAR_7[0] = FUNC_2(VAR_5);
 VAR_7[1] = FUNC_2(VAR_4);

 VAR_8 = FUNC_4(VAR_3, VAR_6->dma, 1, 0, VAR_0,
   VAR_1);

 FUNC_6(VAR_3, VAR_6);

 if (!VAR_8)
  FUNC_5(VAR_3, "Mapped page at %llx to %llx for ICM.\n",
     (unsigned long long) VAR_4, (unsigned long long) VAR_5);

 return VAR_8;
}
