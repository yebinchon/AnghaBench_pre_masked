
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_altq {scalar_t__ qid; } ;
struct pfioc_altq {unsigned int nr; struct pf_altq altq; int version; } ;
typedef int pfioc ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct pf_altq*,int ) ;
 int VAR_5 ;
 int FUNC_1 (struct pfioc_altq*,int) ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_3 (int,int ,struct pfioc_altq*) ;
 int FUNC_4 (char*,int ) ;
 struct pf_altq* FUNC_5 (int,int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(void)
{
 struct pfioc_altq VAR_8;
 struct pf_altq *VAR_9;
 int VAR_10;
 unsigned int VAR_11;
 static int VAR_12 = 0;

 if (VAR_12)
  return;
 VAR_12 = 1;
 VAR_10 = FUNC_4("/dev/pf", VAR_3);
 if (VAR_10 == -1) {
  FUNC_6("altq support opening pf(4) control device");
  return;
 }
 FUNC_1(&VAR_8, sizeof(VAR_8));
 VAR_8.version = VAR_4;
 if (FUNC_3(VAR_10, VAR_1, &VAR_8) != 0) {
  FUNC_6("altq support getting queue list");
  FUNC_2(VAR_10);
  return;
 }
 VAR_11 = VAR_8.nr;
 for (VAR_8.nr = 0; VAR_8.nr < VAR_11; VAR_8.nr++) {
  if (FUNC_3(VAR_10, VAR_0, &VAR_8) != 0) {
   if (VAR_7 == VAR_2)
    break;
   FUNC_6("altq support getting queue list");
   FUNC_2(VAR_10);
   return;
  }
  if (VAR_8.altq.qid == 0)
   continue;
  VAR_9 = FUNC_5(1, sizeof(*VAR_9));
  *VAR_9 = VAR_8.altq;
  FUNC_0(&VAR_5, VAR_9, VAR_6);
 }
 FUNC_2(VAR_10);
}
