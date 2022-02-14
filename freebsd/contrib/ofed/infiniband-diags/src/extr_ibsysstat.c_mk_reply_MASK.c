
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* model; char* mhz; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;



 TYPE_1__* VAR_0 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int) ;
 int VAR_1 ;
 int FUNC_4 (char*,int,char*,...) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(int VAR_2, void *VAR_3, int VAR_4)
{
 char *VAR_5 = VAR_3;
 int VAR_6, VAR_7, VAR_8 = 0;

 switch (VAR_2) {
 case 128:
  break;
 case 129:
  if (FUNC_3(VAR_5, VAR_4) < 0)
   FUNC_4(VAR_5, VAR_4, "?hostname?");
  VAR_5[VAR_4 - 1] = 0;
  if ((VAR_6 = FUNC_5(VAR_5)) >= VAR_4 - 1) {
   VAR_8 = VAR_4;
   break;
  }
  VAR_5[VAR_6] = '.';
  VAR_5 += VAR_6 + 1;
  VAR_4 -= VAR_6 + 1;
  VAR_8 += VAR_6 + 1;
  if (FUNC_2(VAR_5, VAR_4) < 0)
   FUNC_4(VAR_5, VAR_4, "?domainname?");
  if ((VAR_6 = FUNC_5(VAR_5)) == 0)
   VAR_5[-1] = 0;
  else
   VAR_8 += VAR_6;
  break;
 case 130:
  VAR_5[0] = '\0';
  for (VAR_7 = 0; VAR_7 < VAR_1 && VAR_4 > 0; VAR_7++) {
   VAR_6 = FUNC_4(VAR_5, VAR_4, "cpu %d: model %s MHZ %s\n",
         VAR_7, VAR_0[VAR_7].model, VAR_0[VAR_7].mhz);
   if (VAR_6 >= VAR_4) {
    FUNC_1("cpuinfo truncated");
    VAR_8 = VAR_4;
    break;
   }
   VAR_4 -= VAR_6;
   VAR_5 += VAR_6;
   VAR_8 += VAR_6;
  }
  VAR_8++;
  break;
 default:
  FUNC_0("unknown attr %d", VAR_2);
 }
 return VAR_8;
}
