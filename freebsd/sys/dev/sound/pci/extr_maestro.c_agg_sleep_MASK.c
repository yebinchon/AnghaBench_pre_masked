
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agg_info {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct agg_info*,int *,int ,char const*,int) ;

__attribute__((used)) static void
FUNC_1(struct agg_info *VAR_2, const char *VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = VAR_4 * VAR_1 / 1000;
 if (VAR_5 == 0)
  VAR_5 = 1;
 FUNC_0(VAR_2, &VAR_2->lock, VAR_0, VAR_3, VAR_5);
}
