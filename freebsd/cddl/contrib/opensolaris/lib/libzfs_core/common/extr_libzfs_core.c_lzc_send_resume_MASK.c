
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
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,char const*) ;
 int FUNC_3 (int *,char*,int ) ;
 int * FUNC_4 () ;
 int FUNC_5 (int ,char const*,int *,int *) ;
 int FUNC_6 (int *) ;

int
FUNC_7(const char *VAR_4, const char *VAR_5, int VAR_6,
    enum lzc_send_flags VAR_7, uint64_t VAR_8, uint64_t VAR_9)
{
 nvlist_t *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_4();
 FUNC_1(VAR_10, "fd", VAR_6);
 if (VAR_5 != ((void*)0))
  FUNC_2(VAR_10, "fromsnap", VAR_5);
 if (VAR_7 & VAR_2)
  FUNC_0(VAR_10, "largeblockok");
 if (VAR_7 & VAR_1)
  FUNC_0(VAR_10, "embedok");
 if (VAR_7 & VAR_0)
  FUNC_0(VAR_10, "compressok");
 if (VAR_8 != 0 || VAR_9 != 0) {
  FUNC_3(VAR_10, "resume_object", VAR_8);
  FUNC_3(VAR_10, "resume_offset", VAR_9);
 }
 VAR_11 = FUNC_5(VAR_3, VAR_4, VAR_10, ((void*)0));
 FUNC_6(VAR_10);
 return (VAR_11);
}
