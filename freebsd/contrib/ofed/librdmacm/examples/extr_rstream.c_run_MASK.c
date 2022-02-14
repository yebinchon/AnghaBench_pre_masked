
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
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,char*,char*,char*,char*,char*,char*,char*) ;
 int VAR_9 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 scalar_t__ VAR_10 ;
 TYPE_1__* VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_12 (scalar_t__,int *,int ) ;

__attribute__((used)) static int FUNC_13(void)
{
 int VAR_14, VAR_15 = 0;

 VAR_2 = FUNC_4(!VAR_3 ? VAR_11[VAR_1 - 1].size : VAR_12);
 if (!VAR_2) {
  FUNC_5("malloc");
  return -1;
 }

 if (!VAR_4) {
  VAR_15 = FUNC_11();
  if (VAR_15)
   goto free;
 }

 FUNC_6("%-10s%-8s%-8s%-8s%-8s%8s %10s%13s\n",
        "name", "bytes", "xfers", "iters", "total", "time", "Gb/sec", "usec/xfer");
 if (!VAR_3) {
  VAR_8 = VAR_7;
  VAR_15 = VAR_4 ? FUNC_0() : FUNC_10();
  if (VAR_15)
   goto free;

  for (VAR_14 = 0; VAR_14 < VAR_1 && !VAR_5; VAR_14++) {
   if (VAR_11[VAR_14].option > VAR_10)
    continue;
   FUNC_3(VAR_11[VAR_14].size);
   FUNC_9();
  }
  if (VAR_5)
   FUNC_12(VAR_5, ((void*)0), 0);
  else
   FUNC_8(VAR_9, VAR_0);
  FUNC_7(VAR_9);

  if (!VAR_4 && VAR_13 && !VAR_5)
   goto free;

  VAR_8 = VAR_6;
  VAR_15 = VAR_4 ? FUNC_0() : FUNC_10();
  if (VAR_15)
   goto free;
  for (VAR_14 = 0; VAR_14 < VAR_1 && !VAR_5; VAR_14++) {
   if (VAR_11[VAR_14].option > VAR_10)
    continue;
   FUNC_2(VAR_11[VAR_14].size);
   FUNC_9();
  }
 } else {
  VAR_15 = VAR_4 ? FUNC_0() : FUNC_10();
  if (VAR_15)
   goto free;

  if (!VAR_5)
   VAR_15 = FUNC_9();
 }

 if (VAR_5)
  FUNC_12(VAR_5, ((void*)0), 0);
 else
  FUNC_8(VAR_9, VAR_0);
 FUNC_7(VAR_9);
free:
 FUNC_1(VAR_2);
 return VAR_15;
}
