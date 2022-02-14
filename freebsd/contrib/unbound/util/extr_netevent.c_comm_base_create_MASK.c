
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct internal_base {int base; struct internal_base* eb; int now; int secs; } ;
struct comm_base {int base; struct comm_base* eb; int now; int secs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct internal_base*) ;
 int FUNC_2 (struct internal_base*) ;
 int FUNC_3 (int,int *,int *) ;
 int FUNC_4 (int ,char const**,char const**,char const**) ;
 int FUNC_5 (int ,char*,char const*,char const*,char const*) ;

struct comm_base*
FUNC_6(int VAR_1)
{
 struct comm_base* VAR_2 = (struct comm_base*)FUNC_0(1,
  sizeof(struct comm_base));
 const char *VAR_3="event", *VAR_4="", *VAR_5="";

 if(!VAR_2)
  return ((void*)0);
 VAR_2->eb = (struct internal_base*)FUNC_0(1, sizeof(struct internal_base));
 if(!VAR_2->eb) {
  FUNC_1(VAR_2);
  return ((void*)0);
 }
 VAR_2->eb->base = FUNC_3(VAR_1, &VAR_2->eb->secs, &VAR_2->eb->now);
 if(!VAR_2->eb->base) {
  FUNC_1(VAR_2->eb);
  FUNC_1(VAR_2);
  return ((void*)0);
 }
 FUNC_2(VAR_2);
 FUNC_4(VAR_2->eb->base, &VAR_3, &VAR_4, &VAR_5);
 FUNC_5(VAR_0, "%s %s uses %s method.", VAR_3, VAR_4, VAR_5);
 return VAR_2;
}
