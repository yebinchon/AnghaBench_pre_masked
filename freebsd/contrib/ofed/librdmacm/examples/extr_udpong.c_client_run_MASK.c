
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,char*,char*,char*,char*,char*,char*) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_6(void)
{
 int VAR_4, VAR_5;

 FUNC_3("%-10s%-8s%-8s%-8s%8s %10s%13s\n",
        "name", "bytes", "xfers", "total", "time", "Gb/sec", "usec/xfer");

 VAR_5 = FUNC_0();
 if (VAR_5)
  return VAR_5;

 if (!VAR_1) {
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
   FUNC_2(VAR_3[VAR_4]);
   FUNC_5();
  }
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
   FUNC_1(VAR_3[VAR_4]);
   FUNC_5();
  }
 } else {
  FUNC_5();
 }
 FUNC_4(VAR_2);

 return VAR_5;
}
