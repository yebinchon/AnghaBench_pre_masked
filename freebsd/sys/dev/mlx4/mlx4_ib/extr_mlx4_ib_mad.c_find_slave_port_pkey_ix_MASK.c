
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct TYPE_7__ {size_t*** virt2phys_pkey; } ;
struct mlx4_ib_dev {int ib_dev; TYPE_3__ pkeys; TYPE_4__* dev; } ;
struct TYPE_6__ {int* pkey_table_len; } ;
struct TYPE_5__ {size_t* pkey_phys_table_len; } ;
struct TYPE_8__ {TYPE_2__ caps; TYPE_1__ phys_caps; } ;


 int VAR_0 ;
 int FUNC_0 (int *,size_t,int,int*) ;
 int FUNC_1 (int *,size_t,size_t,int*) ;
 int FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_3(struct mlx4_ib_dev *VAR_1, int VAR_2,
       u8 VAR_3, u16 VAR_4, u16 *VAR_5)
{
 int VAR_6, VAR_7;
 u8 VAR_8, VAR_9, VAR_10 = 0xFF;
 u16 VAR_11;

 if (VAR_2 == FUNC_2(VAR_1->dev))
  return FUNC_0(&VAR_1->ib_dev, VAR_3, VAR_4, VAR_5);

 VAR_8 = VAR_1->dev->phys_caps.pkey_phys_table_len[VAR_3] - 1;

 for (VAR_6 = 0; VAR_6 < VAR_1->dev->caps.pkey_table_len[VAR_3]; VAR_6++) {
  if (VAR_1->pkeys.virt2phys_pkey[VAR_2][VAR_3 - 1][VAR_6] == VAR_8)
   continue;

  VAR_9 = VAR_1->pkeys.virt2phys_pkey[VAR_2][VAR_3 - 1][VAR_6];

  VAR_7 = FUNC_1(&VAR_1->ib_dev, VAR_3, VAR_9, &VAR_11);
  if (VAR_7)
   continue;
  if ((VAR_11 & 0x7FFF) == (VAR_4 & 0x7FFF)) {
   if (VAR_11 & 0x8000) {
    *VAR_5 = (u16) VAR_9;
    return 0;
   } else {

    if (VAR_10 == 0xFF)
     VAR_10 = VAR_9;
   }
  }
 }

 if (VAR_10 < 0xFF) {
  *VAR_5 = (u16) VAR_10;
  return 0;
 }

 return -VAR_0;
}
