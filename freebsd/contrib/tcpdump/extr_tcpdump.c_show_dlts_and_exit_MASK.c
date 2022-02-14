
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pcap_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int) ;
 char* FUNC_4 (int) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (int*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int**) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_9(pcap_t *VAR_3, const char *VAR_4)
{
 int VAR_5, VAR_6;
 int *VAR_7 = 0;
 const char *VAR_8;

 VAR_5 = FUNC_8(VAR_3, &VAR_7);
 if (VAR_5 < 0)
  FUNC_0("%s", FUNC_7(VAR_3));
 else if (VAR_5 == 0 || !VAR_7)
  FUNC_0("No data link types.");
 if (VAR_2)
  (void) FUNC_2(VAR_1, "Data link types for %s %s (use option -y to set):\n",
      VAR_4,
      VAR_0 ? "when in monitor mode" : "when not in monitor mode");
 else
  (void) FUNC_2(VAR_1, "Data link types for %s (use option -y to set):\n",
      VAR_4);

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  VAR_8 = FUNC_5(VAR_7[VAR_6]);
  if (VAR_8 != ((void*)0)) {
   (void) FUNC_2(VAR_1, "  %s (%s)", VAR_8,
       FUNC_4(VAR_7[VAR_6]));




   if (!FUNC_3(VAR_7[VAR_6]))
    (void) FUNC_2(VAR_1, " (printing not supported)");
   FUNC_2(VAR_1, "\n");
  } else {
   (void) FUNC_2(VAR_1, "  DLT %d (printing not supported)\n",
       VAR_7[VAR_6]);
  }
 }



 FUNC_1(0);
}
