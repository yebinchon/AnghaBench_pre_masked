
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int freq; } ;
struct cf_level {TYPE_1__ total_set; } ;
struct acpi_tz_softc {int tz_cooling_saved_freq; scalar_t__ tz_cooling_updated; int tz_temperature; int tz_dev; void* tz_cooling_active; } ;
typedef int * device_t ;


 int FUNC_0 (int ,int ,char*,int ,char*,int,int) ;
 int FUNC_1 (int *,struct cf_level*) ;
 int FUNC_2 (int *,struct cf_level*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,struct cf_level*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct acpi_tz_softc*) ;
 int FUNC_7 (char*) ;
 int * FUNC_8 (int ,int ) ;
 int FUNC_9 (struct cf_level*,int ) ;
 struct cf_level* FUNC_10 (int,int ,int ) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static int
FUNC_12(struct acpi_tz_softc *VAR_9, int VAR_10)
{
    device_t VAR_11;
    struct cf_level *VAR_12;
    int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;

    VAR_12 = FUNC_10(VAR_0 * sizeof(*VAR_12), VAR_7, VAR_6);
    if (VAR_12 == ((void*)0))
 return (VAR_3);





    if ((VAR_11 = FUNC_8(FUNC_7("cpufreq"), 0)) == ((void*)0)) {
 VAR_14 = VAR_4;
 goto out;
    }


    VAR_14 = FUNC_1(VAR_11, &VAR_12[0]);
    if (VAR_14)
 goto out;
    VAR_15 = VAR_12[0].total_set.freq;


    VAR_13 = VAR_0;
    VAR_14 = FUNC_2(VAR_11, VAR_12, &VAR_13);
    if (VAR_14) {
 if (VAR_14 == VAR_2)
     FUNC_11("cpufreq: need to increase CPUFREQ_MAX_LEVELS\n");
 goto out;
    }


    VAR_17 = 100 * VAR_15 / VAR_12[0].total_set.freq - VAR_10;
    if (VAR_17 < 0)
 VAR_17 = 0;
    else if (VAR_17 > 100)
 VAR_17 = 100;
    VAR_16 = VAR_12[0].total_set.freq * VAR_17 / 100;

    if (VAR_16 < VAR_15) {

 for (VAR_18 = 0; VAR_18 < VAR_13; VAR_18++)
     if (VAR_12[VAR_18].total_set.freq <= VAR_16)
  break;


 if (VAR_18 == VAR_13)
     VAR_18--;
    } else {

 if (!VAR_9->tz_cooling_updated) {
     VAR_9->tz_cooling_active = VAR_5;
     goto out;
 }


 if (VAR_16 > VAR_9->tz_cooling_saved_freq)
     VAR_16 = VAR_9->tz_cooling_saved_freq;


 for (VAR_18 = VAR_13 - 1; VAR_18 >= 0; VAR_18--)
     if (VAR_12[VAR_18].total_set.freq >= VAR_16)
  break;


 if (VAR_18 == -1)
     VAR_18++;


 if (VAR_18 == 0 || VAR_16 == VAR_9->tz_cooling_saved_freq) {
     VAR_14 = FUNC_6(VAR_9);
     if (VAR_14 == 0)
  VAR_9->tz_cooling_active = VAR_5;
     goto out;
 }
    }


    if (VAR_12[VAR_18].total_set.freq != VAR_15) {
 FUNC_0(VAR_9->tz_dev, FUNC_5(VAR_9->tz_dev),
     "temperature %d.%dC: %screasing clock speed "
     "from %d MHz to %d MHz\n",
     FUNC_4(VAR_9->tz_temperature),
     (VAR_15 > VAR_12[VAR_18].total_set.freq) ? "de" : "in",
     VAR_15, VAR_12[VAR_18].total_set.freq);
 VAR_14 = FUNC_3(VAR_11, &VAR_12[VAR_18], VAR_1);
 if (VAR_14 == 0 && !VAR_9->tz_cooling_updated) {
     VAR_9->tz_cooling_saved_freq = VAR_15;
     VAR_9->tz_cooling_updated = VAR_8;
 }
    }

out:
    if (VAR_12)
 FUNC_9(VAR_12, VAR_7);
    return (VAR_14);
}
