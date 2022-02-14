
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mss_info {int conf_rid; int * conf_base; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ,int ,int*,int,int,int,int ) ;
 int FUNC_1 (int ,int ,int,int *) ;
 int FUNC_2 (struct mss_info*,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static char *
FUNC_5(device_t VAR_4, struct mss_info *VAR_5)
{
     static int VAR_6[] = {0x370, 0x310, 0x538};
     int VAR_7, VAR_8, VAR_9, VAR_10;
     static char *VAR_11[] = {
  ((void*)0),
  "OPL3-SA2 (YMF711)",
  "OPL3-SA3 (YMF715)",
  "OPL3-SA3 (YMF715)",
  "OPL3-SAx (YMF719)",
  "OPL3-SAx (YMF719)",
  "OPL3-SAx (YMF719)",
  "OPL3-SAx (YMF719)",
     };

     for (VAR_7 = 0; VAR_7 < 3; VAR_7++) {
  VAR_5->conf_rid = 1;
  VAR_5->conf_base = FUNC_0(VAR_4,
        VAR_3,
        &VAR_5->conf_rid,
        VAR_6[VAR_7], VAR_6[VAR_7] + 1, 2,
        VAR_2);
  if (!VAR_5->conf_base) return 0;


  VAR_8 = FUNC_3(VAR_5->conf_base, 0);
  FUNC_4(VAR_5->conf_base, 0, VAR_0);
  VAR_9 = (FUNC_3(VAR_5->conf_base, 0) == VAR_0)? 1 : 0;
  FUNC_4(VAR_5->conf_base, 0, VAR_8);
  if (!VAR_9) {
       FUNC_1(VAR_4, VAR_3,
           VAR_5->conf_rid, VAR_5->conf_base);
       VAR_5->conf_base = ((void*)0);
       continue;
  }
  VAR_10 = FUNC_2(VAR_5, VAR_1) & 0x07;
  return VAR_11[VAR_10];
     }
     return ((void*)0);
}
