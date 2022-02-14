
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int nvlist_t ;
typedef enum lzc_send_flags { ____Placeholder_lzc_send_flags } lzc_send_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,char const*) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int ,char const*,int *,int **) ;
 int FUNC_5 (int *) ;

int
FUNC_6(const char *VAR_4, const char *VAR_5,
    enum lzc_send_flags VAR_6, uint64_t *VAR_7)
{
 nvlist_t *VAR_8;
 nvlist_t *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_2();
 if (VAR_5 != ((void*)0))
  FUNC_1(VAR_8, "from", VAR_5);
 if (VAR_6 & VAR_2)
  FUNC_0(VAR_8, "largeblockok");
 if (VAR_6 & VAR_1)
  FUNC_0(VAR_8, "embedok");
 if (VAR_6 & VAR_0)
  FUNC_0(VAR_8, "compressok");
 VAR_10 = FUNC_4(VAR_3, VAR_4, VAR_8, &VAR_9);
 FUNC_5(VAR_8);
 if (VAR_10 == 0)
  *VAR_7 = FUNC_3(VAR_9, "space");
 FUNC_5(VAR_9);
 return (VAR_10);
}
