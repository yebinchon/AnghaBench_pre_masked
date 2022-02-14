
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct azx_dev {int insufficient; int index; } ;
struct azx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct azx*,int ) ;
 int FUNC_1 (struct azx_dev*,int ) ;
 int FUNC_2 (struct azx_dev*,int ,int) ;
 int FUNC_3 (struct azx*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct azx *VAR_4, struct azx_dev *VAR_5)
{



 VAR_5->insufficient = 1;


 FUNC_3(VAR_4, VAR_0,
     FUNC_0(VAR_4, VAR_0) | (1 << VAR_5->index));

 FUNC_2(VAR_5, VAR_1, FUNC_1(VAR_5, VAR_1) |
        VAR_2 | VAR_3);
}
