
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct mlx4_ib_dev {TYPE_2__* dev; } ;
struct TYPE_9__ {char* name; int offset; } ;
struct TYPE_7__ {int flags2; } ;
struct TYPE_8__ {TYPE_1__ caps; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 TYPE_3__* VAR_2 ;
 TYPE_3__* VAR_3 ;

__attribute__((used)) static void FUNC_1(struct mlx4_ib_dev *VAR_4,
           const char **VAR_5,
           u32 *VAR_6,
           bool VAR_7)
{
 int VAR_8;
 int VAR_9;

 for (VAR_8 = 0, VAR_9 = 0; VAR_8 < FUNC_0(VAR_1); VAR_8++, VAR_9++) {
  VAR_5[VAR_8] = VAR_1[VAR_8].name;
  VAR_6[VAR_8] = VAR_1[VAR_8].offset;
 }

 if (VAR_4->dev->caps.flags2 & VAR_0) {
  for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_3); VAR_8++, VAR_9++) {
   VAR_5[VAR_9] = VAR_3[VAR_8].name;
   VAR_6[VAR_9] = VAR_3[VAR_8].offset;
  }
 }

 if (!VAR_7) {
  for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_2); VAR_8++, VAR_9++) {
   VAR_5[VAR_9] = VAR_2[VAR_8].name;
   VAR_6[VAR_9] = VAR_2[VAR_8].offset;
  }
 }
}
