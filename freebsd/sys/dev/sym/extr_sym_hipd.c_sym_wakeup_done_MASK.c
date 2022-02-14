
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int ;
typedef scalar_t__ u32 ;
typedef TYPE_1__* hcb_p ;
typedef scalar_t__ ccb_p ;
struct TYPE_6__ {int dqueueget; scalar_t__* dqueue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_1__*,scalar_t__) ;
 int FUNC_5 (TYPE_1__*,scalar_t__) ;
 char* FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7 (hcb_p VAR_2)
{
 ccb_p VAR_3;
 int VAR_4, VAR_5;
 u32 VAR_6;

 FUNC_1(VAR_1);

 VAR_5 = 0;
 VAR_4 = VAR_2->dqueueget;
 while (1) {
  VAR_6 = FUNC_3(VAR_2->dqueue[VAR_4]);
  if (!VAR_6)
   break;
  VAR_2->dqueue[VAR_4] = 0;
  if ((VAR_4 = VAR_4+2) >= VAR_0*2)
   VAR_4 = 0;

  VAR_3 = FUNC_4(VAR_2, VAR_6);
  if (VAR_3) {
   FUNC_0();
   FUNC_5 (VAR_2, VAR_3);
   ++VAR_5;
  }
  else
   FUNC_2 ("%s: bad DSA (%x) in done queue.\n",
    FUNC_6(VAR_2), (u_int) VAR_6);
 }
 VAR_2->dqueueget = VAR_4;

 return VAR_5;
}
