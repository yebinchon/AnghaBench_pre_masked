
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(void)
{
 int VAR_4;

 VAR_4 = VAR_2;
 if (VAR_4 >= 0) {
  VAR_2 = -1;
 } else {
  VAR_4 = FUNC_0(VAR_1);
  if (VAR_4 == VAR_0) {
   VAR_4 = -1;
  }
 }
 if (VAR_4 == '\r') {
  VAR_4 = FUNC_0(VAR_1);
  if (VAR_4 == VAR_0) {
   VAR_4 = -1;
  }
  if (VAR_4 != '\n') {
   VAR_2 = VAR_4;
   VAR_4 = '\n';
  }
 }
 if (VAR_4 == '\n') {
  VAR_3 ++;
 }
 return VAR_4;
}
