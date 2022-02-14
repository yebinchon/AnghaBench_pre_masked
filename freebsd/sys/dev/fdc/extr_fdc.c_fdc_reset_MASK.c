
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdc_data {scalar_t__ fdct; int fdout; int fdc_dev; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct fdc_data*,int,int ,int,...) ;
 int FUNC_3 (struct fdc_data*,int ) ;
 int FUNC_4 (struct fdc_data*,int) ;
 int VAR_8 ;
 int FUNC_5 (char*,...) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_6(struct fdc_data *VAR_11)
{
 int VAR_12, VAR_13[10];

 if (VAR_11->fdct == VAR_0) {

  FUNC_3(VAR_11, VAR_4);
 } else {

  FUNC_4(VAR_11, VAR_11->fdout & ~(VAR_2|VAR_1));
  FUNC_0(100);

  FUNC_4(VAR_11, VAR_11->fdout & ~VAR_1);
 }
 FUNC_0(100);
 FUNC_4(VAR_11, VAR_11->fdout);


 if (FUNC_2(VAR_11, 3, VAR_6, VAR_9, VAR_10, 0))
  FUNC_1(VAR_11->fdc_dev, " SPECIFY failed in reset\n");

 if (VAR_11->fdct == VAR_0) {
  if (FUNC_2(VAR_11, 4,
      VAR_3,
      0,


      0x10 |
      (VAR_8 - 1),
      0x00,
      0))
   FUNC_1(VAR_11->fdc_dev,
       " CONFIGURE failed in reset\n");
  if (VAR_7 & 1) {
   if (FUNC_2(VAR_11, 1,
       VAR_5,
       10, &VAR_13[0], &VAR_13[1], &VAR_13[2], &VAR_13[3], &VAR_13[4],
       &VAR_13[5], &VAR_13[6], &VAR_13[7], &VAR_13[8], &VAR_13[9]))
    FUNC_1(VAR_11->fdc_dev,
        " DUMPREG failed in reset\n");
   for (VAR_12 = 0; VAR_12 < 10; VAR_12++)
    FUNC_5(" %02x", VAR_13[VAR_12]);
   FUNC_5("\n");
  }
 }
}
