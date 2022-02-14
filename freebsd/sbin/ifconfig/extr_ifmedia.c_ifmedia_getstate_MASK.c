
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifmediareq {int ifm_count; int* ifm_ulist; int ifm_name; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int ) ;
 scalar_t__ FUNC_2 (int,int ,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct ifmediareq*,int ,int) ;
 int VAR_2 ;
 int FUNC_5 (int ,int ,int) ;

struct ifmediareq *
FUNC_6(int VAR_3)
{
 static struct ifmediareq *VAR_4 = ((void*)0);
 int *VAR_5;
 int VAR_6 = 1;

 if (VAR_4 == ((void*)0)) {
  VAR_4 = (struct ifmediareq *)FUNC_3(sizeof(struct ifmediareq));
  if (VAR_4 == ((void*)0))
   FUNC_0(1, "malloc");

  (void) FUNC_4(VAR_4, 0, sizeof(struct ifmediareq));
  (void) FUNC_5(VAR_4->ifm_name, VAR_2,
      sizeof(VAR_4->ifm_name));

  VAR_4->ifm_count = 0;
  VAR_4->ifm_ulist = ((void*)0);







  if (FUNC_2(VAR_3, VAR_1, (caddr_t)VAR_4) < 0) {
   VAR_6 = 0;
  }
  if (VAR_6 == 0 && FUNC_2(VAR_3, VAR_0, (caddr_t)VAR_4) < 0) {
   FUNC_0(1, "SIOCGIFMEDIA");
  }

  if (VAR_4->ifm_count == 0)
   FUNC_1(1, "%s: no media types?", VAR_2);

  VAR_5 = (int *)FUNC_3(VAR_4->ifm_count * sizeof(int));
  if (VAR_5 == ((void*)0))
   FUNC_0(1, "malloc");

  VAR_4->ifm_ulist = VAR_5;
  if (VAR_6) {
   if (FUNC_2(VAR_3, VAR_1, (caddr_t)VAR_4) < 0)
    FUNC_0(1, "SIOCGIFXMEDIA");
  } else {
   if (FUNC_2(VAR_3, VAR_0, (caddr_t)VAR_4) < 0)
    FUNC_0(1, "SIOCGIFMEDIA");
  }
 }

 return VAR_4;
}
