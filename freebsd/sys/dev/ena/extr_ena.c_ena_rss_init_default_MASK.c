
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_com_dev {int dummy; } ;
struct ena_adapter {int num_queues; int pdev; struct ena_com_dev* ena_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct ena_com_dev*,int ,int *,int ,int) ;
 int FUNC_3 (struct ena_com_dev*,int,int ) ;
 int FUNC_4 (struct ena_com_dev*) ;
 int FUNC_5 (struct ena_com_dev*,int ) ;
 int FUNC_6 (struct ena_com_dev*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int
FUNC_8(struct ena_adapter *VAR_5)
{
 struct ena_com_dev *VAR_6 = VAR_5->ena_dev;
 device_t VAR_7 = VAR_5->pdev;
 int VAR_8, VAR_9, VAR_10;

 VAR_9 = FUNC_5(VAR_6, VAR_2);
 if (FUNC_7(VAR_9 != 0)) {
  FUNC_1(VAR_7, "Cannot init indirect table\n");
  return (VAR_9);
 }

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  VAR_8 = VAR_10 % VAR_5->num_queues;
  VAR_9 = FUNC_3(VAR_6, VAR_10,
      FUNC_0(VAR_8));
  if (FUNC_7((VAR_9 != 0) && (VAR_9 != VAR_4))) {
   FUNC_1(VAR_7, "Cannot fill indirect table\n");
   goto err_rss_destroy;
  }
 }

 VAR_9 = FUNC_2(VAR_6, VAR_0, ((void*)0),
     VAR_1, 0xFFFFFFFF);
 if (FUNC_7((VAR_9 != 0) && (VAR_9 != VAR_4))) {
  FUNC_1(VAR_7, "Cannot fill hash function\n");
  goto err_rss_destroy;
 }

 VAR_9 = FUNC_6(VAR_6);
 if (FUNC_7((VAR_9 != 0) && (VAR_9 != VAR_4))) {
  FUNC_1(VAR_7, "Cannot fill hash control\n");
  goto err_rss_destroy;
 }

 return (0);

err_rss_destroy:
 FUNC_4(VAR_6);
 return (VAR_9);
}
