
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int node_guid; int * node_desc; } ;
struct mthca_dev {TYPE_1__ ib_dev; int rev_id; } ;
struct ib_smp {scalar_t__ data; int attr_id; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ib_smp*) ;
 int FUNC_2 (struct ib_smp*) ;
 struct ib_smp* FUNC_3 (int,int ) ;
 struct ib_smp* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,scalar_t__,int) ;
 int FUNC_6 (struct mthca_dev*,int,int,int,int *,int *,struct ib_smp*,struct ib_smp*) ;
 scalar_t__ FUNC_7 (struct mthca_dev*) ;

__attribute__((used)) static int FUNC_8(struct mthca_dev *VAR_5)
{
 struct ib_smp *VAR_6 = ((void*)0);
 struct ib_smp *VAR_7 = ((void*)0);
 int VAR_8 = -VAR_0;

 VAR_6 = FUNC_4(sizeof *VAR_6, VAR_1);
 VAR_7 = FUNC_3(sizeof *VAR_7, VAR_1);
 if (!VAR_6 || !VAR_7)
  goto out;

 FUNC_1(VAR_6);
 VAR_6->attr_id = VAR_3;

 VAR_8 = FUNC_6(VAR_5, 1, 1,
       1, ((void*)0), ((void*)0), VAR_6, VAR_7);
 if (VAR_8)
  goto out;

 FUNC_5(VAR_5->ib_dev.node_desc, VAR_7->data, VAR_2);

 VAR_6->attr_id = VAR_4;

 VAR_8 = FUNC_6(VAR_5, 1, 1,
       1, ((void*)0), ((void*)0), VAR_6, VAR_7);
 if (VAR_8)
  goto out;

 if (FUNC_7(VAR_5))
  VAR_5->rev_id = FUNC_0((__be32 *) (VAR_7->data + 32));
 FUNC_5(&VAR_5->ib_dev.node_guid, VAR_7->data + 12, 8);

out:
 FUNC_2(VAR_6);
 FUNC_2(VAR_7);
 return VAR_8;
}
