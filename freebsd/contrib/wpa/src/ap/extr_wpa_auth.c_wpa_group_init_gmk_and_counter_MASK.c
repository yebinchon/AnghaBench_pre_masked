
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_group {int * Counter; int * GMK; } ;
struct wpa_authenticator {unsigned long* addr; } ;
typedef int rkey ;
typedef int ptr ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,unsigned long*,int) ;
 int FUNC_1 (int *,int,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int,char*,int *,int,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int *,int) ;

__attribute__((used)) static int FUNC_6(struct wpa_authenticator *VAR_4,
       struct wpa_group *VAR_5)
{
 u8 VAR_6[VAR_0 + 8 + sizeof(unsigned long)];
 u8 VAR_7[32];
 unsigned long VAR_8;

 if (FUNC_2(VAR_5->GMK, VAR_2) < 0)
  return -1;
 FUNC_5(VAR_1, "GMK", VAR_5->GMK, VAR_2);





 FUNC_0(VAR_6, VAR_4->addr, VAR_0);
 FUNC_4(VAR_6 + VAR_0);
 VAR_8 = (unsigned long) VAR_5;
 FUNC_0(VAR_6 + VAR_0 + 8, &VAR_8, sizeof(VAR_8));




 if (FUNC_2(VAR_7, sizeof(VAR_7)) < 0)
  return -1;

 if (FUNC_3(VAR_7, sizeof(VAR_7), "Init Counter", VAR_6, sizeof(VAR_6),
       VAR_5->Counter, VAR_3) < 0)
  return -1;
 FUNC_5(VAR_1, "Key Counter",
   VAR_5->Counter, VAR_3);

 return 0;
}
