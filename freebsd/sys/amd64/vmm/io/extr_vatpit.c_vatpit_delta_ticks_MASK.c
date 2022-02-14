
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int frac; } ;
struct vatpit {TYPE_1__ freq_bt; } ;
struct channel {int now_bt; } ;
struct bintime {int sec; int frac; } ;


 int VAR_0 ;
 int FUNC_0 (struct bintime*,int *) ;
 int FUNC_1 (struct bintime*) ;

__attribute__((used)) static uint64_t
FUNC_2(struct vatpit *VAR_1, struct channel *VAR_2)
{
 struct bintime VAR_3;
 uint64_t VAR_4;

 FUNC_1(&VAR_3);
 FUNC_0(&VAR_3, &VAR_2->now_bt);

 VAR_4 = VAR_3.sec * VAR_0;
 VAR_4 += VAR_3.frac / VAR_1->freq_bt.frac;

 return (VAR_4);
}
