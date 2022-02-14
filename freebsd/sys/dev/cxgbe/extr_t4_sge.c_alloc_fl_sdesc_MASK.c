
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_fl {int sidx; int sdesc; } ;
struct fl_sdesc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct sge_fl *VAR_3)
{

 VAR_3->sdesc = FUNC_0(VAR_3->sidx * 8 * sizeof(struct fl_sdesc), VAR_0,
     VAR_2 | VAR_1);

 return (0);
}
