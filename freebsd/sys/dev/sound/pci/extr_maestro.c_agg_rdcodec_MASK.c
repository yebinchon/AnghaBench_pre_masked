
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agg_info {int dev; } ;


 int FUNC_0 (struct agg_info*,int ,int) ;
 int FUNC_1 (struct agg_info*,int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct agg_info*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(struct agg_info *VAR_3, int VAR_4)
{
 int VAR_5;


 if (FUNC_2(VAR_3)) {

  FUNC_3(VAR_3->dev, "agg_rdcodec() PROGLESS timed out.\n");
  return -1;
 }

 FUNC_1(VAR_3, VAR_1, VAR_0 | VAR_4, 1);



 if (!FUNC_2(VAR_3)) {
  VAR_5 = FUNC_0(VAR_3, VAR_2, 2);
 } else {

  FUNC_3(VAR_3->dev, "agg_rdcodec() RW_DONE timed out.\n");
  VAR_5 = -1;
 }

 return VAR_5;
}
