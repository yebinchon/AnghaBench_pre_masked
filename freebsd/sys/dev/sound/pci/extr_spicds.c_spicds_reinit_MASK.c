
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spicds_info {scalar_t__ type; int format; int dvc; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct spicds_info*,int ,int) ;

void
FUNC_3(struct spicds_info *VAR_6)
{
 FUNC_0(VAR_6->lock);
 if (VAR_6->type != VAR_5) {

  FUNC_2(VAR_6, VAR_2, 0);

  FUNC_2(VAR_6, VAR_1, VAR_6->format);
  FUNC_2(VAR_6, VAR_0, VAR_6->dvc);

  FUNC_2(VAR_6, VAR_2,
      VAR_4 | VAR_3);
 } else {



 }
 FUNC_1(VAR_6->lock);
}
