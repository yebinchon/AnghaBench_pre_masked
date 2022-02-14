
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int * mpu_intr; scalar_t__ mpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct sc_info*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct sc_info *VAR_9)
{

 FUNC_0(VAR_9, VAR_6,
   VAR_1 |
   VAR_3 |
   VAR_7);
 FUNC_0(VAR_9, VAR_4,
   VAR_0 | VAR_2);
 FUNC_0(VAR_9, VAR_5, VAR_8);

 if( VAR_9->mpu )
  VAR_9->mpu_intr = ((void*)0);
}
