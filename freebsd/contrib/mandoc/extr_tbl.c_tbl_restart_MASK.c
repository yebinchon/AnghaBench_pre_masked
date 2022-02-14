
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tbl_node {scalar_t__ part; int line; int pos; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int,int,char*) ;

void
FUNC_1(int VAR_3, int VAR_4, struct tbl_node *VAR_5)
{
 if (VAR_5->part == VAR_1)
  FUNC_0(VAR_0, VAR_3, VAR_4, "T&");

 VAR_5->part = VAR_2;
 VAR_5->line = VAR_3;
 VAR_5->pos = VAR_4;
}
