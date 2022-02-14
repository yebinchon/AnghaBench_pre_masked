
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct azx_dev {int dummy; } ;
struct azx {int num_streams; struct azx_dev* azx_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct azx*,int ) ;
 int FUNC_1 (struct azx_dev*,int ) ;
 int FUNC_2 (struct azx_dev*,int ,int) ;
 int FUNC_3 (struct azx*,int ,int ) ;
 int FUNC_4 (struct azx*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct azx *VAR_5)
{
 int VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_5->num_streams; VAR_6++) {
  struct azx_dev *VAR_7 = &VAR_5->azx_dev[VAR_6];
  FUNC_2(VAR_7, VAR_3,
         FUNC_1(VAR_7, VAR_3) & ~VAR_4);
 }


 FUNC_3(VAR_5, VAR_2, 0);


 FUNC_4(VAR_5, VAR_2, FUNC_0(VAR_5, VAR_2) &
     ~(VAR_0 | VAR_1));
}
