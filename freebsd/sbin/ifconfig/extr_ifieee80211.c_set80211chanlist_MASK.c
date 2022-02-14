
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211req_chanlist {int ic_channels; } ;
struct afswtch {int dummy; } ;
typedef int chanlist ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 char* FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct ieee80211req_chanlist*,int ,int) ;
 int FUNC_6 (int,int ,int ,int,struct ieee80211req_chanlist*) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (char*,char*,int*,int*) ;
 char* FUNC_9 (char*,char) ;
 int FUNC_10 (char*,char const*) ;
 scalar_t__ FUNC_11 (char const*) ;

__attribute__((used)) static void
FUNC_12(const char *VAR_2, int VAR_3, int VAR_4, const struct afswtch *VAR_5)
{
 struct ieee80211req_chanlist VAR_6;
 char *VAR_7, *VAR_8, *VAR_9;

 VAR_7 = FUNC_4(FUNC_11(VAR_2) + 1);
 if (VAR_7 == ((void*)0))
  FUNC_0(1, "malloc failed");
 FUNC_10(VAR_7, VAR_2);
 FUNC_5(&VAR_6, 0, sizeof(VAR_6));
 VAR_8 = VAR_7;
 for (;;) {
  int VAR_10, VAR_11, VAR_12, VAR_13;

  VAR_9 = FUNC_9(VAR_8, ',');
  if (VAR_9 != ((void*)0))
   *VAR_9++ = '\0';
  switch (FUNC_8(VAR_8, "%u-%u", &VAR_10, &VAR_11)) {
  case 1:
   if (VAR_10 > VAR_0)
    FUNC_0(-1, "channel %u out of range, max %u",
     VAR_10, VAR_0);
   FUNC_7(VAR_6.ic_channels, VAR_10);
   break;
  case 2:
   if (VAR_10 > VAR_0)
    FUNC_0(-1, "channel %u out of range, max %u",
     VAR_10, VAR_0);
   if (VAR_11 > VAR_0)
    FUNC_0(-1, "channel %u out of range, max %u",
     VAR_11, VAR_0);
   if (VAR_10 > VAR_11)
    FUNC_0(-1, "void channel range, %u > %u",
     VAR_10, VAR_11);
   for (VAR_12 = VAR_10; VAR_12 <= VAR_11; VAR_12++)
    FUNC_7(VAR_6.ic_channels, VAR_12);
   break;
  }
  if (VAR_9 == ((void*)0))
   break;
  VAR_13 = *VAR_9;
  while (FUNC_3(VAR_13))
   VAR_9++;
  if (!FUNC_2(VAR_13))
   break;
  VAR_8 = VAR_9;
 }
 FUNC_6(VAR_4, VAR_1, 0, sizeof(VAR_6), &VAR_6);
 FUNC_1(VAR_7);
}
