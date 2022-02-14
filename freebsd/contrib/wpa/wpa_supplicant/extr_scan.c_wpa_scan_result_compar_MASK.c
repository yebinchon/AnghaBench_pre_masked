
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_scan_res {int caps; int flags; int snr; int level; scalar_t__ est_throughput; int qual; int freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int * FUNC_3 (struct wpa_scan_res*,int ) ;
 int * FUNC_4 (struct wpa_scan_res*,int ) ;

__attribute__((used)) static int FUNC_5(const void *VAR_5, const void *VAR_6)
{

 struct wpa_scan_res **VAR_7 = (void *) VAR_5;
 struct wpa_scan_res **VAR_8 = (void *) VAR_6;
 struct wpa_scan_res *VAR_9 = *VAR_7;
 struct wpa_scan_res *VAR_10 = *VAR_8;
 int VAR_11, VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16;


 VAR_11 = FUNC_4(VAR_9, VAR_3) != ((void*)0) ||
  FUNC_3(VAR_9, VAR_2) != ((void*)0);
 VAR_12 = FUNC_4(VAR_10, VAR_3) != ((void*)0) ||
  FUNC_3(VAR_10, VAR_2) != ((void*)0);

 if (VAR_12 && !VAR_11)
  return 1;
 if (!VAR_12 && VAR_11)
  return -1;


 if ((VAR_9->caps & VAR_1) == 0 &&
     (VAR_10->caps & VAR_1))
  return 1;
 if ((VAR_9->caps & VAR_1) &&
     (VAR_10->caps & VAR_1) == 0)
  return -1;

 if (VAR_9->flags & VAR_10->flags & VAR_4) {
  VAR_15 = VAR_9->snr;
  VAR_13 = VAR_9->snr < VAR_0 ? VAR_9->snr : VAR_0;
  VAR_16 = VAR_10->snr;
  VAR_14 = VAR_10->snr < VAR_0 ? VAR_10->snr : VAR_0;
 } else {


  VAR_13 = VAR_15 = VAR_9->level;
  VAR_14 = VAR_16 = VAR_10->level;
 }


 if (VAR_13 && VAR_14 && FUNC_2(VAR_14 - VAR_13) < 7) {
  if (VAR_9->est_throughput != VAR_10->est_throughput)
   return (int) VAR_10->est_throughput -
    (int) VAR_9->est_throughput;
 }
 if ((VAR_13 && VAR_14 && FUNC_2(VAR_14 - VAR_13) < 5) ||
     (VAR_9->qual && VAR_10->qual && FUNC_2(VAR_10->qual - VAR_9->qual) < 10)) {
  if (FUNC_0(VAR_9->freq) ^ FUNC_0(VAR_10->freq))
   return FUNC_0(VAR_9->freq) ? -1 : 1;
 }




 if (VAR_16 == VAR_15)
  return VAR_10->qual - VAR_9->qual;
 return VAR_16 - VAR_15;

}
