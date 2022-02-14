
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
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct azx_dev*,int ,int ) ;
 int FUNC_1 (struct azx*,int ,int ) ;
 int FUNC_2 (struct azx*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct azx *VAR_9)
{
 int VAR_10;


 for (VAR_10 = 0; VAR_10 < VAR_9->num_streams; VAR_10++) {
  struct azx_dev *VAR_11 = &VAR_9->azx_dev[VAR_10];
  FUNC_0(VAR_11, VAR_6, VAR_5);
 }


 FUNC_1(VAR_9, VAR_7, VAR_8);


 FUNC_1(VAR_9, VAR_3, VAR_4);


 FUNC_2(VAR_9, VAR_2, VAR_1 | VAR_0);
}
