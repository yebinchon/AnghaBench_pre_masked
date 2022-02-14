
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,unsigned int) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,void*) ;

int
FUNC_2(int VAR_4, unsigned int VAR_5)
{
 int VAR_6;

 if (VAR_4 < 0) {
  VAR_3 = VAR_0;
  return -1;
 }

 VAR_6 = FUNC_1(VAR_2, VAR_1,
     (void *)(intptr_t)VAR_4);
 if (VAR_6 == -1) {
  switch (VAR_3) {
  case 128:
   VAR_6 = 0;
   break;
  }
 }
 if (VAR_5 && VAR_6 == 0)
     VAR_6 = FUNC_0(VAR_4, VAR_5);

 return (VAR_6);
}
