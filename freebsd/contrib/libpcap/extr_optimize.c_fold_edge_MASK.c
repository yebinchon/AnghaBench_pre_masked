
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct edge {int code; TYPE_2__* pred; } ;
struct TYPE_3__ {int code; } ;
struct block {int* val; int oval; TYPE_1__ s; } ;
struct TYPE_4__ {int* val; int oval; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct block* FUNC_0 (struct block*) ;
 struct block* FUNC_1 (struct block*) ;

__attribute__((used)) static struct block *
FUNC_2(struct block *VAR_4, struct edge *VAR_5)
{
 int VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11 = VAR_5->code;

 if (VAR_11 < 0) {
  VAR_11 = -VAR_11;
  VAR_6 = 0;
 } else
  VAR_6 = 1;

 if (VAR_4->s.code != VAR_11)
  return 0;

 VAR_7 = VAR_4->val[VAR_0];
 VAR_9 = VAR_4->oval;
 VAR_8 = VAR_5->pred->val[VAR_0];
 VAR_10 = VAR_5->pred->oval;

 if (VAR_7 != VAR_8)
  return 0;

 if (VAR_9 == VAR_10)





  return VAR_6 ? FUNC_1(VAR_4) : FUNC_0(VAR_4);

 if (VAR_6 && VAR_11 == (VAR_2|VAR_1|VAR_3))
  return FUNC_0(VAR_4);

 return 0;
}
