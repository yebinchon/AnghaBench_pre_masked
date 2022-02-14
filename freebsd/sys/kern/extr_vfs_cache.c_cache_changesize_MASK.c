
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ u_long ;
struct nchashhead {int dummy; } ;
struct namecache {int nc_dvp; int nc_nlen; int nc_name; } ;


 struct namecache* FUNC_0 (struct nchashhead*) ;
 int FUNC_1 (int ,struct namecache*,int ) ;
 int FUNC_2 (struct namecache*,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (struct nchashhead*,int ) ;
 struct nchashhead* FUNC_11 (int,int ,scalar_t__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct nchashhead* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_12(int VAR_7)
{
 struct nchashhead *VAR_8, *VAR_9;
 u_long VAR_10, VAR_11;
 struct namecache *VAR_12;
 uint32_t VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_14 = VAR_7 * VAR_5;
 VAR_7 = FUNC_7(VAR_7 * 2);
 if (VAR_7 < VAR_6)
  VAR_7 = VAR_6;

 VAR_8 = FUNC_11(VAR_7, VAR_0, &VAR_10);

 if (VAR_2 == VAR_10) {
  FUNC_10(VAR_8, VAR_0);
  return;
 }





 FUNC_6();
 FUNC_5();
 VAR_9 = VAR_3;
 VAR_11 = VAR_2;
 VAR_3 = VAR_8;
 VAR_2 = VAR_10;
 for (VAR_15 = 0; VAR_15 <= VAR_11; VAR_15++) {
  while ((VAR_12 = FUNC_0(&VAR_9[VAR_15])) != ((void*)0)) {
   VAR_13 = FUNC_4(VAR_12->nc_name, VAR_12->nc_nlen,
       VAR_12->nc_dvp);
   FUNC_2(VAR_12, VAR_1);
   FUNC_1(FUNC_3(VAR_13), VAR_12, VAR_1);
  }
 }
 VAR_4 = VAR_14;
 FUNC_8();
 FUNC_9();
 FUNC_10(VAR_9, VAR_0);
}
