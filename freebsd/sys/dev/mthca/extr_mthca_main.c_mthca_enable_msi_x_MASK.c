
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* eq; } ;
struct mthca_dev {TYPE_2__ eq_table; int pdev; } ;
struct msix_entry {int entry; int vector; } ;
struct TYPE_3__ {int msi_x_vector; } ;


 int FUNC_0 (struct msix_entry*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int ,struct msix_entry*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct mthca_dev *VAR_3)
{
 struct msix_entry VAR_4[3];
 int VAR_5;

 VAR_4[0].entry = 0;
 VAR_4[1].entry = 1;
 VAR_4[2].entry = 2;

 VAR_5 = FUNC_1(VAR_3->pdev, VAR_4, FUNC_0(VAR_4), FUNC_0(VAR_4));
 if (VAR_5 < 0)
  return VAR_5;

 VAR_3->eq_table.eq[VAR_2 ].msi_x_vector = VAR_4[0].vector;
 VAR_3->eq_table.eq[VAR_0].msi_x_vector = VAR_4[1].vector;
 VAR_3->eq_table.eq[VAR_1 ].msi_x_vector = VAR_4[2].vector;

 return 0;
}
