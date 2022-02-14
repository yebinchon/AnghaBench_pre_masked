
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p2p_data {int min_disc_int; int max_disc_int; int max_disc_tu; } ;


 int FUNC_0 (struct p2p_data*,char*,int,int,int) ;

int FUNC_1(struct p2p_data *VAR_0, int VAR_1, int VAR_2,
       int VAR_3)
{
 if (VAR_1 > VAR_2 || VAR_1 < 0 || VAR_2 < 0)
  return -1;

 VAR_0->min_disc_int = VAR_1;
 VAR_0->max_disc_int = VAR_2;
 VAR_0->max_disc_tu = VAR_3;
 FUNC_0(VAR_0, "Set discoverable interval: min=%d max=%d max_tu=%d",
  VAR_1, VAR_2, VAR_3);

 return 0;
}
