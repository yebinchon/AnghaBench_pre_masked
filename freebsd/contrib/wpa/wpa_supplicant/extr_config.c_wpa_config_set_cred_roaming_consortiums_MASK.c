
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_cred {unsigned int num_roaming_consortiums; int roaming_consortiums_len; int roaming_consortiums; } ;
typedef int roaming_consortiums_len ;
typedef int roaming_consortiums ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,int *,size_t) ;
 int FUNC_1 (int ,size_t*,int) ;
 int FUNC_2 (size_t*,int ,int) ;
 char* FUNC_3 (char const*,char) ;
 size_t FUNC_4 (char const*) ;
 int FUNC_5 (int ,char*,...) ;

__attribute__((used)) static int FUNC_6(struct wpa_cred *VAR_3,
         const char *VAR_4)
{
 u8 VAR_5[VAR_0][VAR_1];
 size_t VAR_6[VAR_0];
 unsigned int VAR_7 = 0;
 const char *VAR_8, *VAR_9;
 size_t VAR_10;

 FUNC_2(VAR_5, 0, sizeof(VAR_5));
 FUNC_2(VAR_6, 0, sizeof(VAR_6));

 for (VAR_8 = VAR_4;;) {
  VAR_9 = FUNC_3(VAR_8, ',');
  VAR_10 = VAR_9 ? (size_t) (VAR_9 - VAR_8) : FUNC_4(VAR_8);
  if (!VAR_9 && VAR_10 == 0)
   break;
  if (VAR_10 == 0 || (VAR_10 & 1) != 0 ||
      VAR_10 / 2 > VAR_1 ||
      FUNC_0(VAR_8,
          VAR_5[VAR_7],
          VAR_10 / 2) < 0) {
   FUNC_5(VAR_2,
       "Invalid roaming_consortiums entry: %s",
       VAR_8);
   return -1;
  }
  VAR_6[VAR_7] = VAR_10 / 2;
  VAR_7++;

  if (!VAR_9)
   break;

  if (VAR_7 >= VAR_0) {
   FUNC_5(VAR_2,
       "Too many roaming_consortiums OIs");
   return -1;
  }

  VAR_8 = VAR_9 + 1;
 }

 FUNC_1(VAR_3->roaming_consortiums, VAR_5,
    sizeof(VAR_5));
 FUNC_1(VAR_3->roaming_consortiums_len, VAR_6,
    sizeof(VAR_6));
 VAR_3->num_roaming_consortiums = VAR_7;

 return 0;
}
