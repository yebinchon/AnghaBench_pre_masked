
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {char* str; int num; } ;
struct parse_events__term {int type_val; int type_term; char* config; TYPE_1__ val; int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;


 struct parse_events__term* FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct parse_events__term **VAR_2, int VAR_3,
      int VAR_4, char *VAR_5,
      char *VAR_6, u64 VAR_7)
{
 struct parse_events__term *VAR_8;

 VAR_8 = FUNC_1(sizeof(*VAR_8));
 if (!VAR_8)
  return -VAR_1;

 FUNC_0(&VAR_8->list);
 VAR_8->type_val = VAR_3;
 VAR_8->type_term = VAR_4;
 VAR_8->config = VAR_5;

 switch (VAR_3) {
 case 129:
  VAR_8->val.num = VAR_7;
  break;
 case 128:
  VAR_8->val.str = VAR_6;
  break;
 default:
  return -VAR_0;
 }

 *VAR_2 = VAR_8;
 return 0;
}
