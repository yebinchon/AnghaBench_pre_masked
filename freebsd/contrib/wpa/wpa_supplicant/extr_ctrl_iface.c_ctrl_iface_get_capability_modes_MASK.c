
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_driver_capa {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,char*,char*) ;
 scalar_t__ FUNC_1 (int,int) ;
 size_t FUNC_2 (char*,char*,size_t) ;

__attribute__((used)) static int FUNC_3(int VAR_3, char *VAR_4,
        struct wpa_driver_capa *VAR_5,
        char *VAR_6, size_t VAR_7)
{
 int VAR_8;
 char *VAR_9, *VAR_10;
 size_t VAR_11;

 VAR_9 = VAR_6;
 VAR_10 = VAR_9 + VAR_7;

 if (VAR_3 < 0) {
  if (VAR_4)
   return 0;
  VAR_11 = FUNC_2(VAR_6, "IBSS AP", VAR_7);
  if (VAR_11 >= VAR_7)
   return -1;
  return VAR_11;
 }

 if (VAR_5->flags & VAR_1) {
  VAR_8 = FUNC_0(VAR_9, VAR_10 - VAR_9, "%sIBSS",
      VAR_9 == VAR_6 ? "" : " ");
  if (FUNC_1(VAR_10 - VAR_9, VAR_8))
   return VAR_9 - VAR_6;
  VAR_9 += VAR_8;
 }

 if (VAR_5->flags & VAR_0) {
  VAR_8 = FUNC_0(VAR_9, VAR_10 - VAR_9, "%sAP",
      VAR_9 == VAR_6 ? "" : " ");
  if (FUNC_1(VAR_10 - VAR_9, VAR_8))
   return VAR_9 - VAR_6;
  VAR_9 += VAR_8;
 }
 return VAR_9 - VAR_6;
}
