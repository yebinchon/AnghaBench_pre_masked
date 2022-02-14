
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_thread_data {int opcode; int* mutexes; size_t opdata; int bkl; void* event; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 () ;
 int * VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int VAR_4 ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct test_thread_data *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8, VAR_9 = -VAR_1;

 switch(VAR_5->opcode) {

 case 132:
  return 0;

 case 136:
  VAR_5->mutexes[VAR_5->opdata] = 1;
  VAR_5->event = FUNC_0(1, &VAR_4);
  return 0;

 case 131:
  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
   if (VAR_5->mutexes[VAR_7] == 4) {
    FUNC_5(&VAR_3[VAR_7]);
    VAR_5->mutexes[VAR_7] = 0;
   }
  }

  if (!VAR_6 && VAR_5->bkl == 4) {
   FUNC_6();
   VAR_5->bkl = 0;
  }
  return 0;

 case 130:
  FUNC_1(&VAR_4, 0);
  return 0;

 default:
  if (VAR_6)
   return VAR_9;
 }

 switch(VAR_5->opcode) {

 case 138:
 case 133:
  VAR_8 = VAR_5->opdata;
  if (VAR_8 < 0 || VAR_8 >= VAR_2)
   return VAR_9;

  VAR_5->mutexes[VAR_8] = 1;
  VAR_5->event = FUNC_0(1, &VAR_4);
  FUNC_3(&VAR_3[VAR_8]);
  VAR_5->event = FUNC_0(1, &VAR_4);
  VAR_5->mutexes[VAR_8] = 4;
  return 0;

 case 135:
 case 134:
  VAR_8 = VAR_5->opdata;
  if (VAR_8 < 0 || VAR_8 >= VAR_2)
   return VAR_9;

  VAR_5->mutexes[VAR_8] = 1;
  VAR_5->event = FUNC_0(1, &VAR_4);
  VAR_9 = FUNC_4(&VAR_3[VAR_8], 0);
  VAR_5->event = FUNC_0(1, &VAR_4);
  VAR_5->mutexes[VAR_8] = VAR_9 ? 0 : 4;
  return VAR_9 ? -VAR_0 : 0;

 case 129:
  VAR_8 = VAR_5->opdata;
  if (VAR_8 < 0 || VAR_8 >= VAR_2 || VAR_5->mutexes[VAR_8] != 4)
   return VAR_9;

  VAR_5->event = FUNC_0(1, &VAR_4);
  FUNC_5(&VAR_3[VAR_8]);
  VAR_5->event = FUNC_0(1, &VAR_4);
  VAR_5->mutexes[VAR_8] = 0;
  return 0;

 case 137:
  if (VAR_5->bkl)
   return 0;
  VAR_5->bkl = 1;
  FUNC_2();
  VAR_5->bkl = 4;
  return 0;

 case 128:
  if (VAR_5->bkl != 4)
   break;
  FUNC_6();
  VAR_5->bkl = 0;
  return 0;

 default:
  break;
 }
 return VAR_9;
}
