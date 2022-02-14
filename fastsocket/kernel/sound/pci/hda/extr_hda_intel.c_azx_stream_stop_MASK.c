
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct azx_dev {int index; } ;
struct azx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct azx*,int ) ;
 int FUNC_1 (struct azx*,struct azx_dev*) ;
 int FUNC_2 (struct azx*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct azx *VAR_1, struct azx_dev *VAR_2)
{
 FUNC_1(VAR_1, VAR_2);

 FUNC_2(VAR_1, VAR_0,
     FUNC_0(VAR_1, VAR_0) & ~(1 << VAR_2->index));
}
