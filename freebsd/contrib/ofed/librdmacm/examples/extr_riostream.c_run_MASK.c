
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ option; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,char*,char*,char*,char*,char*,char*,char*) ;
 int FUNC_7 (int ) ;
 int VAR_8 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 scalar_t__ VAR_9 ;
 TYPE_1__* VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_12(void)
{
 int VAR_12, VAR_13 = 0;

 VAR_2 = FUNC_4(!VAR_3 ? VAR_10[VAR_1 - 1].size : VAR_11);
 if (!VAR_2) {
  FUNC_5("malloc");
  return -1;
 }

 if (!VAR_4) {
  VAR_13 = FUNC_11();
  if (VAR_13)
   goto free;
 }

 FUNC_6("%-10s%-8s%-8s%-8s%-8s%8s %10s%13s\n",
        "name", "bytes", "xfers", "iters", "total", "time", "Gb/sec", "usec/xfer");
 if (!VAR_3) {
  VAR_7 = VAR_6;
  VAR_13 = VAR_4 ? FUNC_0() : FUNC_10();
  if (VAR_13)
   goto free;

  for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
   if (VAR_10[VAR_12].option > VAR_9)
    continue;
   FUNC_3(VAR_10[VAR_12].size);
   FUNC_9();
  }
  FUNC_8(VAR_8, VAR_0);
  FUNC_7(VAR_8);

  VAR_7 = VAR_5;
  VAR_13 = VAR_4 ? FUNC_0() : FUNC_10();
  if (VAR_13)
   goto free;
  for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
   if (VAR_10[VAR_12].option > VAR_9)
    continue;
   FUNC_2(VAR_10[VAR_12].size);
   FUNC_9();
  }
 } else {
  VAR_13 = VAR_4 ? FUNC_0() : FUNC_10();
  if (VAR_13)
   goto free;

  VAR_13 = FUNC_9();
 }

 FUNC_8(VAR_8, VAR_0);
 FUNC_7(VAR_8);
free:
 FUNC_1(VAR_2);
 return VAR_13;
}
