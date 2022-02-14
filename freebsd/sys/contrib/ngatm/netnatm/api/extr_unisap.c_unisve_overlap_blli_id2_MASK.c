
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unisve_blli_id2 {scalar_t__ proto; scalar_t__ user; } ;


 int FUNC_0 (struct unisve_blli_id2 const*,struct unisve_blli_id2 const*) ;
 scalar_t__ VAR_0 ;

int
FUNC_1(const struct unisve_blli_id2 *VAR_1,
    const struct unisve_blli_id2 *VAR_2)
{
 FUNC_0(VAR_1, VAR_2);

 return (VAR_1->proto == VAR_2->proto &&
     (VAR_1->proto != VAR_0 || VAR_1->user == VAR_2->user));
}
