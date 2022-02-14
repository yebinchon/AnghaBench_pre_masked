
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int
FUNC_3(int VAR_8)
{
 int VAR_9;


 VAR_9 = (VAR_4 || VAR_3 || VAR_0 || VAR_8);
 VAR_7 = FUNC_0(VAR_5, VAR_9);

 if (VAR_7 == -1 && VAR_6 == VAR_2 && VAR_9)
  VAR_7 = FUNC_0(VAR_5, 0);
 if (VAR_7 == -1 && VAR_6 == VAR_1)
  return -2;
 if (VAR_7 == -1) {
  FUNC_2("can't open device %s", VAR_5);
  return -1;
 }
 if (FUNC_1() == -1) {
  FUNC_2("can't get disk parameters on %s", VAR_5);
  return -1;
 }
 return VAR_7;
}
