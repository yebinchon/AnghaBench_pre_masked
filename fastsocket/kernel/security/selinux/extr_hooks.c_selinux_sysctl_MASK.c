
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int ctl_table ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int,int ,int,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ,int*) ;

__attribute__((used)) static int FUNC_3(ctl_table *VAR_6, int VAR_7)
{
 int VAR_8 = 0;
 u32 VAR_9;
 u32 VAR_10, VAR_11;
 int VAR_12;

 VAR_11 = FUNC_1();

 VAR_12 = FUNC_2(VAR_6, (VAR_7 == 0001) ?
        VAR_3 : VAR_4, &VAR_10);
 if (VAR_12) {

  VAR_10 = VAR_5;
 }



 if (VAR_7 == 001) {
  VAR_8 = FUNC_0(VAR_11, VAR_10,
         VAR_3, VAR_0, ((void*)0));
 } else {
  VAR_9 = 0;
  if (VAR_7 & 004)
   VAR_9 |= VAR_1;
  if (VAR_7 & 002)
   VAR_9 |= VAR_2;
  if (VAR_9)
   VAR_8 = FUNC_0(VAR_11, VAR_10,
          VAR_4, VAR_9, ((void*)0));
 }

 return VAR_8;
}
