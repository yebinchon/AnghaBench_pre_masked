
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 () ;
 char* VAR_6 ;
 int* VAR_7 ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_2(int VAR_8)
{
 char VAR_9;

 VAR_9 = VAR_8;
 if (!VAR_0) {
  VAR_9 |= VAR_7[VAR_9&0177] & 0200;
  if (VAR_2)
   VAR_9 ^= 0200;
 }
 if (!VAR_4) {
  VAR_6[VAR_5++] = VAR_9;
  if (VAR_5 >= VAR_1)
   FUNC_0();
 } else
  FUNC_1(VAR_3, &VAR_9, 1);
}
