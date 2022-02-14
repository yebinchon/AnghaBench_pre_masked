
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spicds_info {scalar_t__ type; int format; int dvc; int lock; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct spicds_info*,int,int) ;

void
FUNC_4(struct spicds_info *VAR_15)
{



 FUNC_1(VAR_15->lock);
 if (VAR_15->type == VAR_12 || VAR_15->type == VAR_13) {


  FUNC_3(VAR_15, VAR_2, 0);

  FUNC_3(VAR_15, VAR_1, VAR_15->format);
  FUNC_3(VAR_15, VAR_0, VAR_15->dvc);

  FUNC_3(VAR_15, VAR_2,
      VAR_5 | VAR_4 | VAR_6);

  FUNC_3(VAR_15, VAR_3,
      VAR_8 | VAR_7);
 }
 if (VAR_15->type == VAR_14) {



  FUNC_3(VAR_15, 0x1b, 0x044);
  FUNC_3(VAR_15, 0x1c, 0x00B);
  FUNC_3(VAR_15, 0x1d, 0x009);

  FUNC_3(VAR_15, 0x18, 0x000);

  FUNC_3(VAR_15, 0x16, 0x122);
  FUNC_3(VAR_15, 0x17, 0x022);

  FUNC_3(VAR_15, 0x19, 0x000);
  FUNC_3(VAR_15, 0x1a, 0x000);
 }
 if (VAR_15->type == VAR_9)
  FUNC_3(VAR_15, 0x00, 0x07);
 if (VAR_15->type == VAR_10)
  FUNC_3(VAR_15, 0x00, 0x8f);
 if (VAR_15->type == VAR_11)
  FUNC_3(VAR_15, 0x00, 0x07);
 FUNC_2(VAR_15->lock);
}
