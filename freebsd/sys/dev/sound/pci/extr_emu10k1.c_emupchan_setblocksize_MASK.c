
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_pchinfo {int spd; int buffer; int blksz; struct sc_info* parent; } ;
struct sc_info {int timerinterval; int lock; } ;
typedef int kobj_t ;


 int FUNC_0 (struct sc_info*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static u_int32_t
FUNC_4(kobj_t VAR_0, void *VAR_1, u_int32_t VAR_2)
{
 struct sc_pchinfo *VAR_3 = VAR_1;
 struct sc_info *VAR_4 = VAR_3->parent;
 int VAR_5, VAR_6;

 VAR_3->blksz = VAR_2;
 FUNC_1(VAR_4->lock);
 FUNC_0(VAR_4);
 VAR_5 = 48000 / VAR_4->timerinterval;
 FUNC_2(VAR_4->lock);
 VAR_6 = (VAR_3->spd * FUNC_3(VAR_3->buffer)) / VAR_5;
 return VAR_2;
}
