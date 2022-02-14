
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct parse {int dummy; } ;
struct old_info_sys_stats {int dummy; } ;
struct info_sys_stats {int limitrejected; int badauth; int badlength; int denied; int unknownversion; int oldversionpkt; int newversionpkt; int processed; int received; int timereset; int timeup; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (size_t,int *) ;
 int FUNC_1 (size_t,int) ;
 int FUNC_2 (scalar_t__,int ,int ,int ,int ,char*,size_t*,size_t*,void*,int ,int) ;
 int FUNC_3 (int *,char*,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(
 struct parse *VAR_5,
 FILE *VAR_6
 )
{
 struct info_sys_stats *VAR_7;
 size_t VAR_8;
 size_t VAR_9;
 int VAR_10;

again:
 VAR_10 = FUNC_2(VAR_4, VAR_3, 0, 0, 0, (char *)((void*)0),
        &VAR_8, &VAR_9, (void *)&VAR_7, 0,
        sizeof(struct info_sys_stats));

 if (VAR_10 == VAR_2 && VAR_4 == VAR_0) {
  VAR_4 = VAR_1;
  goto again;
 }

 if (VAR_10 != 0)
     return;

 if (!FUNC_0(VAR_8, VAR_6))
     return;

 if (VAR_9 != sizeof(struct info_sys_stats) &&
     VAR_9 != sizeof(struct old_info_sys_stats)) {

  FUNC_1(VAR_9, sizeof(struct info_sys_stats));
  return;
 }
 FUNC_3(VAR_6, "time since restart:     %lu\n",
  (u_long)FUNC_4(VAR_7->timeup));
 FUNC_3(VAR_6, "time since reset:       %lu\n",
  (u_long)FUNC_4(VAR_7->timereset));
 FUNC_3(VAR_6, "packets received:       %lu\n",
  (u_long)FUNC_4(VAR_7->received));
 FUNC_3(VAR_6, "packets processed:      %lu\n",
  (u_long)FUNC_4(VAR_7->processed));
 FUNC_3(VAR_6, "current version:        %lu\n",
  (u_long)FUNC_4(VAR_7->newversionpkt));
 FUNC_3(VAR_6, "previous version:       %lu\n",
  (u_long)FUNC_4(VAR_7->oldversionpkt));
 FUNC_3(VAR_6, "declined:               %lu\n",
  (u_long)FUNC_4(VAR_7->unknownversion));
 FUNC_3(VAR_6, "access denied:          %lu\n",
  (u_long)FUNC_4(VAR_7->denied));
 FUNC_3(VAR_6, "bad length or format:   %lu\n",
  (u_long)FUNC_4(VAR_7->badlength));
 FUNC_3(VAR_6, "bad authentication:     %lu\n",
  (u_long)FUNC_4(VAR_7->badauth));
 if (VAR_9 != sizeof(struct info_sys_stats))
     return;

 FUNC_3(VAR_6, "rate exceeded:          %lu\n",
        (u_long)FUNC_4(VAR_7->limitrejected));
}
