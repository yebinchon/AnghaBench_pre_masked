
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tr_info {int type; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct tr_info*,int ,int,int) ;

__attribute__((used)) static int
FUNC_1(struct tr_info *VAR_10)
{
 switch (VAR_10->type) {
 case 130:
  FUNC_0(VAR_10, VAR_1, 0, 4);
  FUNC_0(VAR_10, VAR_0, VAR_2, 4);
  break;
 case 129:
  FUNC_0(VAR_10, VAR_4, VAR_3, 4);
  break;
 case 128:
  FUNC_0(VAR_10, VAR_6, VAR_5, 4);
  break;
 }

 FUNC_0(VAR_10, VAR_9, VAR_8 | VAR_7, 4);
 return 0;
}
