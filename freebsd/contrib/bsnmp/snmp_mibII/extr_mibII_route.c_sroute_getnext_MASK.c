
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct sroute {scalar_t__* index; } ;
struct asn_oid {int len; scalar_t__* subs; } ;


 scalar_t__ VAR_0 ;
 struct sroute* FUNC_0 (struct sroute*,int ) ;
 struct sroute* FUNC_1 (int ,int *) ;
 struct sroute* FUNC_2 (struct sroute*,int ) ;
 struct sroute* FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (struct sroute*,struct sroute*) ;
 int VAR_2 ;

__attribute__((used)) static struct sroute *
FUNC_5(struct asn_oid *VAR_3, u_int VAR_4)
{
 u_int VAR_5;
 int VAR_6;
 struct sroute VAR_7;
 struct sroute *VAR_8;
 struct sroute *VAR_9;





 if (VAR_3->len == VAR_4)
  return (FUNC_1(VAR_2, &VAR_2));





 if (VAR_3->len < VAR_4 + 13) {
  for (VAR_5 = VAR_4; VAR_5 < VAR_3->len; VAR_5++)
   if (VAR_3->subs[VAR_5] != 0)
    break;
  if (VAR_5 == VAR_3->len)
   return (FUNC_1(VAR_2, &VAR_2));






  for (VAR_5 = VAR_3->len; VAR_5 < VAR_4 + 13; VAR_5++)
   VAR_3->subs[VAR_5] = 0;

  for (VAR_5 = VAR_4 + 13 - 1; VAR_5 >= VAR_4; VAR_5--) {
   if (VAR_3->subs[VAR_5] != 0) {
    VAR_3->subs[VAR_5]--;
    break;
   }
   VAR_3->subs[VAR_5] = VAR_0;
  }
  VAR_3->len = VAR_4 + 13;
 }


 for (VAR_5 = VAR_4; VAR_5 < VAR_4 + 13; VAR_5++)
  VAR_7.index[VAR_5 - VAR_4] = VAR_3->subs[VAR_5];


 VAR_8 = ((void*)0);
 VAR_9 = FUNC_3(&VAR_2);

 while (VAR_9 != ((void*)0)) {
  VAR_6 = FUNC_4(&VAR_7, VAR_9);
  if (VAR_6 >= 0) {


   VAR_9 = FUNC_2(VAR_9, VAR_1);
   continue;
  }



  if (VAR_8 == ((void*)0) || FUNC_4(VAR_9, VAR_8) < 0)

   VAR_8 = VAR_9;

  VAR_9 = FUNC_0(VAR_9, VAR_1);
 }
 return (VAR_8);
}
