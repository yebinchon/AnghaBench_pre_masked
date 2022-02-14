
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_0 (char*,int *,int ) ;
 int FUNC_1 (int ,char*,unsigned long) ;

__attribute__((used)) static int FUNC_2(void *VAR_6, int VAR_7, char *VAR_8)
{
 unsigned long VAR_9;
 switch (VAR_7) {
 case 0:
  VAR_4 = VAR_8;
  break;
 case 'f':
  VAR_3 = 1;
  break;
 case 't':
  VAR_9 = FUNC_0(VAR_8, ((void*)0), 0);
  if (VAR_9 >= VAR_0) {
   FUNC_1(VAR_1,
    "Invalid retry rate specified: %lu s\n",
    VAR_9);
  } else {
   VAR_2 = (int)VAR_9;
  }
  break;
 case 'r':
  VAR_9 = FUNC_0(VAR_8, ((void*)0), 0);
  if (VAR_9 >= VAR_0) {
   FUNC_1(VAR_1,
    "Invalid retry count specified: %lu\n",
    VAR_9);
  } else {
   VAR_5 = (int)VAR_9;
  }
  break;
 default:
  return -1;
 }
 return 0;
}
