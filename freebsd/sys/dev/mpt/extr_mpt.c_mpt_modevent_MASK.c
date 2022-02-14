
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpt_personality {int id; int (* load ) (struct mpt_personality*) ;int (* unload ) (struct mpt_personality*) ;} ;
typedef int mpt_load_handler_t ;
typedef int module_t ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int ** FUNC_0 (struct mpt_personality*) ;
 int ** FUNC_1 (struct mpt_personality*) ;
 struct mpt_personality VAR_3 ;
 struct mpt_personality** VAR_4 ;
 int FUNC_2 (struct mpt_personality*) ;
 int FUNC_3 (struct mpt_personality*) ;

int
FUNC_4(module_t VAR_5, int VAR_6, void *VAR_7)
{
 struct mpt_personality *VAR_8;
 int VAR_9;

 VAR_8 = (struct mpt_personality *)VAR_7;

 VAR_9 = 0;
 switch (VAR_6) {
 case 131:
 {
  mpt_load_handler_t **VAR_10;
  mpt_load_handler_t **VAR_11;
  int VAR_12;

  for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
   if (VAR_4[VAR_12] == ((void*)0))
    break;
  }
  if (VAR_12 >= VAR_2) {
   VAR_9 = VAR_1;
   break;
  }
  VAR_8->id = VAR_12;
  VAR_4[VAR_12] = VAR_8;


  VAR_10 = FUNC_0(&VAR_3);
  VAR_11 = FUNC_0(VAR_8);
  while (VAR_11 <= FUNC_1(VAR_8)) {
   if (*VAR_11 == ((void*)0))
    *VAR_11 = *VAR_10;
   VAR_11++;
   VAR_10++;
  }

  VAR_9 = (VAR_8->load(VAR_8));
  if (VAR_9 != 0)
   VAR_4[VAR_12] = ((void*)0);
  break;
 }
 case 129:
  break;
 case 130:
  break;
 case 128:
  VAR_9 = VAR_8->unload(VAR_8);
  VAR_4[VAR_8->id] = ((void*)0);
  break;
 default:
  VAR_9 = VAR_0;
  break;
 }
 return (VAR_9);
}
